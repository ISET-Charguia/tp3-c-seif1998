/*
 ============================================================================
 Name        : Tp3Ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,r,s,bi,foi;

	do{
		printf("donner entier");
		scanf("%d",&x);
	}while(x<0);
foi=10;bi=0;
	do{
		r=x %2;
		s=x/2;
		x=s;
		bi=bi+r*foi;
foi=foi*10;
	}while(s>0);
	printf("%d",bi/10);

}
