#include<fstream>
#include<iostream>
#include<cstdlib>
#include<windows.h>
#include<cstring>
#include<conio.h>
#include<filesystem>
using namespace std;

void Initialize();
void MostraFreccia(int i);

//descrizione delle funzioni nella loro dichiarazione
void Menu();
void Aggiungi();
void Modifica();
void Cancella();
void Visualizza();
void AccessoDiretto();
void Ricerca();
void Ricerca2();
void Ricerca3();
void Compatta();

struct orario //un elemento dell'archivio è chiamato orario anche nei commenti
{
    char partenza[10]; //città da dove il treno è partito
    char arrivo[10]; //città di arrivo
    char orario_p[7]; //orario di partenza
    char orario_a[7]; //orario di arrivo
    int ritardo; //minuti di ritardo
    char modello[25]; //modello del treno
    bool deleted = false; //flag per indicare se l'orario è stato eliminato
};

orario treno; //è un buffer per le letture degli orari
fstream f; //archivio principale
fstream f2; //archivio temporaneo per la compattazione
int N; //variabile che conterrà il numero di entry presenti nell'archivio
string freccia; //contiene l'ascii della freccia che viene visualizzata nel menu
string no_freccia;
int position; //indica l'oggetto selezionato nel menu


int main()
{
    Initialize();
    Menu();
}

void Initialize() //funzione che inizializza i valori base
{
    //creo il file se non esiste
    f.open("archive.bin", ios::binary | ios::out);
    f.close();

    //calcolo di quanti elementi sono stati salvati nell'archivio per caricarlo su N
    f.open("archive.bin", ios::binary | ios::in);
    f.seekg(0, ios::end);
    N = f.tellg()/sizeof(treno);
    f.close();

    //roba per la ui del menù
    freccia = "-->"; 
    no_freccia = "   ";
    position = 1;
}

/*
La funzione menu è stata fatta tramite un interfaccia grafica che permette di leggere con getch() la pressione delle freccie su e giù e del tasto enter per navigare con più
eleganza. La posizione dell'oggetto selezionato è salvata nella variabile position che viene aggiornata ogni volta che premi una delle 2 freccie (a meno che non sei
arrivato agli estremi del menu), quando premi enter tramite uno switch verrà richiamata poi la funzione richiesta*/
void Menu()
{
    bool end=false;
    while(!end)
    {
        int temp;
        bool flag=false;
        while(!flag)
        {
            cout<<"TERMINALE CONTROLLO TRENITALIA\n\n";
            MostraFreccia(1);
            cout<<"Aggiungi un elemento all'archivio\n";
            MostraFreccia(2);
            cout<<"Modifica un elemento dell'archivio\n";
            MostraFreccia(3);
            cout<<"Cancella un elemento dell'archivio\n";
            MostraFreccia(4);
            cout<<"Compatta l'archivio\n";
            MostraFreccia(5);
            cout<<"Visualizza l'intero archivio\n";
            MostraFreccia(6);
            cout<<"Visualizza un elemento dalla sua posizione\n";
            MostraFreccia(7);
            cout<<"Ricerca per citta'\n";
            MostraFreccia(8);
            cout<<"Ricerca per ritardo previsto\n";
            MostraFreccia(9);
            cout<<"Ricerca per modello\n";
            MostraFreccia(10);
            cout<<"Esci\n";

            switch(getch())
            {
                case 72: if(position!=1) position--; break;
                case 80: if(position!=10) position++; break;
                case 13: flag=1; break;
            }
            system("cls");
        }

        switch(position)
        {
            case 1: Aggiungi(); break;
            case 2: temp=position; Modifica(); position=temp; break; //visto che uso la ui anche in questa funzione, mi salvo la vecchia posizione della freccia qua
            case 3: Cancella(); break;
            case 4: Compatta(); break;
            case 5: Visualizza(); break;
            case 6: AccessoDiretto(); break;
            case 7: Ricerca(); break;
            case 8: Ricerca2(); break;
            case 9: Ricerca3(); break;
            case 10: end=true; break;
        }
        system("pause");
        system("cls");
    }
}

void MostraFreccia(int i) //funzione usata nei menu per stampare o meno la freccia solo affianco alla voce di menu selezionata
{
    if(position==i)
        cout<<freccia;
    else
        cout<<no_freccia;
}

