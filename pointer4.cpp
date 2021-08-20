//pointer ile string uzunlugu
#include<stdio.h>
int uzunluk(char *s);
main()
{
	char ad[10]="van";
	printf("karakter uzunlugu=%d",uzunluk(ad));
}
int uzunluk(char *s)
{
	char *p=s;
	while(*p!='\0')
	 *p++;
	 return(p-s);
	
}
