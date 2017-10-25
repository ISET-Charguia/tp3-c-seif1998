/*
 ============================================================================
 Name        : Tp3Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,r,pgcd;
	do
	{
		printf ("donner a et b ");
		scanf("%d %d",&a , &b);

	}
	while (a<b);
do
{
	r=a%b ;
	if (r==0 ){
		pgcd=b;
	}
	else {
		a=b ;
		b=r ;

	}
}while (r=0);
printf ("pgcd:%d",pgcd);
}
