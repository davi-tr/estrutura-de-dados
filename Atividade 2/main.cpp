#include <iostream>
#include <Stdlib.h>
#include "backoffice.h"

int main()
{
    int info = 0;
    int * vet2;
    int valorvet2 = 10;
    int i = 0;
    vet2 = criavet(valorvet2);
    for (i = 0; i < valorvet2; i++) {
        printf("%d\n", vet2);
    }
   
}
