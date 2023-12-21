#include<cstdlib>
#include<iostream>
#include<ctime>
#include<cstring>
#include<windows.h> //includo anche windows.h per usare Sleep() e PlaySound()
using namespace std;

int tempInt,mcomp,pcomp,pgioc,situazione,nPartita;
string tempString,mgioc;

string textPunteggioG0,textPunteggioG1,textPunteggioG2; //tutte e 6 variabili che contengono il punteggio aggirnato da MOSTRARE affianco alle box
string textPunteggioC0,textPunteggioC1,textPunteggioC2; 

int main()
{
//Inizializzo variabili punteggio, punteggio da stampare e numero della partita.
	nPartita = 0;
    pcomp = 0;
    pgioc = 0;
	textPunteggioG0 = " _ "; //zero [giocatore]
	textPunteggioG1 = "|_|";
	textPunteggioG2 = "   ";
	textPunteggioC0 = " _ "; //zero [computer]
	textPunteggioC1 = "|_|";
	textPunteggioC2 = "   ";
//________________________________________AVVISO RISOLUZIONE____________________________________________________________________________________________
    system("cls");
    cout<<"                                      !!!ATTENZIONE!!!                                      "<<endl;
    cout<<"                  PER UN'ESPERIENZA OTTIMALE NON ANDARE A SCHERMO INTERO ED                 "<<endl;
	cout<<"                         ADATTARE LA FINESTRA PER FARLA STARE ENTRO                         "<<endl;
    cout<<"                           QUESTI BORDI SENZA DISTORCERE LE BARRE.                          "<<endl<<endl<<endl;
    cout<<"|                                                                                           |"<<endl;
	cout<<"|-------------------------------------------------------------------------------------------|"<<endl;
    cout<<"|                                                                                           |"<<endl<<endl;
    system("pause");
	PlaySound(TEXT("sound/button_click_se.wav"), NULL, SND_FILENAME | SND_ASYNC); 
    system("cls");
    Sleep(500);
//________________________________FINE AVVISO RISOLUZIONE_______________________________________________________________________________________________

//_______________________________inizio schermata caricamento____________________________________________________________________________________________
	cout<<"--------------------------------------------------------------------------------------------"<<endl;Sleep(100);
	cout<<"	                    ------------------------------------- "<<endl;Sleep(100);
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;Sleep(100);
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;Sleep(100);
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;Sleep(100);
	cout<<"                           |                                     |"<<endl;Sleep(100);
	cout<<"	                    ------------------------------------- "<<endl;Sleep(100);
	cout<<"\n\n";
	Sleep(100);
	cout<<"BENVENUTO NEL GIOCO DELLA MORRA CINESE IN C++"<<endl;
	Sleep(100);
	
	cout<<"caricamento.\n";
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	Sleep(700);
	system("cls");
	
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  "<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n\n";
	cout<<"BENVENUTO NEL GIOCO DELLA MORRA CINESE IN C++"<<endl;
	
	cout<<"caricamento..\n";
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	Sleep(700);
	system("cls");
	
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  "<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n\n";
	cout<<"BENVENUTO NEL GIOCO DELLA MORRA CINESE IN C++"<<endl;
	
	cout<<"caricamento...\n";
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	Sleep(700);
	system("cls");
	
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  "<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n\n";
	cout<<"BENVENUTO NEL GIOCO DELLA MORRA CINESE IN C++"<<endl;
	
	cout<<"caricamento.\n";
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	Sleep(700);
	system("cls");
	
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  "<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n\n";
	cout<<"BENVENUTO NEL GIOCO DELLA MORRA CINESE IN C++"<<endl;
	
	cout<<"caricamento..\n";
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	Sleep(700);
	system("cls");
	
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  "<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n\n";
	cout<<"BENVENUTO NEL GIOCO DELLA MORRA CINESE IN C++"<<endl;

	cout<<"caricamento...\n";
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	Sleep(1000);
	system("cls");
	PlaySound(NULL, NULL, SND_FILENAME | SND_ASYNC); 
//_______________________________fine schermata caricamento____________________________________________________________________________________________

//__________________________________________MENU'______________________________________________________________________________
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  "<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n\n";
	cout<<"                                     by Gabriel Prandini\n";
	cout<<"                             un lavoro per Gianfranco Ciaschetti\n\n";
	cout<<"                                   PREMI INVIO PER GIOCARE\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cin.get();
	PlaySound(TEXT("sound/button_click_se.wav"), NULL, SND_FILENAME | SND_ASYNC); 
	Sleep(300);
	system("cls");
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  "<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n\n";
	cout<<"                                     by Gabriel Prandini\n";
	cout<<"                             un lavoro per Gianfranco Ciaschetti\n\n";
	cout<<"                                \n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	Sleep(300);
	system("cls");
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  "<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n\n";
	cout<<"                                     by Gabriel Prandini\n";
	cout<<"                             un lavoro per Gianfranco Ciaschetti\n\n";
	cout<<"                                   PREMI INVIO PER GIOCARE\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	Sleep(300);
	system("cls");
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  "<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n\n";
	cout<<"                                     by Gabriel Prandini\n";
	cout<<"                             un lavoro per Gianfranco Ciaschetti\n\n";
	cout<<"                                \n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	Sleep(300);
	system("cls");
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  "<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n\n";
	cout<<"                                     by Gabriel Prandini\n";
	cout<<"                             un lavoro per Gianfranco Ciaschetti\n\n";
	cout<<"                                   PREMI INVIO PER GIOCARE\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	Sleep(300);
	system("cls");
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  "<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n\n";
	cout<<"                                     by Gabriel Prandini\n";
	cout<<"                             un lavoro per Gianfranco Ciaschetti\n\n";
	cout<<"                                \n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	Sleep(300);
	system("cls");
//__________________________________________fine menu'_______________________________________________________

//_________________________________REGOLE____________________________________________________________________________
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  "<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	cout<<"                                       REGOLE DI GIOCO          \n"<<endl;
	cout<<"     Il gioco della morra cinese si basa su 3 round dove il computer ed il giocatore     \n";
	cout<<"   devono scegliere una mossa da giocare, chi vince riceve un punto, a pareggio nessuno   \n";
	cout<<"         ne prende, forbice batte carta, sasso batte forbici e carta batte sasso.        \n\n";
	cout<<"                                        INDICE MOSSE                       \n";
	cout<<"         _____________________      _____________________      _____________________  \n";            
	cout<<"        |      @ #(           |    |         &@@@.       |    |        #. #         | \n";             
	cout<<"        |      .@  @.         |    |      ,@*   *@@@,    |    |   (#  /#  #  (/   *#| \n";             
	cout<<"        |@.  @#  #/ .@        |    |   #@&#@@,#@.   &*   |    |#.#(  #. .# #, #  # (| \n";             
	cout<<"        |  .@,  %& @  ##      |    | @/       @#  %@.*@. |    | #(  (# #(       #. (| \n";              
	cout<<"        |      @(    #&  %%   |    |@.....%(....(%...,@(.|    |    ##..*#..........#| \n";              
	cout<<"        |     @   @@,      #* |    |(@......#@,*@*.#@,..@|    |#(.,## #............/| \n";              
	cout<<"        |   %* @( //  @/  *(  |    |  #@,,.,...,/#@,,,&& |    |    ##.,............#| \n";              
	cout<<"        |    %(  #@&     @.   |    |    %(  #@&     @.   |    |        ##,,,,,,,,/# | \n";             
	cout<<"        |         ,@@@#       |    |       (@@@&@@#      |    |           ##*,*#/   | \n";              
	cout<<"         ---------------------      ---------------------      ---------------------  \n";          
	cout<<"               FORBICE                     SASSO                       CARTA          \n\n";
	Sleep(3000);
	system("pause");
	PlaySound(TEXT("sound/button_click_se.wav"), NULL, SND_FILENAME | SND_ASYNC); 
	system("cls");
//__________________________________fine regole________________________________________________________________________

//_______________________________MAIN UI_______________________________________________________________________________________________________________
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  "<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n\n";
	Sleep(400);
	//richiesta mossa dal giocatore
	cout<<"                                      INIZIAMO LA PARTITA\n";
	cout<<"                 Benissimo, scegli la tua prima mossa [carta, forbice, sasso]              \n\n"; 
	cout<<"                                           ";
    cin>>mgioc;

	//controllo input
	if(!(mgioc=="carta" || mgioc=="sasso" || mgioc=="forbice")) //se l'input è sbagliato, appare schermata d'errore ed il gioco si chiude
	{
		system("cls");
		cout<<"--------------------------------------------------------------------------------------------"<<endl;
		cout<<"	                    -------------------------------------                  "<<endl;
		cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
		cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
		cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
		cout<<"                           |                                     |"<<endl;
		cout<<"	                    ------------------------------------- "<<endl;
		cout<<"\n\n";
		PlaySound(TEXT("sound/DOIT.wav"), NULL, SND_FILENAME | SND_ASYNC); 
		Sleep(400);
		cout<<"                                 ERRORE: MOSSA INESISTENTE!!\n\n";
		system("pause");
	}
	else{
    //calcolo mossa computer
    srand(time(NULL));
    mcomp = rand()%3; //0 per forbice, 1 per sasso, 2 per carta
    Sleep(200);
    system("cls");
    
//_______________________________PRIMA PARTITA_________________________________________________________________________________________________________
nPartita = nPartita+1;
//FRAME VUOTO
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |                     |  |  |                     |                   \n";
	cout<<"                      |                     |  |  |                     |                   \n";
	cout<<"                      |                     |  |  |                     |                   \n";
	cout<<"               "<<textPunteggioG0<<"    |                     |  |  |                     |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |                     |  |  |                     |    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |                     |  |  |                     |    "<<textPunteggioC2<<"\n";
	cout<<"                      |                     |  |  |                     |                   \n";
	cout<<"                      |                     |  |  |                     |                   \n";
	cout<<"                      |                     |  |  |                     |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(1000);
	system("cls");

//ANIMAZIONE AGGIUNTIVA PRIMA DEL RISULTATO EFFETTIVO, LE MANI FANNO GESTI CASUALI

	PlaySound(TEXT("sound/drums.wav"), NULL, SND_FILENAME | SND_ASYNC);
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |        #. #         |  |  |        #. #         |                   \n";
	cout<<"                      |   (#  /#  #  (/   *#|  |  |   (#  /#  #  (/   *#|                   \n";
	cout<<"                      |#.#(  #. .# #, #  # (|  |  |#.#(  #. .# #, #  # (|                   \n";
	cout<<"               "<<textPunteggioG0<<"    | #(  (# #(       #. (|  |  | #(  (# #(       #. (|    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |    ##..*#..........#|  |  |    ##..*#..........#|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |#(.,## #............/|  |  |#(.,## #............/|    "<<textPunteggioC2<<"\n";
	cout<<"                      |    ##.,............#|  |  |    ##.,............#|                   \n";
	cout<<"                      |        ##,,,,,,,,/# |  |  |        ##,,,,,,,,/# |                   \n";
	cout<<"                      |           ##*,*#/   |  |  |           ##*,*#/   |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(300);
	system("cls");

	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |      @ #(           |  |  |      @ #(           |                   \n";
	cout<<"                      |      .@  @.         |  |  |      .@  @.         |                   \n";
	cout<<"                      |@.  @#  #/ .@        |  |  |@.  @#  #/ .@        |                   \n";
	cout<<"               "<<textPunteggioG0<<"    |  .@,  %& @  ##      |  |  |  .@,  %& @  ##      |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |      @(    #&  %%   |  |  |      @(    #&  %%   |    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |     @   @@,      #* |  |  |     @   @@,      #* |    "<<textPunteggioC2<<"\n";
	cout<<"                      |   %* @( //  @/  *(  |  |  |   %* @( //  @/  *(  |                   \n";
	cout<<"                      |    %(  #@&     @.   |  |  |    %(  #@&     @.   |                   \n";
	cout<<"                      |         ,@@@#       |  |  |         ,@@@#       |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(300);
	system("cls");

	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |         &@@@.       |  |  |         &@@@.       |                   \n";
	cout<<"                      |      ,@*   *@@@,    |  |  |      ,@*   *@@@,    |                   \n";
	cout<<"                      |   #@&#@@,#@.   &*   |  |  |   #@&#@@,#@.   &*   |                   \n";
	cout<<"               "<<textPunteggioG0<<"    | @/       @#  %@.*@. |  |  | @/       @#  %@.*@. |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |@.....%(....(%...,@(.|  |  |@.....%(....(%...,@(.|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |(@......#@,*@*.#@,..@|  |  |(@......#@,*@*.#@,..@|    "<<textPunteggioC2<<"\n";
	cout<<"                      |  #@,,.,...,/#@,,,&& |  |  |  #@,,.,...,/#@,,,&& |                   \n";
	cout<<"                      |    *@(,,,,,,,,(@(   |  |  |    *@(,,,,,,,,(@(   |                   \n";
	cout<<"                      |       (@@@&@@#      |  |  |       (@@@&@@#      |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(300);
	system("cls");

	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |      @ #(           |  |  |      @ #(           |                   \n";
	cout<<"                      |      .@  @.         |  |  |      .@  @.         |                   \n";
	cout<<"                      |@.  @#  #/ .@        |  |  |@.  @#  #/ .@        |                   \n";
	cout<<"               "<<textPunteggioG0<<"    |  .@,  %& @  ##      |  |  |  .@,  %& @  ##      |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |      @(    #&  %%   |  |  |      @(    #&  %%   |    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |     @   @@,      #* |  |  |     @   @@,      #* |    "<<textPunteggioC2<<"\n";
	cout<<"                      |   %* @( //  @/  *(  |  |  |   %* @( //  @/  *(  |                   \n";
	cout<<"                      |    %(  #@&     @.   |  |  |    %(  #@&     @.   |                   \n";
	cout<<"                      |         ,@@@#       |  |  |         ,@@@#       |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(300);
	system("cls");

	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |        #. #         |  |  |        #. #         |                   \n";
	cout<<"                      |   (#  /#  #  (/   *#|  |  |   (#  /#  #  (/   *#|                   \n";
	cout<<"                      |#.#(  #. .# #, #  # (|  |  |#.#(  #. .# #, #  # (|                   \n";
	cout<<"               "<<textPunteggioG0<<"    | #(  (# #(       #. (|  |  | #(  (# #(       #. (|    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |    ##..*#..........#|  |  |    ##..*#..........#|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |#(.,## #............/|  |  |#(.,## #............/|    "<<textPunteggioC2<<"\n";
	cout<<"                      |    ##.,............#|  |  |    ##.,............#|                   \n";
	cout<<"                      |        ##,,,,,,,,/# |  |  |        ##,,,,,,,,/# |                   \n";
	cout<<"                      |           ##*,*#/   |  |  |           ##*,*#/   |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(300);
	system("cls");

	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |         &@@@.       |  |  |         &@@@.       |                   \n";
	cout<<"                      |      ,@*   *@@@,    |  |  |      ,@*   *@@@,    |                   \n";
	cout<<"                      |   #@&#@@,#@.   &*   |  |  |   #@&#@@,#@.   &*   |                   \n";
	cout<<"               "<<textPunteggioG0<<"    | @/       @#  %@.*@. |  |  | @/       @#  %@.*@. |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |@.....%(....(%...,@(.|  |  |@.....%(....(%...,@(.|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |(@......#@,*@*.#@,..@|  |  |(@......#@,*@*.#@,..@|    "<<textPunteggioC2<<"\n";
	cout<<"                      |  #@,,.,...,/#@,,,&& |  |  |  #@,,.,...,/#@,,,&& |                   \n";
	cout<<"                      |    *@(,,,,,,,,(@(   |  |  |    *@(,,,,,,,,(@(   |                   \n";
	cout<<"                      |       (@@@&@@#      |  |  |       (@@@&@@#      |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(1000);
	system("cls");
	PlaySound(NULL, NULL, SND_ASYNC); //INTERROMPI SUONO TAMBURI

//Controllo situazione ed aggiornamento punteggio
    if(mgioc=="forbice"&&mcomp==0){//entrambi forbice
      situazione = 0;
	}
    else if(mgioc=="sasso"&&mcomp==1){//entrambi sasso
      situazione = 1;
	}
    else if(mgioc=="carta"&&mcomp==2){//entrambi carta
      situazione = 2;
	}
    else if(mgioc=="forbice"&&mcomp==1){//forbice e sasso
      situazione = 3;
	  pcomp = pcomp+1;
	}
    else if(mgioc=="forbice"&&mcomp==2){//forbice e carta
      situazione = 4;
	  pgioc = pgioc+1;
	}
    else if(mgioc=="sasso"&&mcomp==0){//sasso e forbice
      situazione = 5;
	  pgioc = pgioc+1;
	}
    else if(mgioc=="sasso"&&mcomp==2){//sasso e carta
      situazione = 6;
	  pcomp = pcomp+1;
	}
    else if(mgioc=="carta"&&mcomp==0){//carta e forbice
      situazione = 7;
	  pcomp = pcomp+1;
	}
    else if(mgioc=="carta"&&mcomp==1){//carta e sasso
      situazione = 8;
	  pgioc = pgioc+1;
	}
    
	//AGGIORNAMENTO PUNTEGGI NELLE BOX GIOCATORE
	if(pgioc==1){
		textPunteggioG0 = "/| "; //uno
		textPunteggioG1 = "_|_";
		textPunteggioG2 = "   ";
	}
	else if(pgioc==2){
		textPunteggioG0 = "__ "; //due
		textPunteggioG1 = " _|";
		textPunteggioG2 = "|__";
	}
	else if(pgioc==3){
		textPunteggioG0 = "__ "; //tre
		textPunteggioG1 = "__|";
		textPunteggioG2 = "__|";
	}
	//AGGIORNAMENTO PUNTEGGI NELLE BOX COMPUTER
	if(pcomp==1){
		textPunteggioC0 = "/| "; //uno
		textPunteggioC1 = "_|_";
		textPunteggioC2 = "   ";
	}
	else if(pcomp==2){
		textPunteggioC0 = "__ "; //due
		textPunteggioC1 = " _|";
		textPunteggioC2 = "|__";
	}
	else if(pcomp==3){
		textPunteggioC0 = "__ "; //tre
		textPunteggioC1 = "__|";
		textPunteggioC2 = "__|";
	}

	PlaySound(TEXT("sound/gong.wav"), NULL, SND_FILENAME | SND_ASYNC); 

    switch(situazione){
    
    case 0:

	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |      @ #(           |  |  |      @ #(           |                   \n";
	cout<<"                      |      .@  @.         |  |  |      .@  @.         |                   \n";
	cout<<"                      |@.  @#  #/ .@        |  |  |@.  @#  #/ .@        |                   \n";
	cout<<"               "<<textPunteggioG0<<"    |  .@,  %& @  ##      |  |  |  .@,  %& @  ##      |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |      @(    #&  %%   |  |  |      @(    #&  %%   |    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |     @   @@,      #* |  |  |     @   @@,      #* |    "<<textPunteggioC2<<"\n";
	cout<<"                      |   %* @( //  @/  *(  |  |  |   %* @( //  @/  *(  |                   \n";
	cout<<"                      |    %(  #@&     @.   |  |  |    %(  #@&     @.   |                   \n";
	cout<<"                      |         ,@@@#       |  |  |         ,@@@#       |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
        break;
        
    case 1:
         
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |         &@@@.       |  |  |         &@@@.       |                   \n";
	cout<<"                      |      ,@*   *@@@,    |  |  |      ,@*   *@@@,    |                   \n";
	cout<<"                      |   #@&#@@,#@.   &*   |  |  |   #@&#@@,#@.   &*   |                   \n";
	cout<<"               "<<textPunteggioG0<<"    | @/       @#  %@.*@. |  |  | @/       @#  %@.*@. |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |@.....%(....(%...,@(.|  |  |@.....%(....(%...,@(.|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |(@......#@,*@*.#@,..@|  |  |(@......#@,*@*.#@,..@|    "<<textPunteggioC2<<"\n";
	cout<<"                      |  #@,,.,...,/#@,,,&& |  |  |  #@,,.,...,/#@,,,&& |                   \n";
	cout<<"                      |    *@(,,,,,,,,(@(   |  |  |    *@(,,,,,,,,(@(   |                   \n";
	cout<<"                      |       (@@@&@@#      |  |  |       (@@@&@@#      |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
        break;
    
    case 2:
    
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |        #. #         |  |  |        #. #         |                   \n";
	cout<<"                      |   (#  /#  #  (/   *#|  |  |   (#  /#  #  (/   *#|                   \n";
	cout<<"                      |#.#(  #. .# #, #  # (|  |  |#.#(  #. .# #, #  # (|                   \n";
	cout<<"               "<<textPunteggioG0<<"    | #(  (# #(       #. (|  |  | #(  (# #(       #. (|    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |    ##..*#..........#|  |  |    ##..*#..........#|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |#(.,## #............/|  |  |#(.,## #............/|    "<<textPunteggioC2<<"\n";
	cout<<"                      |    ##.,............#|  |  |    ##.,............#|                   \n";
	cout<<"                      |        ##,,,,,,,,/# |  |  |        ##,,,,,,,,/# |                   \n";
	cout<<"                      |           ##*,*#/   |  |  |           ##*,*#/   |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
    	break;
    
    case 3:
    
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |      @ #(           |  |  |         &@@@.       |                   \n";
	cout<<"                      |      .@  @.         |  |  |      ,@*   *@@@,    |                   \n";
	cout<<"                      |@.  @#  #/ .@        |  |  |   #@&#@@,#@.   &*   |                   \n";
	cout<<"               "<<textPunteggioG0<<"    |  .@,  %& @  ##      |  |  | @/       @#  %@.*@. |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |      @(    #&  %%   |  |  |@.....%(....(%...,@(.|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |     @   @@,      #* |  |  |(@......#@,*@*.#@,..@|    "<<textPunteggioC2<<"\n";
	cout<<"                      |   %* @( //  @/  *(  |  |  |  #@,,.,...,/#@,,,&& |                   \n";
	cout<<"                      |    %(  #@&     @.   |  |  |    *@(,,,,,,,,(@(   |                   \n";
	cout<<"                      |         ,@@@#       |  |  |       (@@@&@@#      |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
        break;
        
    case 4:
         
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |      @ #(           |  |  |        #. #         |                   \n";
	cout<<"                      |      .@  @.         |  |  |   (#  /#  #  (/   *#|                   \n";
	cout<<"                      |@.  @#  #/ .@        |  |  |#.#(  #. .# #, #  # (|                   \n";
	cout<<"               "<<textPunteggioG0<<"    |  .@,  %& @  ##      |  |  | #(  (# #(       #. (|    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |      @(    #&  %%   |  |  |    ##..*#..........#|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |     @   @@,      #* |  |  |#(.,## #............/|    "<<textPunteggioC2<<"\n";
	cout<<"                      |   %* @( //  @/  *(  |  |  |    ##.,............#|                   \n";
	cout<<"                      |    %(  #@&     @.   |  |  |        ##,,,,,,,,/# |                   \n";
	cout<<"                      |         ,@@@#       |  |  |           ##*,*#/   |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
        break;
    
    case 5:
    
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |         &@@@.       |  |  |      @ #(           |                   \n";
	cout<<"                      |      ,@*   *@@@,    |  |  |      .@  @.         |                   \n";
	cout<<"                      |   #@&#@@,#@.   &*   |  |  |@.  @#  #/ .@        |                   \n";
	cout<<"               "<<textPunteggioG0<<"    | @/       @#  %@.*@. |  |  |  .@,  %& @  ##      |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |@.....%(....(%...,@(.|  |  |      @(    #&  %%   |    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |(@......#@,*@*.#@,..@|  |  |     @   @@,      #* |    "<<textPunteggioC2<<"\n";
	cout<<"                      |  #@,,.,...,/#@,,,&& |  |  |   %* @( //  @/  *(  |                   \n";
	cout<<"                      |    *@(,,,,,,,,(@(   |  |  |    %(  #@&     @.   |                   \n";
	cout<<"                      |       (@@@&@@#      |  |  |         ,@@@#       |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
    	break;
    
    case 6:
    
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |         &@@@.       |  |  |        #. #         |                   \n";
	cout<<"                      |      ,@*   *@@@,    |  |  |   (#  /#  #  (/   *#|                   \n";
	cout<<"                      |   #@&#@@,#@.   &*   |  |  |#.#(  #. .# #, #  # (|                   \n";
	cout<<"               "<<textPunteggioG0<<"    | @/       @#  %@.*@. |  |  | #(  (# #(       #. (|    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |@.....%(....(%...,@(.|  |  |    ##..*#..........#|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |(@......#@,*@*.#@,..@|  |  |#(.,## #............/|    "<<textPunteggioC2<<"\n";
	cout<<"                      |  #@,,.,...,/#@,,,&& |  |  |    ##.,............#|                   \n";
	cout<<"                      |    *@(,,,,,,,,(@(   |  |  |        ##,,,,,,,,/# |                   \n";
	cout<<"                      |       (@@@&@@#      |  |  |           ##*,*#/   |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
        break;
        
    case 7:
         
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                        _____________________   |   _____________________                    \n";
	cout<<"                      |        #. #         |  |  |      @ #(           |                   \n";
	cout<<"                      |   (#  /#  #  (/   *#|  |  |      .@  @.         |                   \n";
	cout<<"                      |#.#(  #. .# #, #  # (|  |  |@.  @#  #/ .@        |                   \n";
	cout<<"               "<<textPunteggioG0<<"    | #(  (# #(       #. (|  |  |  .@,  %& @  ##      |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |    ##..*#..........#|  |  |      @(    #&  %%   |    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |#(.,## #............/|  |  |     @   @@,      #* |    "<<textPunteggioC2<<"\n";
	cout<<"                      |    ##.,............#|  |  |   %* @( //  @/  *(  |                   \n";
	cout<<"                      |        ##,,,,,,,,/# |  |  |    %(  #@&     @.   |                   \n";
	cout<<"                      |           ##*,*#/   |  |  |         ,@@@#       |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
        break;
    
    case 8:
    
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |        #. #         |  |  |         &@@@.       |                   \n";
	cout<<"                      |   (#  /#  #  (/   *#|  |  |      ,@*   *@@@,    |                   \n";
	cout<<"                      |#.#(  #. .# #, #  # (|  |  |   #@&#@@,#@.   &*   |                   \n";
	cout<<"               "<<textPunteggioG0<<"    | #(  (# #(       #. (|  |  | @/       @#  %@.*@. |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |    ##..*#..........#|  |  |@.....%(....(%...,@(.|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |#(.,## #............/|  |  |(@......#@,*@*.#@,..@|    "<<textPunteggioC2<<"\n";
	cout<<"                      |    ##.,............#|  |  |  #@,,.,...,/#@,,,&& |                   \n";
	cout<<"                      |        ##,,,,,,,,/# |  |  |    *@(,,,,,,,,(@(   |                   \n";
	cout<<"                      |           ##*,*#/   |  |  |       (@@@&@@#      |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
    	break;
    
    }

system("pause");
system("cls");
//_______________________________MAIN UI 2_______________________________________________________________________________________________________________
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  "<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n\n";
	Sleep(400);
	//richiesta mossa da giocatore
	cout<<"                                   CONTINUIAMO LA PARTITA\n";
	cout<<"               Benissimo, scegli la tua seconda mossa [carta, forbice, sasso]              \n\n"; 
	cout<<"                                           ";
    cin>>mgioc;

	//controllo inputt
	if(!(mgioc=="carta" || mgioc=="sasso" || mgioc=="forbice")) //se l'input è sbagliato, appare schermata d'errore ed il gioco si chiude
	{
		system("cls");
		cout<<"--------------------------------------------------------------------------------------------"<<endl;
		cout<<"	                    -------------------------------------                  "<<endl;
		cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
		cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
		cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
		cout<<"                           |                                     |"<<endl;
		cout<<"	                    ------------------------------------- "<<endl;
		cout<<"\n\n";
		PlaySound(TEXT("sound/DOIT.wav"), NULL, SND_FILENAME | SND_ASYNC); 
		Sleep(400);
		cout<<"                                 ERRORE: MOSSA INESISTENTE!!\n\n";
		system("pause");
	}
	else{
    //calcolo mossa computer
    srand(time(NULL));
    mcomp = rand()%3; //0 per forbice, 1 per sasso, 2 per carta
    Sleep(200);
    system("cls");
    
//_______________________________SECONDA PARTITA_________________________________________________________________________________________________________
nPartita = nPartita+1;
//FRAME VUOTO
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |                     |  |  |                     |                   \n";
	cout<<"                      |                     |  |  |                     |                   \n";
	cout<<"                      |                     |  |  |                     |                   \n";
	cout<<"               "<<textPunteggioG0<<"    |                     |  |  |                     |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |                     |  |  |                     |    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |                     |  |  |                     |    "<<textPunteggioC2<<"\n";
	cout<<"                      |                     |  |  |                     |                   \n";
	cout<<"                      |                     |  |  |                     |                   \n";
	cout<<"                      |                     |  |  |                     |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(1000);
	system("cls");

//ANIMAZIONE AGGIUNTIVA PRIMA DEL RISULTATO EFFETTIVO, LE MANI FANNO GESTI CASUALI

	PlaySound(TEXT("sound/drums.wav"), NULL, SND_FILENAME | SND_ASYNC);
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |        #. #         |  |  |        #. #         |                   \n";
	cout<<"                      |   (#  /#  #  (/   *#|  |  |   (#  /#  #  (/   *#|                   \n";
	cout<<"                      |#.#(  #. .# #, #  # (|  |  |#.#(  #. .# #, #  # (|                   \n";
	cout<<"               "<<textPunteggioG0<<"    | #(  (# #(       #. (|  |  | #(  (# #(       #. (|    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |    ##..*#..........#|  |  |    ##..*#..........#|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |#(.,## #............/|  |  |#(.,## #............/|    "<<textPunteggioC2<<"\n";
	cout<<"                      |    ##.,............#|  |  |    ##.,............#|                   \n";
	cout<<"                      |        ##,,,,,,,,/# |  |  |        ##,,,,,,,,/# |                   \n";
	cout<<"                      |           ##*,*#/   |  |  |           ##*,*#/   |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(300);
	system("cls");

	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |      @ #(           |  |  |      @ #(           |                   \n";
	cout<<"                      |      .@  @.         |  |  |      .@  @.         |                   \n";
	cout<<"                      |@.  @#  #/ .@        |  |  |@.  @#  #/ .@        |                   \n";
	cout<<"               "<<textPunteggioG0<<"    |  .@,  %& @  ##      |  |  |  .@,  %& @  ##      |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |      @(    #&  %%   |  |  |      @(    #&  %%   |    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |     @   @@,      #* |  |  |     @   @@,      #* |    "<<textPunteggioC2<<"\n";
	cout<<"                      |   %* @( //  @/  *(  |  |  |   %* @( //  @/  *(  |                   \n";
	cout<<"                      |    %(  #@&     @.   |  |  |    %(  #@&     @.   |                   \n";
	cout<<"                      |         ,@@@#       |  |  |         ,@@@#       |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(300);
	system("cls");

	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |         &@@@.       |  |  |         &@@@.       |                   \n";
	cout<<"                      |      ,@*   *@@@,    |  |  |      ,@*   *@@@,    |                   \n";
	cout<<"                      |   #@&#@@,#@.   &*   |  |  |   #@&#@@,#@.   &*   |                   \n";
	cout<<"               "<<textPunteggioG0<<"    | @/       @#  %@.*@. |  |  | @/       @#  %@.*@. |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |@.....%(....(%...,@(.|  |  |@.....%(....(%...,@(.|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |(@......#@,*@*.#@,..@|  |  |(@......#@,*@*.#@,..@|    "<<textPunteggioC2<<"\n";
	cout<<"                      |  #@,,.,...,/#@,,,&& |  |  |  #@,,.,...,/#@,,,&& |                   \n";
	cout<<"                      |    *@(,,,,,,,,(@(   |  |  |    *@(,,,,,,,,(@(   |                   \n";
	cout<<"                      |       (@@@&@@#      |  |  |       (@@@&@@#      |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(300);
	system("cls");

	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |      @ #(           |  |  |      @ #(           |                   \n";
	cout<<"                      |      .@  @.         |  |  |      .@  @.         |                   \n";
	cout<<"                      |@.  @#  #/ .@        |  |  |@.  @#  #/ .@        |                   \n";
	cout<<"               "<<textPunteggioG0<<"    |  .@,  %& @  ##      |  |  |  .@,  %& @  ##      |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |      @(    #&  %%   |  |  |      @(    #&  %%   |    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |     @   @@,      #* |  |  |     @   @@,      #* |    "<<textPunteggioC2<<"\n";
	cout<<"                      |   %* @( //  @/  *(  |  |  |   %* @( //  @/  *(  |                   \n";
	cout<<"                      |    %(  #@&     @.   |  |  |    %(  #@&     @.   |                   \n";
	cout<<"                      |         ,@@@#       |  |  |         ,@@@#       |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(300);
	system("cls");

	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |        #. #         |  |  |        #. #         |                   \n";
	cout<<"                      |   (#  /#  #  (/   *#|  |  |   (#  /#  #  (/   *#|                   \n";
	cout<<"                      |#.#(  #. .# #, #  # (|  |  |#.#(  #. .# #, #  # (|                   \n";
	cout<<"               "<<textPunteggioG0<<"    | #(  (# #(       #. (|  |  | #(  (# #(       #. (|    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |    ##..*#..........#|  |  |    ##..*#..........#|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |#(.,## #............/|  |  |#(.,## #............/|    "<<textPunteggioC2<<"\n";
	cout<<"                      |    ##.,............#|  |  |    ##.,............#|                   \n";
	cout<<"                      |        ##,,,,,,,,/# |  |  |        ##,,,,,,,,/# |                   \n";
	cout<<"                      |           ##*,*#/   |  |  |           ##*,*#/   |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(300);
	system("cls");

	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |         &@@@.       |  |  |         &@@@.       |                   \n";
	cout<<"                      |      ,@*   *@@@,    |  |  |      ,@*   *@@@,    |                   \n";
	cout<<"                      |   #@&#@@,#@.   &*   |  |  |   #@&#@@,#@.   &*   |                   \n";
	cout<<"               "<<textPunteggioG0<<"    | @/       @#  %@.*@. |  |  | @/       @#  %@.*@. |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |@.....%(....(%...,@(.|  |  |@.....%(....(%...,@(.|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |(@......#@,*@*.#@,..@|  |  |(@......#@,*@*.#@,..@|    "<<textPunteggioC2<<"\n";
	cout<<"                      |  #@,,.,...,/#@,,,&& |  |  |  #@,,.,...,/#@,,,&& |                   \n";
	cout<<"                      |    *@(,,,,,,,,(@(   |  |  |    *@(,,,,,,,,(@(   |                   \n";
	cout<<"                      |       (@@@&@@#      |  |  |       (@@@&@@#      |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(1000);
	system("cls");
	PlaySound(NULL, NULL, SND_ASYNC); //INTERROMPI SUONO TAMBURI

//Controllo situazione ed aggiornamento punteggio
    if(mgioc=="forbice"&&mcomp==0){//entrambi forbice
      situazione = 0;
	}
    else if(mgioc=="sasso"&&mcomp==1){//entrambi sasso
      situazione = 1;
	}
    else if(mgioc=="carta"&&mcomp==2){//entrambi carta
      situazione = 2;
	}
    else if(mgioc=="forbice"&&mcomp==1){//forbice e sasso
      situazione = 3;
	  pcomp = pcomp+1;
	}
    else if(mgioc=="forbice"&&mcomp==2){//forbice e carta
      situazione = 4;
	  pgioc = pgioc+1;
	}
    else if(mgioc=="sasso"&&mcomp==0){//sasso e forbice
      situazione = 5;
	  pgioc = pgioc+1;
	}
    else if(mgioc=="sasso"&&mcomp==2){//sasso e carta
      situazione = 6;
	  pcomp = pcomp+1;
	}
    else if(mgioc=="carta"&&mcomp==0){//carta e forbice
      situazione = 7;
	  pcomp = pcomp+1;
	}
    else if(mgioc=="carta"&&mcomp==1){//carta e sasso
      situazione = 8;
	  pgioc = pgioc+1;
	}
    
	//AGGIORNAMENTO PUNTEGGI NELLE BOX GIOCATORE
	if(pgioc==1){
		textPunteggioG0 = "/| "; //uno
		textPunteggioG1 = "_|_";
		textPunteggioG2 = "   ";
	}
	else if(pgioc==2){
		textPunteggioG0 = "__ "; //due
		textPunteggioG1 = " _|";
		textPunteggioG2 = "|__";
	}
	else if(pgioc==3){
		textPunteggioG0 = "__ "; //tre
		textPunteggioG1 = "__|";
		textPunteggioG2 = "__|";
	}
	//AGGIORNAMENTO PUNTEGGI NELLE BOX COMPUTER
	if(pcomp==1){
		textPunteggioC0 = "/| "; //uno
		textPunteggioC1 = "_|_";
		textPunteggioC2 = "   ";
	}
	else if(pcomp==2){
		textPunteggioC0 = "__ "; //due
		textPunteggioC1 = " _|";
		textPunteggioC2 = "|__";
	}
	else if(pcomp==3){
		textPunteggioC0 = "__ "; //tre
		textPunteggioC1 = "__|";
		textPunteggioC2 = "__|";
	}

	PlaySound(TEXT("sound/gong.wav"), NULL, SND_FILENAME | SND_ASYNC); 

    switch(situazione){
    
    case 0:

	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |      @ #(           |  |  |      @ #(           |                   \n";
	cout<<"                      |      .@  @.         |  |  |      .@  @.         |                   \n";
	cout<<"                      |@.  @#  #/ .@        |  |  |@.  @#  #/ .@        |                   \n";
	cout<<"               "<<textPunteggioG0<<"    |  .@,  %& @  ##      |  |  |  .@,  %& @  ##      |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |      @(    #&  %%   |  |  |      @(    #&  %%   |    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |     @   @@,      #* |  |  |     @   @@,      #* |    "<<textPunteggioC2<<"\n";
	cout<<"                      |   %* @( //  @/  *(  |  |  |   %* @( //  @/  *(  |                   \n";
	cout<<"                      |    %(  #@&     @.   |  |  |    %(  #@&     @.   |                   \n";
	cout<<"                      |         ,@@@#       |  |  |         ,@@@#       |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
        break;
        
    case 1:
         
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |         &@@@.       |  |  |         &@@@.       |                   \n";
	cout<<"                      |      ,@*   *@@@,    |  |  |      ,@*   *@@@,    |                   \n";
	cout<<"                      |   #@&#@@,#@.   &*   |  |  |   #@&#@@,#@.   &*   |                   \n";
	cout<<"               "<<textPunteggioG0<<"    | @/       @#  %@.*@. |  |  | @/       @#  %@.*@. |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |@.....%(....(%...,@(.|  |  |@.....%(....(%...,@(.|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |(@......#@,*@*.#@,..@|  |  |(@......#@,*@*.#@,..@|    "<<textPunteggioC2<<"\n";
	cout<<"                      |  #@,,.,...,/#@,,,&& |  |  |  #@,,.,...,/#@,,,&& |                   \n";
	cout<<"                      |    *@(,,,,,,,,(@(   |  |  |    *@(,,,,,,,,(@(   |                   \n";
	cout<<"                      |       (@@@&@@#      |  |  |       (@@@&@@#      |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
        break;
    
    case 2:
    
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |        #. #         |  |  |        #. #         |                   \n";
	cout<<"                      |   (#  /#  #  (/   *#|  |  |   (#  /#  #  (/   *#|                   \n";
	cout<<"                      |#.#(  #. .# #, #  # (|  |  |#.#(  #. .# #, #  # (|                   \n";
	cout<<"               "<<textPunteggioG0<<"    | #(  (# #(       #. (|  |  | #(  (# #(       #. (|    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |    ##..*#..........#|  |  |    ##..*#..........#|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |#(.,## #............/|  |  |#(.,## #............/|    "<<textPunteggioC2<<"\n";
	cout<<"                      |    ##.,............#|  |  |    ##.,............#|                   \n";
	cout<<"                      |        ##,,,,,,,,/# |  |  |        ##,,,,,,,,/# |                   \n";
	cout<<"                      |           ##*,*#/   |  |  |           ##*,*#/   |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
    	break;
    
    case 3:
    
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |      @ #(           |  |  |         &@@@.       |                   \n";
	cout<<"                      |      .@  @.         |  |  |      ,@*   *@@@,    |                   \n";
	cout<<"                      |@.  @#  #/ .@        |  |  |   #@&#@@,#@.   &*   |                   \n";
	cout<<"               "<<textPunteggioG0<<"    |  .@,  %& @  ##      |  |  | @/       @#  %@.*@. |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |      @(    #&  %%   |  |  |@.....%(....(%...,@(.|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |     @   @@,      #* |  |  |(@......#@,*@*.#@,..@|    "<<textPunteggioC2<<"\n";
	cout<<"                      |   %* @( //  @/  *(  |  |  |  #@,,.,...,/#@,,,&& |                   \n";
	cout<<"                      |    %(  #@&     @.   |  |  |    *@(,,,,,,,,(@(   |                   \n";
	cout<<"                      |         ,@@@#       |  |  |       (@@@&@@#      |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
        break;
        
    case 4:
         
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |      @ #(           |  |  |        #. #         |                   \n";
	cout<<"                      |      .@  @.         |  |  |   (#  /#  #  (/   *#|                   \n";
	cout<<"                      |@.  @#  #/ .@        |  |  |#.#(  #. .# #, #  # (|                   \n";
	cout<<"               "<<textPunteggioG0<<"    |  .@,  %& @  ##      |  |  | #(  (# #(       #. (|    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |      @(    #&  %%   |  |  |    ##..*#..........#|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |     @   @@,      #* |  |  |#(.,## #............/|    "<<textPunteggioC2<<"\n";
	cout<<"                      |   %* @( //  @/  *(  |  |  |    ##.,............#|                   \n";
	cout<<"                      |    %(  #@&     @.   |  |  |        ##,,,,,,,,/# |                   \n";
	cout<<"                      |         ,@@@#       |  |  |           ##*,*#/   |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
        break;
    
    case 5:
    
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |         &@@@.       |  |  |      @ #(           |                   \n";
	cout<<"                      |      ,@*   *@@@,    |  |  |      .@  @.         |                   \n";
	cout<<"                      |   #@&#@@,#@.   &*   |  |  |@.  @#  #/ .@        |                   \n";
	cout<<"               "<<textPunteggioG0<<"    | @/       @#  %@.*@. |  |  |  .@,  %& @  ##      |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |@.....%(....(%...,@(.|  |  |      @(    #&  %%   |    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |(@......#@,*@*.#@,..@|  |  |     @   @@,      #* |    "<<textPunteggioC2<<"\n";
	cout<<"                      |  #@,,.,...,/#@,,,&& |  |  |   %* @( //  @/  *(  |                   \n";
	cout<<"                      |    *@(,,,,,,,,(@(   |  |  |    %(  #@&     @.   |                   \n";
	cout<<"                      |       (@@@&@@#      |  |  |         ,@@@#       |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
    	break;
    
    case 6:
    
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |         &@@@.       |  |  |        #. #         |                   \n";
	cout<<"                      |      ,@*   *@@@,    |  |  |   (#  /#  #  (/   *#|                   \n";
	cout<<"                      |   #@&#@@,#@.   &*   |  |  |#.#(  #. .# #, #  # (|                   \n";
	cout<<"               "<<textPunteggioG0<<"    | @/       @#  %@.*@. |  |  | #(  (# #(       #. (|    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |@.....%(....(%...,@(.|  |  |    ##..*#..........#|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |(@......#@,*@*.#@,..@|  |  |#(.,## #............/|    "<<textPunteggioC2<<"\n";
	cout<<"                      |  #@,,.,...,/#@,,,&& |  |  |    ##.,............#|                   \n";
	cout<<"                      |    *@(,,,,,,,,(@(   |  |  |        ##,,,,,,,,/# |                   \n";
	cout<<"                      |       (@@@&@@#      |  |  |           ##*,*#/   |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
        break;
        
    case 7:
         
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                        _____________________   |   _____________________                    \n";
	cout<<"                      |        #. #         |  |  |      @ #(           |                   \n";
	cout<<"                      |   (#  /#  #  (/   *#|  |  |      .@  @.         |                   \n";
	cout<<"                      |#.#(  #. .# #, #  # (|  |  |@.  @#  #/ .@        |                   \n";
	cout<<"               "<<textPunteggioG0<<"    | #(  (# #(       #. (|  |  |  .@,  %& @  ##      |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |    ##..*#..........#|  |  |      @(    #&  %%   |    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |#(.,## #............/|  |  |     @   @@,      #* |    "<<textPunteggioC2<<"\n";
	cout<<"                      |    ##.,............#|  |  |   %* @( //  @/  *(  |                   \n";
	cout<<"                      |        ##,,,,,,,,/# |  |  |    %(  #@&     @.   |                   \n";
	cout<<"                      |           ##*,*#/   |  |  |         ,@@@#       |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
        break;
    
    case 8:
    
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |        #. #         |  |  |         &@@@.       |                   \n";
	cout<<"                      |   (#  /#  #  (/   *#|  |  |      ,@*   *@@@,    |                   \n";
	cout<<"                      |#.#(  #. .# #, #  # (|  |  |   #@&#@@,#@.   &*   |                   \n";
	cout<<"               "<<textPunteggioG0<<"    | #(  (# #(       #. (|  |  | @/       @#  %@.*@. |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |    ##..*#..........#|  |  |@.....%(....(%...,@(.|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |#(.,## #............/|  |  |(@......#@,*@*.#@,..@|    "<<textPunteggioC2<<"\n";
	cout<<"                      |    ##.,............#|  |  |  #@,,.,...,/#@,,,&& |                   \n";
	cout<<"                      |        ##,,,,,,,,/# |  |  |    *@(,,,,,,,,(@(   |                   \n";
	cout<<"                      |           ##*,*#/   |  |  |       (@@@&@@#      |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
    	break;
    
    }

system("pause");
system("cls");
//_______________________________MAIN UI 3_______________________________________________________________________________________________________________
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  "<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n\n";
	Sleep(400);
	//richiesta mossa da giocatore
	cout<<"                                   CONTINUIAMO LA PARTITA\n";
	cout<<"                 Benissimo, scegli la tua terza mossa [carta, forbice, sasso]              \n\n"; 
	cout<<"                                           ";
    cin>>mgioc;

	//controllo input
	if(!(mgioc=="carta" || mgioc=="sasso" || mgioc=="forbice")) //se l'input è sbagliato, appare schermata d'errore ed il gioco si chiude
	{
		system("cls");
		cout<<"--------------------------------------------------------------------------------------------"<<endl;
		cout<<"	                    -------------------------------------                  "<<endl;
		cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
		cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
		cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
		cout<<"                           |                                     |"<<endl;
		cout<<"	                    ------------------------------------- "<<endl;
		cout<<"\n\n";
		PlaySound(TEXT("sound/DOIT.wav"), NULL, SND_FILENAME | SND_ASYNC); 
		Sleep(400);
		cout<<"                                 ERRORE: MOSSA INESISTENTE!!\n\n";
		system("pause");
	}
	else{
    //calcolo mossa computer
    srand(time(NULL));
    mcomp = rand()%3; //0 per forbice, 1 per sasso, 2 per carta
    Sleep(200);
    system("cls");
    
//_______________________________TERZA PARTITA_________________________________________________________________________________________________________
nPartita = nPartita+1;
//FRAME VUOTO
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |                     |  |  |                     |                   \n";
	cout<<"                      |                     |  |  |                     |                   \n";
	cout<<"                      |                     |  |  |                     |                   \n";
	cout<<"               "<<textPunteggioG0<<"    |                     |  |  |                     |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |                     |  |  |                     |    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |                     |  |  |                     |    "<<textPunteggioC2<<"\n";
	cout<<"                      |                     |  |  |                     |                   \n";
	cout<<"                      |                     |  |  |                     |                   \n";
	cout<<"                      |                     |  |  |                     |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(1000);
	system("cls");

//ANIMAZIONE AGGIUNTIVA PRIMA DEL RISULTATO EFFETTIVO, LE MANI FANNO GESTI CASUALI

	PlaySound(TEXT("sound/drums.wav"), NULL, SND_FILENAME | SND_ASYNC);
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |        #. #         |  |  |        #. #         |                   \n";
	cout<<"                      |   (#  /#  #  (/   *#|  |  |   (#  /#  #  (/   *#|                   \n";
	cout<<"                      |#.#(  #. .# #, #  # (|  |  |#.#(  #. .# #, #  # (|                   \n";
	cout<<"               "<<textPunteggioG0<<"    | #(  (# #(       #. (|  |  | #(  (# #(       #. (|    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |    ##..*#..........#|  |  |    ##..*#..........#|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |#(.,## #............/|  |  |#(.,## #............/|    "<<textPunteggioC2<<"\n";
	cout<<"                      |    ##.,............#|  |  |    ##.,............#|                   \n";
	cout<<"                      |        ##,,,,,,,,/# |  |  |        ##,,,,,,,,/# |                   \n";
	cout<<"                      |           ##*,*#/   |  |  |           ##*,*#/   |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(300);
	system("cls");

	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |      @ #(           |  |  |      @ #(           |                   \n";
	cout<<"                      |      .@  @.         |  |  |      .@  @.         |                   \n";
	cout<<"                      |@.  @#  #/ .@        |  |  |@.  @#  #/ .@        |                   \n";
	cout<<"               "<<textPunteggioG0<<"    |  .@,  %& @  ##      |  |  |  .@,  %& @  ##      |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |      @(    #&  %%   |  |  |      @(    #&  %%   |    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |     @   @@,      #* |  |  |     @   @@,      #* |    "<<textPunteggioC2<<"\n";
	cout<<"                      |   %* @( //  @/  *(  |  |  |   %* @( //  @/  *(  |                   \n";
	cout<<"                      |    %(  #@&     @.   |  |  |    %(  #@&     @.   |                   \n";
	cout<<"                      |         ,@@@#       |  |  |         ,@@@#       |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(300);
	system("cls");

	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |         &@@@.       |  |  |         &@@@.       |                   \n";
	cout<<"                      |      ,@*   *@@@,    |  |  |      ,@*   *@@@,    |                   \n";
	cout<<"                      |   #@&#@@,#@.   &*   |  |  |   #@&#@@,#@.   &*   |                   \n";
	cout<<"               "<<textPunteggioG0<<"    | @/       @#  %@.*@. |  |  | @/       @#  %@.*@. |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |@.....%(....(%...,@(.|  |  |@.....%(....(%...,@(.|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |(@......#@,*@*.#@,..@|  |  |(@......#@,*@*.#@,..@|    "<<textPunteggioC2<<"\n";
	cout<<"                      |  #@,,.,...,/#@,,,&& |  |  |  #@,,.,...,/#@,,,&& |                   \n";
	cout<<"                      |    *@(,,,,,,,,(@(   |  |  |    *@(,,,,,,,,(@(   |                   \n";
	cout<<"                      |       (@@@&@@#      |  |  |       (@@@&@@#      |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(300);
	system("cls");

	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |      @ #(           |  |  |      @ #(           |                   \n";
	cout<<"                      |      .@  @.         |  |  |      .@  @.         |                   \n";
	cout<<"                      |@.  @#  #/ .@        |  |  |@.  @#  #/ .@        |                   \n";
	cout<<"               "<<textPunteggioG0<<"    |  .@,  %& @  ##      |  |  |  .@,  %& @  ##      |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |      @(    #&  %%   |  |  |      @(    #&  %%   |    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |     @   @@,      #* |  |  |     @   @@,      #* |    "<<textPunteggioC2<<"\n";
	cout<<"                      |   %* @( //  @/  *(  |  |  |   %* @( //  @/  *(  |                   \n";
	cout<<"                      |    %(  #@&     @.   |  |  |    %(  #@&     @.   |                   \n";
	cout<<"                      |         ,@@@#       |  |  |         ,@@@#       |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(300);
	system("cls");

	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |        #. #         |  |  |        #. #         |                   \n";
	cout<<"                      |   (#  /#  #  (/   *#|  |  |   (#  /#  #  (/   *#|                   \n";
	cout<<"                      |#.#(  #. .# #, #  # (|  |  |#.#(  #. .# #, #  # (|                   \n";
	cout<<"               "<<textPunteggioG0<<"    | #(  (# #(       #. (|  |  | #(  (# #(       #. (|    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |    ##..*#..........#|  |  |    ##..*#..........#|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |#(.,## #............/|  |  |#(.,## #............/|    "<<textPunteggioC2<<"\n";
	cout<<"                      |    ##.,............#|  |  |    ##.,............#|                   \n";
	cout<<"                      |        ##,,,,,,,,/# |  |  |        ##,,,,,,,,/# |                   \n";
	cout<<"                      |           ##*,*#/   |  |  |           ##*,*#/   |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(300);
	system("cls");

	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |         &@@@.       |  |  |         &@@@.       |                   \n";
	cout<<"                      |      ,@*   *@@@,    |  |  |      ,@*   *@@@,    |                   \n";
	cout<<"                      |   #@&#@@,#@.   &*   |  |  |   #@&#@@,#@.   &*   |                   \n";
	cout<<"               "<<textPunteggioG0<<"    | @/       @#  %@.*@. |  |  | @/       @#  %@.*@. |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |@.....%(....(%...,@(.|  |  |@.....%(....(%...,@(.|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |(@......#@,*@*.#@,..@|  |  |(@......#@,*@*.#@,..@|    "<<textPunteggioC2<<"\n";
	cout<<"                      |  #@,,.,...,/#@,,,&& |  |  |  #@,,.,...,/#@,,,&& |                   \n";
	cout<<"                      |    *@(,,,,,,,,(@(   |  |  |    *@(,,,,,,,,(@(   |                   \n";
	cout<<"                      |       (@@@&@@#      |  |  |       (@@@&@@#      |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
	Sleep(1000);
	system("cls");
	PlaySound(NULL, NULL, SND_ASYNC); //INTERROMPI SUONO TAMBURI

//Controllo situazione ed aggiornamento punteggio
    if(mgioc=="forbice"&&mcomp==0){//entrambi forbice
      situazione = 0;
	}
    else if(mgioc=="sasso"&&mcomp==1){//entrambi sasso
      situazione = 1;
	}
    else if(mgioc=="carta"&&mcomp==2){//entrambi carta
      situazione = 2;
	}
    else if(mgioc=="forbice"&&mcomp==1){//forbice e sasso
      situazione = 3;
	  pcomp = pcomp+1;
	}
    else if(mgioc=="forbice"&&mcomp==2){//forbice e carta
      situazione = 4;
	  pgioc = pgioc+1;
	}
    else if(mgioc=="sasso"&&mcomp==0){//sasso e forbice
      situazione = 5;
	  pgioc = pgioc+1;
	}
    else if(mgioc=="sasso"&&mcomp==2){//sasso e carta
      situazione = 6;
	  pcomp = pcomp+1;
	}
    else if(mgioc=="carta"&&mcomp==0){//carta e forbice
      situazione = 7;
	  pcomp = pcomp+1;
	}
    else if(mgioc=="carta"&&mcomp==1){//carta e sasso
      situazione = 8;
	  pgioc = pgioc+1;
	}
    
	//AGGIORNAMENTO PUNTEGGI NELLE BOX GIOCATORE
	if(pgioc==1){
		textPunteggioG0 = "/| "; //uno
		textPunteggioG1 = "_|_";
		textPunteggioG2 = "   ";
	}
	else if(pgioc==2){
		textPunteggioG0 = "__ "; //due
		textPunteggioG1 = " _|";
		textPunteggioG2 = "|__";
	}
	else if(pgioc==3){
		textPunteggioG0 = "__ "; //tre
		textPunteggioG1 = "__|";
		textPunteggioG2 = "__|";
	}
	//AGGIORNAMENTO PUNTEGGI NELLE BOX COMPUTER
	if(pcomp==1){
		textPunteggioC0 = "/| "; //uno
		textPunteggioC1 = "_|_";
		textPunteggioC2 = "   ";
	}
	else if(pcomp==2){
		textPunteggioC0 = "__ "; //due
		textPunteggioC1 = " _|";
		textPunteggioC2 = "|__";
	}
	else if(pcomp==3){
		textPunteggioC0 = "__ "; //tre
		textPunteggioC1 = "__|";
		textPunteggioC2 = "__|";
	}

	PlaySound(TEXT("sound/gong.wav"), NULL, SND_FILENAME | SND_ASYNC); 

    switch(situazione){
    
    case 0:

	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |      @ #(           |  |  |      @ #(           |                   \n";
	cout<<"                      |      .@  @.         |  |  |      .@  @.         |                   \n";
	cout<<"                      |@.  @#  #/ .@        |  |  |@.  @#  #/ .@        |                   \n";
	cout<<"               "<<textPunteggioG0<<"    |  .@,  %& @  ##      |  |  |  .@,  %& @  ##      |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |      @(    #&  %%   |  |  |      @(    #&  %%   |    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |     @   @@,      #* |  |  |     @   @@,      #* |    "<<textPunteggioC2<<"\n";
	cout<<"                      |   %* @( //  @/  *(  |  |  |   %* @( //  @/  *(  |                   \n";
	cout<<"                      |    %(  #@&     @.   |  |  |    %(  #@&     @.   |                   \n";
	cout<<"                      |         ,@@@#       |  |  |         ,@@@#       |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
        break;
        
    case 1:
         
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |         &@@@.       |  |  |         &@@@.       |                   \n";
	cout<<"                      |      ,@*   *@@@,    |  |  |      ,@*   *@@@,    |                   \n";
	cout<<"                      |   #@&#@@,#@.   &*   |  |  |   #@&#@@,#@.   &*   |                   \n";
	cout<<"               "<<textPunteggioG0<<"    | @/       @#  %@.*@. |  |  | @/       @#  %@.*@. |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |@.....%(....(%...,@(.|  |  |@.....%(....(%...,@(.|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |(@......#@,*@*.#@,..@|  |  |(@......#@,*@*.#@,..@|    "<<textPunteggioC2<<"\n";
	cout<<"                      |  #@,,.,...,/#@,,,&& |  |  |  #@,,.,...,/#@,,,&& |                   \n";
	cout<<"                      |    *@(,,,,,,,,(@(   |  |  |    *@(,,,,,,,,(@(   |                   \n";
	cout<<"                      |       (@@@&@@#      |  |  |       (@@@&@@#      |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
        break;
    
    case 2:
    
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |        #. #         |  |  |        #. #         |                   \n";
	cout<<"                      |   (#  /#  #  (/   *#|  |  |   (#  /#  #  (/   *#|                   \n";
	cout<<"                      |#.#(  #. .# #, #  # (|  |  |#.#(  #. .# #, #  # (|                   \n";
	cout<<"               "<<textPunteggioG0<<"    | #(  (# #(       #. (|  |  | #(  (# #(       #. (|    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |    ##..*#..........#|  |  |    ##..*#..........#|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |#(.,## #............/|  |  |#(.,## #............/|    "<<textPunteggioC2<<"\n";
	cout<<"                      |    ##.,............#|  |  |    ##.,............#|                   \n";
	cout<<"                      |        ##,,,,,,,,/# |  |  |        ##,,,,,,,,/# |                   \n";
	cout<<"                      |           ##*,*#/   |  |  |           ##*,*#/   |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
    	break;
    
    case 3:
    
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |      @ #(           |  |  |         &@@@.       |                   \n";
	cout<<"                      |      .@  @.         |  |  |      ,@*   *@@@,    |                   \n";
	cout<<"                      |@.  @#  #/ .@        |  |  |   #@&#@@,#@.   &*   |                   \n";
	cout<<"               "<<textPunteggioG0<<"    |  .@,  %& @  ##      |  |  | @/       @#  %@.*@. |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |      @(    #&  %%   |  |  |@.....%(....(%...,@(.|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |     @   @@,      #* |  |  |(@......#@,*@*.#@,..@|    "<<textPunteggioC2<<"\n";
	cout<<"                      |   %* @( //  @/  *(  |  |  |  #@,,.,...,/#@,,,&& |                   \n";
	cout<<"                      |    %(  #@&     @.   |  |  |    *@(,,,,,,,,(@(   |                   \n";
	cout<<"                      |         ,@@@#       |  |  |       (@@@&@@#      |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
        break;
        
    case 4:
         
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |      @ #(           |  |  |        #. #         |                   \n";
	cout<<"                      |      .@  @.         |  |  |   (#  /#  #  (/   *#|                   \n";
	cout<<"                      |@.  @#  #/ .@        |  |  |#.#(  #. .# #, #  # (|                   \n";
	cout<<"               "<<textPunteggioG0<<"    |  .@,  %& @  ##      |  |  | #(  (# #(       #. (|    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |      @(    #&  %%   |  |  |    ##..*#..........#|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |     @   @@,      #* |  |  |#(.,## #............/|    "<<textPunteggioC2<<"\n";
	cout<<"                      |   %* @( //  @/  *(  |  |  |    ##.,............#|                   \n";
	cout<<"                      |    %(  #@&     @.   |  |  |        ##,,,,,,,,/# |                   \n";
	cout<<"                      |         ,@@@#       |  |  |           ##*,*#/   |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
        break;
    
    case 5:
    
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |         &@@@.       |  |  |      @ #(           |                   \n";
	cout<<"                      |      ,@*   *@@@,    |  |  |      .@  @.         |                   \n";
	cout<<"                      |   #@&#@@,#@.   &*   |  |  |@.  @#  #/ .@        |                   \n";
	cout<<"               "<<textPunteggioG0<<"    | @/       @#  %@.*@. |  |  |  .@,  %& @  ##      |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |@.....%(....(%...,@(.|  |  |      @(    #&  %%   |    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |(@......#@,*@*.#@,..@|  |  |     @   @@,      #* |    "<<textPunteggioC2<<"\n";
	cout<<"                      |  #@,,.,...,/#@,,,&& |  |  |   %* @( //  @/  *(  |                   \n";
	cout<<"                      |    *@(,,,,,,,,(@(   |  |  |    %(  #@&     @.   |                   \n";
	cout<<"                      |       (@@@&@@#      |  |  |         ,@@@#       |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
    	break;
    
    case 6:
    
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |         &@@@.       |  |  |        #. #         |                   \n";
	cout<<"                      |      ,@*   *@@@,    |  |  |   (#  /#  #  (/   *#|                   \n";
	cout<<"                      |   #@&#@@,#@.   &*   |  |  |#.#(  #. .# #, #  # (|                   \n";
	cout<<"               "<<textPunteggioG0<<"    | @/       @#  %@.*@. |  |  | #(  (# #(       #. (|    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |@.....%(....(%...,@(.|  |  |    ##..*#..........#|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |(@......#@,*@*.#@,..@|  |  |#(.,## #............/|    "<<textPunteggioC2<<"\n";
	cout<<"                      |  #@,,.,...,/#@,,,&& |  |  |    ##.,............#|                   \n";
	cout<<"                      |    *@(,,,,,,,,(@(   |  |  |        ##,,,,,,,,/# |                   \n";
	cout<<"                      |       (@@@&@@#      |  |  |           ##*,*#/   |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
        break;
        
    case 7:
         
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                        _____________________   |   _____________________                    \n";
	cout<<"                      |        #. #         |  |  |      @ #(           |                   \n";
	cout<<"                      |   (#  /#  #  (/   *#|  |  |      .@  @.         |                   \n";
	cout<<"                      |#.#(  #. .# #, #  # (|  |  |@.  @#  #/ .@        |                   \n";
	cout<<"               "<<textPunteggioG0<<"    | #(  (# #(       #. (|  |  |  .@,  %& @  ##      |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |    ##..*#..........#|  |  |      @(    #&  %%   |    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |#(.,## #............/|  |  |     @   @@,      #* |    "<<textPunteggioC2<<"\n";
	cout<<"                      |    ##.,............#|  |  |   %* @( //  @/  *(  |                   \n";
	cout<<"                      |        ##,,,,,,,,/# |  |  |    %(  #@&     @.   |                   \n";
	cout<<"                      |           ##*,*#/   |  |  |         ,@@@#       |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
        break;
    
    case 8:
    
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<"	                    -------------------------------------                  PARTITA "<<nPartita<<endl;
	cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
	cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
	cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
	cout<<"                           |                                     |"<<endl;
	cout<<"	                    ------------------------------------- "<<endl;
	cout<<"\n";
	Sleep(400);
	cout<<"                                 TU                      COMPUTER                           \n";
	cout<<"                       _____________________   |   _____________________                    \n";
	cout<<"                      |        #. #         |  |  |         &@@@.       |                   \n";
	cout<<"                      |   (#  /#  #  (/   *#|  |  |      ,@*   *@@@,    |                   \n";
	cout<<"                      |#.#(  #. .# #, #  # (|  |  |   #@&#@@,#@.   &*   |                   \n";
	cout<<"               "<<textPunteggioG0<<"    | #(  (# #(       #. (|  |  | @/       @#  %@.*@. |    "<<textPunteggioC0<<"\n";
	cout<<"               "<<textPunteggioG1<<"    |    ##..*#..........#|  |  |@.....%(....(%...,@(.|    "<<textPunteggioC1<<"\n";
	cout<<"               "<<textPunteggioG2<<"    |#(.,## #............/|  |  |(@......#@,*@*.#@,..@|    "<<textPunteggioC2<<"\n";
	cout<<"                      |    ##.,............#|  |  |  #@,,.,...,/#@,,,&& |                   \n";
	cout<<"                      |        ##,,,,,,,,/# |  |  |    *@(,,,,,,,,(@(   |                   \n";
	cout<<"                      |           ##*,*#/   |  |  |       (@@@&@@#      |                   \n";
	cout<<"                       ---------------------   |   ---------------------                  \n\n";
    	break;
    
    }

system("pause");
system("cls");
//________________________________________FINE AREA GIOCO____________________________________________________________________

//________________________________________SCHERMATA VINCITA____________________________________________________________________

	if(pgioc>pcomp)
	{ //il giocatore ha vinto
		cout<<"--------------------------------------------------------------------------------------------"<<endl;
		cout<<"	                    -------------------------------------                  RISULTATI"<<endl;
		cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
		cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
		cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
		cout<<"                           |                                     |"<<endl;
		cout<<"	                    ------------------------------------- "<<endl;
		cout<<"\n";
		Sleep(400);
		cout<<"                                 TU                      COMPUTER                           \n";
		cout<<"                       _____________________   |   _____________________                    \n";
		cout<<"                      |                     |  |  |                     |                   \n";
		cout<<"                 #     #    #    ###    #     # ### #     # ####### ####### #                \n";
		cout<<"                 #     #   # #    #     #     #  #  ##    #    #    #     # #               \n";
		cout<<"                 #     #  #   #   #     #     #  #  # #   #    #    #     # #               \n";
		cout<<"                 ####### #     #  #     #     #  #  #  #  #    #    #     # #               \n";
		cout<<"                 #     # #######  #      #   #   #  #   # #    #    #     # #               \n";
		cout<<"                 #     # #     #  #       # #    #  #    ##    #    #     #                 \n";
		cout<<"                 #     # #     # ###       #    ### #     #    #    ####### #               \n";
		cout<<"                      |                     |  |  |                     |                   \n";
		cout<<"                       ---------------------   |   ---------------------                  \n\n";
	}
	else if(pgioc<pcomp)
	{ //il giocatore ha perso
		cout<<"--------------------------------------------------------------------------------------------"<<endl;
		cout<<"	                    -------------------------------------                  RISULTATI"<<endl;
		cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
		cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
		cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
		cout<<"                           |                                     |"<<endl;
		cout<<"	                    ------------------------------------- "<<endl;
		cout<<"\n";
		Sleep(400);
		cout<<"                                 TU                      COMPUTER                           \n";
		cout<<"                       _____________________   |   _____________________                    \n";
		cout<<"                      |                     |  |  |                     |                   \n";
		cout<<"             #     #    #    ###    ######  ####### ######   #####  #######                 \n";
		cout<<"             #     #   # #    #     #     # #       #     # #     # #     #                 \n";
		cout<<"             #     #  #   #   #     #     # #       #     # #       #     #                 \n";
		cout<<"             ####### #     #  #     ######  #####   ######   #####  #     #                 \n";
		cout<<"             #     # #######  #     #       #       #   #         # #     #                 \n";
		cout<<"             #     # #     #  #     #       #       #    #  #     # #     #                 \n";
		cout<<"             #     # #     # ###    #       ####### #     #  #####  ####### # # #           \n";
		cout<<"                      |                     |  |  |                     |                   \n";
		cout<<"                       ---------------------   |   ---------------------                  \n\n";
	}
	else
	{ //parità
		cout<<"--------------------------------------------------------------------------------------------"<<endl;
		cout<<"	                    -------------------------------------                  RISULTATI"<<endl;
		cout<<"                           |      _  _  _  _    _       _  _  _  |"<<endl;
		cout<<"	                   | |\\/|| ||_||_||_|  |  ||\\ ||_ |_ |_  |"<<endl;
		cout<<"	                   | |  ||_|| \\| \\| |  |_ || \\||_  _||_  |"<<endl;
		cout<<"                           |                                     |"<<endl;
		cout<<"	                    ------------------------------------- "<<endl;
		cout<<"\n";
		Sleep(400);
		cout<<"                                 TU                      COMPUTER                           \n";
		cout<<"                       _____________________   |   _____________________                    \n";
		cout<<"                      |                     |  |  |                     |                   \n";
		cout<<"                      | ######     #    ######  ### #######    #    ### |                   \n";
		cout<<"                      | #     #   # #   #     #  #     #      # #   ### |                   \n";
		cout<<"                      | #     #  #   #  #     #  #     #     #   #   #  |                   \n";
		cout<<"                      | ######  #     # ######   #     #    #     # #   |                   \n";
		cout<<"                      | #       ####### #   #    #     #    #######     |                   \n";
		cout<<"                      | #       #     # #    #   #     #    #     #     |                   \n";
		cout<<"                      | #       #     # #     # ###    #    #     #     |                   \n";
		cout<<"                      |                     |  |  |                     |                   \n";
		cout<<"                       ---------------------   |   ---------------------                  \n\n";
	}

//________________________________________FINE SCHERMATA VINCITA____________________________________________________________________

	system("pause");
	}//chiudo i 3 if per il controllo dell'ortografia, TEOREMA CONFERMATO PROF.
	} 
	}   
}
