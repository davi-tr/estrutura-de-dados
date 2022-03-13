#include <iostream>
#include <Stdlib.h>

int* criavet(int dim) {
	int* tmp = (int*)malloc(dim * sizeof(int));
	return tmp;
}