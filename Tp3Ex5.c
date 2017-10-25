/*
 ============================================================================
 Name        : Tp3Ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int la,lo,i,j;
	do {
		printf ("donner largeur et langeur ");
		scanf ("%d %d",&lo ,&la);

	} while ((lo<0) &&(la<0));
    for(i=1;i<=la;i++)
    {
    	for(j=1;j<=lo;j++)
    	{
    		printf("*");

    	}
    	printf("\n");
    }








}
