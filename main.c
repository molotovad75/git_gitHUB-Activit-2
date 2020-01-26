#include <stdio.h>
#include <stdlib.h>
#include "inverser_nombre.h"

int main(int argc, char const *argv[])
{
	int nb1=0;
	int nb2=0;
	printf("Entrez deux nombres\n");
	scanf("%d %d",&nb1,&nb2);
	inverser_nombres(&nb1,&nb2);
	system("pause");
	return 0;
}