//funzione per aggiungere un orario all'archivio
void Aggiungi()
{
    char flag; //usato per confermare l'aggiunta

    system("cls");
    cout<<"AGGIUNGI ORARIO\n\n";
    cout<<"Stazione di parteza: ";
    cin>>treno.partenza;
    cout<<"Stazione di arrivo: ";
    cin>>treno.arrivo;
    cout<<"Orario di parteza: ";
    cin>>treno.orario_p;
    cout<<"Orario di parteza: ";
    cin>>treno.orario_a;
    cout<<"Ritardo previsto (in minuti interi): ";
    cin>>treno.ritardo;
    cout<<"Modello treno: ";
    cin>>treno.modello;

    system("cls");
    cout<<"CONFERMA AGGIUNTA\n\n";
    cout<<"Elemento N*"<<N+1<<"\n";
    cout<<"------------------------------\n";
    cout<<"|PARTENZA: "<<treno.partenza<<"\n";
    cout<<"|ARRIVO: "<<treno.arrivo<<"\n";
    cout<<"|ORARIO PARTENZA: "<<treno.orario_p<<"\n";
    cout<<"|ORARIO ARRIVO: "<<treno.orario_a<<"\n";
    cout<<"|RITARDO PREVISTO: "<<treno.ritardo<<" minuti\n";
    cout<<"|TRENO: "<<treno.modello<<"\n";
    cout<<"------------------------------\n\n";

    cout<<"Aggiungere questo orario all'archivio? [s/n]:  ";
    cin>>flag;
    if(flag=='s') //se confermi apre il file in appeand e scrive l'elemento richiesto alla fine del file per poi richiuderlo, aumentano N
    {
        cout<<"Scrittura\n";
        f.open("archive.bin", ios::binary | ios::out | ios::app);
        f.write((char*)&treno, sizeof(treno));
        cout<<"Completato\n";
        N++;
        f.close();
    }
}

//funzione per modificare un orario
void Modifica()
{
    char orario[7]; //array che contiene il paramentro da cercare
    bool trovato=false; //indica se la ricerca è andata a buon fine
    do
    {
        trovato=false;
        cout<<"Inserisci l'orario di partenza del treno da modificare: ";
        cin>>orario;
        f.open("archive.bin", ios::binary | ios::in | ios::out);
        for(int i=0; i!=N && !trovato; i++) //cerca partendo dall'inizio la voce che ha il valore richiesto e si ferma quando e se lo trova, se no si ferma alla fine del file
        {
            f.read((char*)&treno, sizeof(treno));
            if(!strcmp(treno.orario_p, orario)) //se lo trova alza il flag trovato
                trovato=true;
        }
        if(!trovato) //se non è stato trovato fa questo
        {
            cout<<"Errore: oggetto inesistente\n";
            cout<<"Riprova\n";
            Sleep(2000);
            system("cls");
            f.close();
        }
    }while(!trovato);

    f.seekg(-sizeof(treno), ios::cur);
    f.read((char*)&treno, sizeof(treno));
    if(treno.deleted)
        cout<<"Errore: orario eliminato\n";
    else
    {
        position=1; //qua riprendo la stessa struttura del menu principale, usando le stesse variabili e funzionamento di base
        bool flag=false;
        bool finish=false;
        while(!finish)
        {
            while(!flag)
            {
                system("cls");
                cout<<"MODIFICA\n\n";
                cout<<"Scegli l'elemento da modificare\n";
                cout<<"------------------------------\n";
                MostraFreccia(1);
                cout<<"PARTENZA: "<<treno.partenza<<"\n";
                MostraFreccia(2);
                cout<<"ARRIVO: "<<treno.arrivo<<"\n";
                MostraFreccia(3);
                cout<<"ORARIO PARTENZA: "<<treno.orario_p<<"\n";
                MostraFreccia(4);
                cout<<"ORARIO ARRIVO: "<<treno.orario_a<<"\n";
                MostraFreccia(5);
                cout<<"RITARDO PREVISTO: "<<treno.ritardo<<" minuti\n";
                MostraFreccia(6);
                cout<<"TRENO: "<<treno.modello<<"\n";
                MostraFreccia(7);
                cout<<"FATTO\n";
                cout<<"------------------------------\n";

                switch(getch())
                {
                    case 72: if(position!=1) position--; system("cls"); break;
                    case 80: if(position!=7) position++; system("cls"); break;
                    case 13: flag=1; break;
                }
            }

            if(position!=7)
            {
                if(position==5) //se vuoi modificare il ritardo ti avvisa di scrivere solo il valore numerico dei minuti
                    cout<<"Inserisci solo il valore in minuti interi\n";

                cout<<"Inserisci nuovo valore: "; //viene richiesto il dato da sostituire con quello selezionato
                switch(position)
                {
                    case 1: cin>>treno.partenza; break;
                    case 2: cin>>treno.arrivo; break;
                    case 3: cin>>treno.orario_p; break;
                    case 4: cin>>treno.orario_a; break;
                    case 5: cin>>treno.ritardo; break;
                    case 6: cin>>treno.modello; break;
                }
            }
            else
                finish=true; //quando finisci la modifica viene flaggato questo booleano

            flag=false;

            if(finish) //se hai finito scrivi la modifica
            {
                cout<<"Salvataggio\n";
                f.seekg(-sizeof(treno), ios::cur);
                f.write((char*)&treno, sizeof(treno));
                cout<<"Completato\n";
            }
        }

    }
    f.close();
}

