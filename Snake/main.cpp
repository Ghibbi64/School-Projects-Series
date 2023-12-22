#include<cstdlib>
#include<iostream>
#include<cstring>
#include<windows.h>
#include<cwchar>
#include<ctime>
#include<thread>
#include<conio.h>
using namespace std;

const int KEY_UP=72, KEY_DOWN=80, KEY_LEFT=75, KEY_RIGHT=77;  //associazione id tasti registrati da getch()
char background[18][18]; //matrice da stampare
int player[256][2]; //matrice contenente le posizioni di ogni pezzo dello snake, una "pezzo" per riga
int framecount, mele, score, position, fps, speed, temp;
string temp_str;
bool gameover;

void Initialize();
void updateFrame();
void input();
void calcolofps();

int main()
{
    Initialize();
    thread t1(input);
    thread t2(calcolofps);
    updateFrame();

    system("pause");
}

void Initialize()
{
    //inizializza variabili
    framecount=0;
    mele=0;
    speed=150;
    score=0;
    position=0;
    gameover=false;

    //cambia grandezza font usando l'api pietosa di windows
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    cfi.nFont = 0;
    cfi.dwFontSize.X = 0;                   
    cfi.dwFontSize.Y = 24;                  
    cfi.FontFamily = FF_DONTCARE;
    cfi.FontWeight = FW_NORMAL;
    wcscpy(cfi.FaceName, L"Consolas");
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

    srand(time(NULL));

    //svuota vettore player
    for(int i=0; player[i][0]!=0; i++)
        {   
            player[i][0]=0;
            player[i][1]=0;
        }

    //caricamento griglia di gioco, aggiunta muri e dello spazio svuoto al'interno
    for(int i=0; i<18; i++)
    {
        for(int j=0; j<18; j++)
            background[i][j] = ' ';
    }
    for(int i=0; background[17][0]!='|'; i++)
    {
        background[i][0] = '|';
        background[i][17] = '|';
        background[0][i] = '-';
        background[17][i] = '-'; 
    }
    background[17][0] = '-'; 

    //imposta il punto di partenza di snake
    player[0][0] = 13; //riga
    player[0][1] = 4; //colonna
}

void updateFrame()
{
    while(!gameover)
    {
        cout<<"\t\t\t\t\t\tSNAKE\t\t"<<"Punteggio: "<<score<<"\n";
        
        //cancella la posizione residua dello snake rispetto all'ultimo frame
        if(player[score+1][0]!=0)
            background[player[score+1][0]][player[score+1][1]] = ' ';

        switch(position) //movimento testa
        {
            case 0: break;
            case 1: player[0][0]--; break;
            case 2: player[0][1]++; break;
            case 3: player[0][0]++; break;
            case 4: player[0][1]--; break;
        }

        switch(background[player[0][0]][player[0][1]])
        {
            case '\3': score++; mele=0; break;
            case '-': gameover=true; break;
            case '|': gameover=true; break;
            case 'X': gameover=true; break;
        }

        for(int i=score+1; i>0; i--) //shift player
        {
            player[i][0] = player[i-1][0];
            player[i][1] = player[i-1][1];   
        }

        //disegna il giocatore nella griglia
        for(int i=1; player[i][0]!=0; i++)
        {   
                background[player[i][0]][player[i][1]] = 'X';
        }
        background[player[0][0]][player[0][1]] = '#'; //la testa è diversa giusto per bellezza
        
        if(mele==0) //se non ci sono mele nell griglia, aggiungine una in un punto che non sia occupato dallo snake
        {
            //inserimento casuale mela
            int melaX;
            int melaY;
            bool flag;
            do
            {
                flag=false;
                melaX = rand()%16+1;
                melaY = rand()%16+1;
                if(background[melaX][melaY]!='X' && background[melaX][melaY]!='#')
                    flag = true;
            }
            while(!flag);
            background[melaX][melaY] = '\3';
            mele++;
        }
        
        for(int i=0; i<18; i++) //render del frame
        {
            cout<<"\t\t\t\t";
            for(int j=0; j<18; j++)
                cout<<background[i][j]<<" ";
            cout<<"\n";
        }
        cout<<"\t\t\t\t\t\t\t\tFPS: "<<fps<<endl;
        cout<<"\t\t\t\t\t\t\t\tSPEED: "<<151-speed<<endl;

        //riporta il cursore in alto a sinistra
        const HANDLE std_handle = GetStdHandle(STD_OUTPUT_HANDLE); 
        const COORD top_left = {0, 0};
        SetConsoleCursorPosition(std_handle, top_left);

        if(score%10==0 && score!=temp && score!=0)
        {
            speed=speed-5;
            temp = score;
        }
        framecount++;
        Sleep(speed);
    }

    const HANDLE std_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    const COORD middle_left = {0, 9};
    SetConsoleCursorPosition(std_handle, middle_left);

    cout<<"\t\t\t\t\t      GAME OVER\n"<<"\t\t\t\t\t      HAI PERSO\n\n\n\n\n\n\n\n\n\n"<<endl;
    do
    {
        cout<<"Vuoi riprovare? [s/n]: ";
        cin>>temp_str;
        if(temp_str!="s" && temp_str!="n")
            cout<<"Scelta errata, riprovare.\n";
    } while (temp_str!="s" && temp_str!="n");
    if(temp_str=="s")
    {
        system("cls");
        Initialize();
        updateFrame();
    }
}

void input()
{
    while(true) //continua sempre ma registra i tasti solo in partita
    {
        if(!gameover) 
            switch((getch())) {
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
            }
    }
}

void calcolofps()
{
    while(!gameover)
    {
        Sleep(1000);
        fps = framecount;
        framecount = 0;
    }
}