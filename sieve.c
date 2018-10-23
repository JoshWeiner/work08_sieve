#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int sieve(int numprime){
	int size = numprime * log(numprime) * 1.15;

	char * n = malloc(size + sizeof(char));
	int i = 0;
	int current;

	for (int j = 2; j < size; j++){

		if (n[j] == 0) {
			i++;

			if (i == numprime){
				return j;
			}

			current = j;
			for (int x = j; x < size; x += current){
				n[x] = 1;
			}

		}
	}
	return 0;

}
