/*
 ============================================================================
 Name        : Tp3Ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,j,k,l;
	int s;
	printf("donner  le nbr de ligne ");
	scanf ("%d",&n);
	k=1;
	s=n;
	for (i=1;i<=n;i++)
	{

		for(l=1;l<=s-1;l++)
		{
			printf(" ");
		}

		for(j=1;j<=k;j++)
		{

			printf("*");
		}

		s--;
		k=k+2;
		printf("\n");
	}

}
