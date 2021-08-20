//pointer ile tersten yazma fonk.
#include<stdio.h>
void ters(char *s);
main()
{
	char dizi[20]={};
	printf("bir yazi giriniz");
	scanf("%s",&dizi);
	
ters(dizi);
}
void ters(char *s)
{  
	for(int i=20;i>=0;i--)
	printf("%c",*(s+i));
      
}
