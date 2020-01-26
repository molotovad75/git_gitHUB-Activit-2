#include <stdio.h>
#include <stdlib.h>
#include "inverser_nombre.h"

void inverser_nombres(int *nb1,int *nb2){
	int temp;
	printf("%d et %d\n",*nb1,*nb2);
	temp=*nb1;
	*nb1=*nb2;
	*nb2=temp;
	printf("%d et %d\n",*nb1,*nb2);
}