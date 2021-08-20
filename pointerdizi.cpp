//burdan şunu cıkraıyoruz:bir pointerı bir diziye atarsak pointeri artırarak dizinin elemanlarına ulaşabilirim.
#include<stdio.h>
main()
{
	char ad[10]={"ankara"};
	char *p;
    p=ad;
    printf("%c\n",*p);
	printf("%c",*(p+1));
}