void Cancella()
{
    char flag;
    char orario[7]; //per la ricerca la funzione è 1:1 per la funzione modifica
    bool trovato=false;
    do
    {
        trovato=false;
        cout<<"Inserisci l'orario di partenza del treno da modificare: ";
        cin>>orario;
        f.open("archive.bin", ios::binary | ios::in | ios::out);
        for(int i=0; i!=N && !trovato; i++)
        {
            f.read((char*)&treno, sizeof(treno));
            if(!strcmp(treno.orario_p, orario))
                trovato=true;
        }
        if(!trovato)
        {
            cout<<"Errore: oggetto inesistente\n";
            cout<<"Riprova\n";
            Sleep(2000);
            system("cls");
            f.close();
        }
    }while(!trovato);

    f.seekg(-sizeof(treno), ios::cur);
    f.read((char*)&treno, sizeof(treno));
    if(treno.deleted)
        cout<<"Errore: orario gia' eliminato\n";
    else
    {
        cout<<"------------------------------\n";
        cout<<"|PARTENZA: "<<treno.partenza<<"\n";
        cout<<"|ARRIVO: "<<treno.arrivo<<"\n";
        cout<<"|ORARIO PARTENZA: "<<treno.orario_p<<"\n";
        cout<<"|ORARIO ARRIVO: "<<treno.orario_a<<"\n";
        cout<<"|RITARDO PREVISTO: "<<treno.ritardo<<" minuti\n";
        cout<<"|TRENO: "<<treno.modello<<"\n";
        cout<<"------------------------------\n";
        cout<<"Eliminare questo elemento? [s/n]: ";
        cin>>flag;
        if(flag=='s') //se confermo allora alza il flag di cancellamento dell'orario richiesto
        {
            treno.deleted = true;
            f.seekg(-sizeof(treno), ios::cur);
            f.write((char*)&treno, sizeof(treno));
        }
    }
    f.close();
}

//visualizza tutto l'archivio, apparte gli elementi cancellati, scorrendo in un loop tutto il file
void Visualizza()
{
    int cont=0; //viene usato per contare gli elementi non eliminati per poi fare il calcolo di quelli eliminati e visualizzarlo
    cout<<"VISUALIZZA TUTTO L'ARCHIVIO\n\n";

    f.open("archive.bin", ios::binary | ios::in);
    for(int i=0; i<N; i++)
    {
        f.read((char*)&treno, sizeof(treno));
        if(!treno.deleted)
        {
            cout<<"------------------------------\n";
            cout<<"|PARTENZA: "<<treno.partenza<<"\n";
            cout<<"|ARRIVO: "<<treno.arrivo<<"\n";
            cout<<"|ORARIO PARTENZA: "<<treno.orario_p<<"\n";
            cout<<"|ORARIO ARRIVO: "<<treno.orario_a<<"\n";
            cout<<"|RITARDO PREVISTO: "<<treno.ritardo<<" minuti\n";
            cout<<"|TRENO: "<<treno.modello<<"\n";
            cout<<"------------------------------\n";
            cont++;
        }
    }
    cout<<"\nNumero totale di elementi: "<<cont<<"\n";
    cout<<"Numero di elementi eliminati: "<<N-cont<<"\n\n";
    f.close();
}

void AccessoDiretto()
{
    int access; //variabile per salvare l'index dell'orario da visualizzare
    do
    {
        //viene richiesto il valore e continua finché il valore è in un range esistente
        cout<<"ACCESSO DIRETTO\n\n";
        cout<<"Inserisci il numero dell'elemento che desideri visualizzare (si parte da 1): ";
        cin>>access;
        if(access<1 || access>N)
        {
            cout<<"Errore: oggetto inesistente\n";
            cout<<"Riprova\n";
            Sleep(2000);
            system("cls");
        }
    } while (access<1 || access>N);
    
    f.open("archive.bin", ios::binary | ios::in);
    f.seekg((access-1)*sizeof(treno), ios::beg);
    f.read((char*)&treno, sizeof(orario));
    if(treno.deleted)
        cout<<"Errore: orario eliminato\n";
    else
    {
        //visualizza l'elemento
        cout<<"------------------------------\n";
        cout<<"|PARTENZA: "<<treno.partenza<<"\n";
        cout<<"|ARRIVO: "<<treno.arrivo<<"\n";
        cout<<"|ORARIO PARTENZA: "<<treno.orario_p<<"\n";
        cout<<"|ORARIO ARRIVO: "<<treno.orario_a<<"\n";
        cout<<"|RITARDO PREVISTO: "<<treno.ritardo<<" minuti\n";
        cout<<"|TRENO: "<<treno.modello<<"\n";
        cout<<"------------------------------\n";
    }
    f.close();
}

