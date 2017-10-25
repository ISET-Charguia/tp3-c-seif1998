/*
 ============================================================================
 Name        : Tp3Ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,somme,j;
	for (i=1;i<1000;i++)
	{somme=0;
		for (j=1;j<=i/2;j++){
		if (i%j ==0)
		{
			somme=somme+j;
		}
		}
		if (somme ==i)
		{
			printf ("%d est parfait",i);
		}
	}
}
