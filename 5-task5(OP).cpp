#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
void printS();
void printA();
void printM();
void printE1();
void printE2();
void printR();
main()
{
    system("cls");

    printS();
    printA();
    printM();
    printE1();
    printE2();
    printR();
    
}
void printS()
{
int x = 20, y= 9;
gotoxy(x, y);
y = y + 1;
cout<<"       ####      "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"      ##  ##     "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"      ##         "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"       ####      "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"          ##     "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"      ##  ##     "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"       ####      "<<endl;
cout<<endl;
cout<<endl;
}
void printA()
{
int x = 20, y= 18;
gotoxy(x, y);
y = y + 1;
cout<<"      ######     "<<endl; 
gotoxy(x, y);
y = y + 1;
cout<<"     ##    ##    "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ##    ##    "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ########    "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ##    ##    "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ##    ##    "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ##    ##    "<<endl;
cout<<endl;
cout<<endl;
}
void printM()
{
int x = 20, y = 27;
gotoxy(x, y);
y = y + 1;
cout<<"     ##    ##    "<<endl; 
gotoxy(x, y);
y = y + 1;
cout<<"      ##  ##     "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     # #### #    "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ## ## ##    "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ##    ##    "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ##    ##    "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ##    ##    "<<endl;
cout<<endl;
cout<<endl;
}
void printE1()
{
int x = 20, y= 36;
gotoxy(x, y);
y = y + 1;
cout<<"    ########      "<<endl;
gotoxy(x, y);
y = y + 1; 
cout<<"     ##   ##      "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ##           "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     #####        "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ##           "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ##   ##      "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     #######      "<<endl;
cout<<endl;
cout<<endl;
}
void printE2()
{
int x = 20, y= 45;
gotoxy(x, y);
y = y + 1;
cout<<"    ########      "<<endl;
gotoxy(x, y);
y = y + 1; 
cout<<"     ##   ##      "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ##           "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     #####        "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ##           "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ##   ##      "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     #######      "<<endl;
cout<<endl;
cout<<endl;
}
void printR()
{
int x = 20, y= 54;
gotoxy(x, y);
y = y + 1;
cout<<"    ########       "<<endl; 
gotoxy(x, y);
y = y + 1;
cout<<"     ##    ##      "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ##    ##      "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ######        "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ## ##         "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ##  ##        "<<endl;
gotoxy(x, y);
y = y + 1;
cout<<"     ##    ##      "<<endl;
cout<<endl;
cout<<endl;
}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