//funzione per ricercare un orario tramite un nome di una città, cerca sia in partenza che in arrivo
void Ricerca()
{
    char cerca[10];
    cout<<"RICERCA PER CITTA'\n\n";
    cout<<"Inserisci la citta' da cercare: ";
    cin>>cerca;

    f.open("archive.bin", ios::binary | ios::in);
    for(int i=0; i<N; i++)
    {
        f.read((char*)&treno, sizeof(treno));
        if(!strcmp(treno.arrivo, cerca) || !strcmp(treno.partenza, cerca))
        {
            cout<<"------------------------------\n";
            cout<<"|PARTENZA: "<<treno.partenza<<"\n";
            cout<<"|ARRIVO: "<<treno.arrivo<<"\n";
            cout<<"|ORARIO PARTENZA: "<<treno.orario_p<<"\n";
            cout<<"|ORARIO ARRIVO: "<<treno.orario_a<<"\n";
            cout<<"|RITARDO PREVISTO: "<<treno.ritardo<<" minuti\n";
            cout<<"|TRENO: "<<treno.modello<<"\n";
            cout<<"------------------------------\n\n";
        }
    }
    f.close();
}

//funzione per ricercare un orario in base ad un range di minuti di ritardo previsti per il treno
void Ricerca2()
{
    int min;
    int max;
    cout<<"RICERCA PER RITARDO'\n\n";
    cout<<"Inserisci il ritardo previsto minimo: ";
    cin>>min;
    cout<<"Inserisci il ritardo previsto massimo: ";
    cin>>max;

    f.open("archive.bin", ios::binary | ios::in);
    for(int i=0; i<N; i++)
    {
        f.read((char*)&treno, sizeof(treno));
        if(treno.ritardo>=min && treno.ritardo<=max)
        {
            cout<<"------------------------------\n";
            cout<<"|PARTENZA: "<<treno.partenza<<"\n";
            cout<<"|ARRIVO: "<<treno.arrivo<<"\n";
            cout<<"|ORARIO PARTENZA: "<<treno.orario_p<<"\n";
            cout<<"|ORARIO ARRIVO: "<<treno.orario_a<<"\n";
            cout<<"|RITARDO PREVISTO: "<<treno.ritardo<<" minuti\n";
            cout<<"|TRENO: "<<treno.modello<<"\n";
            cout<<"------------------------------\n\n";
        }
    }
    f.close();
}

//funzione per ricercare un orario in base al modello del treno
void Ricerca3()
{
    char modello[10];
    cout<<"RICERCA PER MODELLO'\n\n";
    cout<<"Inserisci il nome del modello del treno: ";
    cin>>modello;

    f.open("archive.bin", ios::binary | ios::in);
    for(int i=0; i<N; i++)
    {
        f.read((char*)&treno, sizeof(treno));
        if(!strcmp(treno.modello, modello))
        {
            cout<<"------------------------------\n";
            cout<<"|PARTENZA: "<<treno.partenza<<"\n";
            cout<<"|ARRIVO: "<<treno.arrivo<<"\n";
            cout<<"|ORARIO PARTENZA: "<<treno.orario_p<<"\n";
            cout<<"|ORARIO ARRIVO: "<<treno.orario_a<<"\n";
            cout<<"|RITARDO PREVISTO: "<<treno.ritardo<<" minuti\n";
            cout<<"|TRENO: "<<treno.modello<<"\n";
            cout<<"------------------------------\n\n";
        }
    }
    f.close();
}

//funzione per compattare l'archivio eliminando fisicamente gli elementi cancellati
void Compatta()
{
    char conferma;
    cout<<"COMPATTA ARCHIVIO\n\n";
    cout<<"Sicuro di voler compattare l'archivio? [s/n]: ";
    cin>>conferma;

    if(conferma) //se si conferma crea un file temporaneo
    {
        f.open("archive.bin", ios::binary | ios::in);
        f2.open("archive.temp", ios::binary | ios::out);
        
        for(int i=0; i<N; i++) //copia tutti gli elementi non cancellati nel file temporaneo
        {
            f.read((char*)&treno, sizeof(treno));
            if(!treno.deleted)
                f2.write((char*)&treno, sizeof(treno));
        }
        f.close(); //chiudi entrambi i file
        f2.close();
        filesystem::remove("archive.bin"); //rimuovi il vecchio archivio
        filesystem::copy("archive.temp", "archive.bin"); //copia il file temporaneo e rinominalo come l'archivio principale
        filesystem::remove("archive.temp"); //rimuovi il file temporaneo
        Initialize(); //reinizializza per ricalcolare il valore di N
    }
}