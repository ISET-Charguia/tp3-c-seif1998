/*
 ============================================================================
 Name        : Tp3Ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int x,i,fact;
do{
printf("donner un entier >0");
scanf("%d",&x);
}while(x<0);
fact=1;
for(i=1;i<=x;i++)
{
	fact=fact*i;
}

printf("fact avec for:%d",fact);
i=1;
fact=1;
do{
	fact=fact*i;
	i++;
}while(i<=x);


printf("fact avec do:%d",fact);
i=1;
fact=1;
while(i<=x)
	{
	fact=fact*i;
		i++;
	}
printf("fact avec while:%d",fact);
}
