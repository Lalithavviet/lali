#include <iostream>
#include <conio.h>
#include <windows.h>
#include "PEND.h"

#define OR ||

using namespace std;

int main()
{
    PEND a1;
    char op;
    do
    {
        a1.menu();
        op=getche();
        switch(op)
        {
            case 'E':
            case 'e':
                a1.Encryption();
                break;
            case 'D':
            case 'd':
                a1.Decryption();
                break;
            case 'A':
            case 'a':
                a1.about();
                break;
            case 'Q':
            case 'q':
                exit(0);
            default:
                cout << "\nPlease Choose From Given Options :) \n\n";
        }
        getch();
        system("cls");
    }
    while(op!='q' OR op!='Q');

    return 0;
}
