/*
NOTE AGGIUNTIVE: Il gioco da cui sono partito è Snake, non sapendo se avessi avuto tutto il tempo per fare Pacman avevo pensato di partire da qualcosa di 
semplice, ma le lascio comunque il codice nella cartella Snake se vuole vederlo, è molto interessante lo stesso, il codice di Pacman usa come base quello
Non pensavo che fare l'algoritmo di pathfinding sarebbe stato così incasinato

ATTENZIONE: NON COMPILARE CON -O3 o -O2, sembra creare problemi, se l'input non va compilare in debug!!!!!!!!!!!!!!!!!
*/

#include<cstdlib>
#include<iostream>
#include<cstring>
#include<windows.h>
#include<cwchar>
#include<ctime>
#include<thread>
#include<conio.h>
using namespace std;

const HANDLE std_handle = GetStdHandle(STD_OUTPUT_HANDLE); 
const int KEY_UP=72, KEY_DOWN=80, KEY_LEFT=75, KEY_RIGHT=77, KEY_ENTER=13;  //associazione id tasti registrati da getch()
char background[18][25];
char nemici[18][25];
int player[2]; //matrice contenente le posizioni di pacman
int posNemici[3][2]; //matrice contenente le posizioni dei nemici
int framecount, mele, score, position, fps, speed, temp, start;
float tempo;
string temp_str;
int gameover; //0=in partita, 1=perso, 2=vinto
bool collision, tastieraON; //tastieraON è la variabile principale che abilita l'input dalla funzione in thread input.
int direction[2], temp1[2]; //variabili usate nella funzione enemiesMov, contengono la distanza nelle varie direzioni dal giocatore

void intro();
void Initialize();
void buildFrame();
void viewArcade();
void enemiesMov();
void updateEnemies(int a1, int a2, int b1, int b2, int c1, int c2);
void input();
void cronometro();

int main()
{
    thread t1(input);
    thread t2(cronometro);
    viewArcade();
    SetConsoleCursorPosition(std_handle, {0, 0});
    intro();
    if(start==1)
    {
        Initialize();
        buildFrame();
    }
    system("pause");
}

void intro()
{
    gameover=true;
    tastieraON=true;
    string button;
    int cont=0, selezione=0;
    bool showIstr=false;
    while(start==0)
    {
        cout<<"\n";
        if(cont==0)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //bianco
            cont=1;
        }
        else
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //giallo
            cont=0;
        }
        SetConsoleCursorPosition(std_handle, {30, 1});
        cout<<" _____        ______ __  __          _   _ ";
        SetConsoleCursorPosition(std_handle, {30, 2});
        cout<<"|  __ \\ /\\   / _____|  \\/  |   /\\   | \\ | |";
        SetConsoleCursorPosition(std_handle, {30, 3});
        cout<<"| |__) /  \\ | |     | \\  / |  /  \\  |  \\| |";
        SetConsoleCursorPosition(std_handle, {30, 4});
        cout<<"|  ___/ /\\ \\| |     | |\\/| | / /\\ \\ | . ` |";
        SetConsoleCursorPosition(std_handle, {30, 5});
        cout<<"| |  / ____ \\ |_____| |  | |/ ____ \\| |\\  |";
        SetConsoleCursorPosition(std_handle, {30, 6});
        cout<<"|_| /_/    \\_\\______|_|  |_/_/    \\_\\_| \\_|";

        SetConsoleCursorPosition(std_handle, {30, 8});

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //bianco
        switch(selezione)
        {
            case 0: button=" =>INIZIA           INFO            ESCI\n"; break;
            case 1: button="   INIZIA         =>INFO            ESCI\n"; break;
            case 2: button="   INIZIA           INFO          =>ESCI\n"; break;
        }

        switch(position)
        {
            case 2:
                if(selezione==0)
                    selezione=1;
                else
                    if(selezione==1)
                        selezione=2;
                break;

            case 4: 
                if(selezione==1)
                    selezione=0;
                else
                    if(selezione==2)
                        selezione=1;
                break;

            case 5:
                if(selezione==0) //avvia gioco
                    start=1;
                if(selezione==1) //apri e chiudi info
                {   if(!showIstr)
                        showIstr=true;
                    else
                        showIstr=false;
                }
                if(selezione==2) //se è 2 allora esci dal loop e chidui il programma
                {
                    start=2;
                    tastieraON=false;
                }
                break;
        }
        cout<<button;
        if(showIstr)//mostra istruzioni se richiesto
        {
            SetConsoleCursorPosition(std_handle, {25, 11});
            cout<<"Le istruzioni sono semplici, Pacman e' il player e";
            SetConsoleCursorPosition(std_handle, {25, 12});
            cout<<"deve scappare dai 3 fantasmi che partono dalla zona";
            SetConsoleCursorPosition(std_handle, {25, 13});
            cout<<"centrale. Il tuo obiettivo e' prendere tutti gli ";
            SetConsoleCursorPosition(std_handle, {25, 14});
            cout<<"oggetti nella mappa. BUONA FORTUNA!\n";
        }
        else
        {
            SetConsoleCursorPosition(std_handle, {25, 11});
            cout<<"                                                      ";
            SetConsoleCursorPosition(std_handle, {25, 12});
            cout<<"                                                      ";
            SetConsoleCursorPosition(std_handle, {25, 13});
            cout<<"                                                      ";
            SetConsoleCursorPosition(std_handle, {25, 14});
            cout<<"                                                      ";
        }
        position=0;
        Sleep(300);
        //riporta il cursore in alto a sinistra
        viewArcade();
        SetConsoleCursorPosition(std_handle, {0, 0});
    }
    system("cls");
}

