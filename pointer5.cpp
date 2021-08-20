#include<stdio.h>
int faktoriyel(int *n);
main()
{
	int x;
	printf("bir sayi giriniz");
	scanf("%d",&x);
	printf("%d",faktoriyel(&x));
}
int faktoriyel(int *n)
{
	int fak=1;
	for(int i=1;i<=*n;i++)
	  fak=fak*(i);
	return(fak);
}
