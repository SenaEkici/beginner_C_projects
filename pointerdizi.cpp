//burdan �unu c�kra�yoruz:bir pointer� bir diziye atarsak pointeri art�rarak dizinin elemanlar�na ula�abilirim.
#include<stdio.h>
main()
{
	char ad[10]={"ankara"};
	char *p;
    p=ad;
    printf("%c\n",*p);
	printf("%c",*(p+1));
}