void Initialize() //prepara tutto l'ambiente del gioco
{
    //inizializza variabili
    framecount=0;
    tastieraON=true;
    tempo=0.0;
    fps=0;
    mele=0;
    speed=150;
    score=0;
    position=0;
    collision=false;
    gameover=0;

    srand(time(NULL));

    //svuota vettore player
    for(int i=0; player[i]!=0; i++)  
        player[i]=0;

    //resetta vettore posNemici
    updateEnemies(6,10,6,12,6,14);

    //caricamento griglia di gioco, aggiunta muri e dello spazio svuoto al'interno
    for(int i=0; i<18; i++)
    {
        for(int j=0; j<25; j++)
        {
            background[i][j] = ' ';
            nemici[i][j] = ' ';
        }
    }

    strcpy(background[0], "-------------------------");
    strcpy(background[1], "|***********************|");
    strcpy(background[2], "|*+-+*---*-   -*---*---*|");
    strcpy(background[3], "|*| |*|***|   |***|*| |*|");
    strcpy(background[4], "|*+-+*|*+-+   +-+*|*+-+*|");
    strcpy(background[5], "|*****|*|       |*|*****|");
    strcpy(background[6], "|*----+*|       |*+----*|");
    strcpy(background[7], "|*******|       |*******|");
    strcpy(background[8], "|*++*++*|       |*++*++*|");
    strcpy(background[9], "|*++*++*+-------+*++*++*|");
    strcpy(background[10], "|***********************|");
    strcpy(background[11], "|*------+*++*++*+------*|");
    strcpy(background[12], "|*****| |*||*||*| |*****|");
    strcpy(background[13], "|*+-+*| |*||*||*| |*+-+*|");
    strcpy(background[14], "|*| |*| |*||*||*| |*| |*|");
    strcpy(background[15], "|*+-+*+-+*++*++*+-+*+-+*|");
    strcpy(background[16], "|***********************|");
    strcpy(background[17], "-------------------------");


    //imposta il punto di partenza di pacman
    player[0] = 16; //riga
    player[1] = 1; //colonna

}

