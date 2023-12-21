#include<cstdlib>
#include<iostream>
#include<cstring>
#include<fstream>
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

struct treno
{
    string partenza;
    string arrivo;
    string orario_p;
    string orario_a;
    int ritardo;
    string modello;
};

struct treno_char
{
    char partenza[10];
    char arrivo[10];
    char orario_p[7];
    char orario_a[7];
    int ritardo;
    char modello[25];
    bool flag;
};


treno ferrovia[100];
treno_char ferrovia_char[100];
treno_char ferrovia_charDebug[100];
ifstream f;
fstream f2;
int N=40;

int main()
{
    f.open("testo.txt");
    for(int i=0; i<N; i++)
    {
        f>>ferrovia[i].partenza;
        f>>ferrovia[i].arrivo;
        f>>ferrovia[i].orario_p;
        f>>ferrovia[i].orario_a;
        f>>ferrovia[i].ritardo;
        f>>ferrovia[i].modello;
    }
    cout<<"Lettura completata\n";
    cout<<"Casting to char in corso...\n";

    for(int i=0; i<N; i++)
    {
        strcpy(ferrovia_char[i].partenza, ferrovia[i].partenza.c_str());
        strcpy(ferrovia_char[i].arrivo, ferrovia[i].arrivo.c_str());
        strcpy(ferrovia_char[i].orario_p, ferrovia[i].orario_p.c_str());
        strcpy(ferrovia_char[i].orario_a, ferrovia[i].orario_a.c_str());
        ferrovia_char[i].ritardo = ferrovia[i].ritardo;
        strcpy(ferrovia_char[i].modello, ferrovia[i].modello.c_str());
        ferrovia_char[i].flag = 0;
    }

    bool flag=false;
    f2.open("archive.bin", ios::binary | ios::in | ios::out);
    cout<<"Scrittura in corso...\n";
    for(int i=0; i<N; i++)
    {
        f2.write((char*)&ferrovia_char[i], sizeof(treno_char));
    }

    cout<<"Completato\n";
    cout<<"Visualizzazione risultati in 2 secondi...\n";
    Sleep(2000);

    f2.seekg(0);
    f2.read((char*)&ferrovia_charDebug, sizeof(ferrovia_charDebug));


    for(int i=0; i<N; i++)
    {
        cout<<ferrovia_charDebug[i].partenza<<"\n";
        cout<<ferrovia_charDebug[i].arrivo<<"\n";
        cout<<ferrovia_charDebug[i].orario_p<<"\n";
        cout<<ferrovia_charDebug[i].orario_a<<"\n";
        cout<<ferrovia_charDebug[i].ritardo<<"\n";
        cout<<ferrovia_charDebug[i].modello<<"\n\n";
    }

}
