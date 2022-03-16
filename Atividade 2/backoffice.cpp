#include <iostream>
#include <Stdlib.h>
#include "backoffice.h"

int* criavet(int dim) {
	int* tmp = (int*)malloc(dim * sizeof(int));
	return tmp;
}

void showvet(int x) {
	int i;
	for (i = 0; i < 10; i++) {
		int x = (rand() % 10) + 1;
	}
}