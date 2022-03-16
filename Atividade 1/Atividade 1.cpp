#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int exit;
    do {
        char letra;
        cout << "Informe uma letra" << endl;
        cin >> letra;
        printf("%d\n", letra);
        exit = _getch();
    } while (_getch() != 27);
}

