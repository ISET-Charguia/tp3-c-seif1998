/*
 ============================================================================
 Name        : Tp3Ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int div, i, x;
	do {
		printf("donneer un entier");
		scanf("%d", &x);
	} while (x < 0);
	i = 0;
	div = 0;
	for (i = 1; i <= x; i++) {
		if (x % i == 0) {
			div++;
		}
	}
	if (div == 2) {
		printf("%d est premier", x);
	}

}