void buildFrame()
{
    while(!gameover)
    {
        cout<<"\n";
        cout<<"\t\t\t\t\t\tPACMAN\t\t"<<"Punteggio: "<<score<<"\n";
        
        //cancella la posizione residua del player dopo l'ultimo frame
        if(player[0]!=0)
            background[player[0]][player[1]] = ' ';

        switch(position) //movimento player
        {
            case 0: break;
            case 1: player[0]--; break;
            case 2: player[1]++; break;
            case 3: player[0]++; break;
            case 4: player[1]--; break;
        }

        switch(background[player[0]][player[1]]) //controllo collisioni con i muri
        {
            case '-': collision=true; break;
            case '|': collision=true; break;
            case '+': collision=true; break;
            case '*': score++; break;
        }
        if(collision)
        {
            switch(position) //se ha sbattuto dentro ad un muro allora fallo tornare indietro prima che il frame renderizzi
            {
                case 0: break;
                case 1: player[0]++; break;
                case 2: player[1]--; break;
                case 3: player[0]--; break;
                case 4: player[1]++; break;
            }
            collision=false;
        }

        if(score==171) //partita finita
            gameover=2;

        //disegna il giocatore nella griglia
        background[player[0]][player[1]] = 'C';  

        enemiesMov(); //aggiorna posizione posNemici
        
        if(nemici[player[0]][player[1]]=='M') //se il nemico tocca il player, è gameover
            gameover=1;

        for(int i=0; i<18; i++) //render del frame
        {
            cout<<"\t\t\t   ";
            for(int j=0; j<25; j++)
            {
                if(nemici[i][j]!='M')
                {
                    if(background[i][j]=='*')
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //giallo
                    else
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //bianco
                    cout<<background[i][j]<<" ";
                }
                else
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //bianco
                    cout<<nemici[i][j]<<" ";
                }
            }
            cout<<"\n";
        }

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //bianco
        cout<<"\t\t\t\t\t\t\t\t  TIME: "<<tempo<<endl;
        //cout<<"direction: "<<direction[0]<<" "<<direction[1]<<endl;
        //cout<<"temp1: "<<temp1[0]<<" "<<temp1[1]<<endl;

        //riporta il cursore in alto a sinistra
        viewArcade();
        SetConsoleCursorPosition(std_handle, {0, 0});

        framecount++;
        Sleep(speed);
    }

    tastieraON=false;
    SetConsoleCursorPosition(std_handle, {0, 9});
    
    if(gameover==1)
        cout<<"\t\t\t\t\t       GAME OVER\n"<<"\t\t\t\t\t       HAI PERSO\n\n\n\n\n\n\n\n\n"<<endl;
    else
        cout<<"\t\t\t\t\t          HAI   \n"<<"\t\t\t\t\t        VINTO!   \n\n\n\n\n\n\n\n\n"<<endl;

    do //se la scelta è errata allora mostra la scritta riprovare nella stessa zona, e poi rimostra lo stesso messaggio
    {
        SetConsoleCursorPosition(std_handle, {24, 20});
        cout<<"Vuoi riprovare? [s/n]: ";
        cin>>temp_str;
        if(temp_str!="s" && temp_str!="n")
        {
            SetConsoleCursorPosition(std_handle, {24, 20});
            cout<<"                                  ";
            SetConsoleCursorPosition(std_handle, {24, 20});
            cout<<"Scelta errata, riprovare.\n";
            Sleep(1000);
            SetConsoleCursorPosition(std_handle, {24, 20});
            cout<<"                                  ";
        }
    } while (temp_str!="s" && temp_str!="n");
    if(temp_str=="s")
    {
        system("cls");
        Initialize();
        buildFrame();
    }
}

