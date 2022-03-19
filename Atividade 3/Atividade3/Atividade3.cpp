// Atividade3.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#include <iostream>
#include "backoffice.h"
#include <Stdlib.h>
void menu() {
    cout << "Menu do vetor" << endl;
    cout << "1-Cadastrar numero" << endl;
    cout << "2-Exibir numero(s) cadastrados" << endl;
    cout << "3-Exibir quantidade de numeros cadastrados" << endl;
    cout << "4-Remover ultimo numero cadastrado" << endl;
    cout << "5-Sair" << endl;
}

int main()
{
    int op;
    int* vet2;
    int i = 0;
    int valorvet2 = 0;
    vet2 = criavet(valorvet2);

    do {
        menu();
        cin >> op;

        switch (op) {
        case 1:
            cout << "Informe o tamanho do vetor" << endl;
            cin >> valorvet2;
            for (i = 0; i < valorvet2; i++) {
                cout << "Informe o valor do vetor de numero " << i+1<<":";
                cin >> vet2[i];
            }
            break;
        case 2:
            cout << "Vetores gravados" << endl;
            for (i = 0; i < valorvet2; i++) {
                cout << vet2[i] << endl;
            }
            break;
        case 3:
            cout << "A quantidade de numeros gravados no vetor e: " << valorvet2 << endl;
            break;
        case 4:
            limpavet(valorvet2);
        }
    } while (op < 5);
 
}