void enemiesMov()
{   
    if(framecount<16)
        for(int n=0; n<3; n++)
            nemici[posNemici[n][0]][posNemici[n][1]]=' ';

    switch(framecount) //animazione iniziale dei posNemici
    {
        case 2: updateEnemies(5,10,5,12,5,14); break;
        case 4: updateEnemies(5,11,5,12,5,13); break;
        case 6: updateEnemies(4,11,4,12,4,13); break;
        case 8: updateEnemies(3,11,3,12,3,13); break;
        case 10: updateEnemies(2,11,2,12,2,13); break;
        case 12: updateEnemies(1,11,1,12,1,13); break;
        case 14: updateEnemies(1,10,1,12,1,14); break;
        case 16:
            updateEnemies(1,9,1,12,1,15);
            background[2][11]='-'; //chiudi il portellone di spawn dei posNemici
            background[2][12]='-'; 
            background[2][13]='-';
            break;
    }

    for(int n=0; n<3; n++) //anche troppo semplice algoritmo di pathfinding (imperfetto aggiungerei), farina del mio sacco
    {

        if(framecount>16 && framecount%2==0) //i posNemici si muovono ogni 2 frame così il gioco è più facile 
        {
            //1 up, 2 right, 3 down, 4 left

            //calcola la distanza dal player da ogni direzione
                temp1[0]=posNemici[n][0]-player[0];
                temp1[1]=posNemici[n][1]-player[1];

            //determina la direzione di ogni distanza
            if(temp1[0]==0) //fix per risolvere un bug, un vero programmatore mette pezze a caso nel codice senza trovarne la causa, metrito 2 punti in più (scherzo)
                temp1[0]=999;
            else
                if(temp1[0]>0) 
                    direction[0]=1;
                else
                    direction[0]=3;

            if(temp1[1]>0)
                direction[1]=4;
            else
                direction[1]=2;

            nemici[posNemici[n][0]][posNemici[n][1]]=' ';

            bool mosso=false;
            for(int i=0; i<2 && !mosso; i++)
            {
                switch(direction[i])
                {
                    case 1:
                        if(background[posNemici[n][0]-1][posNemici[n][1]]!='-' && background[posNemici[n][0]-1][posNemici[n][1]]!='|' && background[posNemici[n][0]-1][posNemici[n][1]]!='+' && nemici[posNemici[n][0]-1][posNemici[n][1]]!='M')
                        {
                            posNemici[n][0]--;
                            mosso=true;
                        }    
                        break;

                    case 2:
                        if(background[posNemici[n][0]][posNemici[n][1]+1]!='-' && background[posNemici[n][0]][posNemici[n][1]+1]!='|' && background[posNemici[n][0]][posNemici[n][1]+1]!='+' && nemici[posNemici[n][0]][posNemici[n][1]+1]!='M')
                        {
                            posNemici[n][1]++;
                            mosso=true;
                        }    
                        break;

                    case 3:
                        if(background[posNemici[n][0]+1][posNemici[n][1]]!='-' && background[posNemici[n][0]+1][posNemici[n][1]]!='|' && background[posNemici[n][0]+1][posNemici[n][1]]!='+' && nemici[posNemici[n][0]+1][posNemici[n][1]]!='M')
                        {
                            posNemici[n][0]++;
                            mosso=true;
                        }    
                        break;
                    
                    case 4: 
                        if(background[posNemici[n][0]][posNemici[n][1]-1]!='-' && background[posNemici[n][0]][posNemici[n][1]-1]!='|' && background[posNemici[n][0]][posNemici[n][1]-1]!='+' && nemici[posNemici[n][0]][posNemici[n][1]-1]!='M')
                        {
                            posNemici[n][1]--;
                            mosso=true;
                        }    
                        break;
                }

            }

            nemici[posNemici[n][0]][posNemici[n][1]]='M';

        }
    }
}

void updateEnemies(int a1, int a2, int b1, int b2, int c1, int c2)
{
    posNemici[0][0]=a1;
    posNemici[0][1]=a2;
    posNemici[1][0]=b1;
    posNemici[1][1]=b2;
    posNemici[2][0]=c1;
    posNemici[2][1]=c2;
    for(int n=0; n<3; n++)
        nemici[posNemici[n][0]][posNemici[n][1]]='M';
}

void viewArcade() //disegna un'arcade intorno ad ogni frame, sia in game che nel menù
{
    for(int i=0; i<22; i++)
    {
        SetConsoleCursorPosition(std_handle, {23, i});
        cout<<'|';
        SetConsoleCursorPosition(std_handle, {79, i});
        cout<<'|';
    }
    for(int i=23; i<23+57; i++)
    {
        SetConsoleCursorPosition(std_handle, {i, 0});
        cout<<'-';
        SetConsoleCursorPosition(std_handle, {i, 21});
        cout<<'-';
    }
    SetConsoleCursorPosition(std_handle, {0, 22});
    cout<<"                      /       /               ____     ____            y        \\"<<endl;
    cout<<"                     /   ---------           |____|   |____|        a     x      \\"<<endl;
    cout<<"                    /       /                                          b          \\"<<endl;
    cout<<"                    ---------------------------------------------------------------"<<endl;
    cout<<"                    |                                                             |"<<endl;
    cout<<"                    |                                                             |"<<endl;
    cout<<"                    |                                                             |"<<endl;


    

}

void input()
{
    while(true) //continua sempre ma registra i tasti solo in partita
        if(tastieraON) 
            switch((getch())) 
            {
            case KEY_UP:
                position=1;
                break;
            case KEY_DOWN:
                position=3;
                break;
            case KEY_RIGHT:
                position=2;
                break;
            case KEY_LEFT:
                position=4;
                break;
            case KEY_ENTER:
                if(gameover)
                    position=5;
                    break;
            }
}

void cronometro() //calcola il tempo del gicatore nel gioco
{
    while(true)
        while(!gameover)
        {
            Sleep(1000);
            tempo = tempo+1;
        }
}