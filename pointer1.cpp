// pointeri bir degi�kenin adresine atarim cunk� pointerlar adres tutar.
#include<stdio.h>
main()
{
	int sayi=10;
	int sayi2;
	int *p;
	p=&sayi;
	sayi2=*p;
	printf("%d\n",sayi);//say�n�n kendisi
	printf("%p\n",&sayi);//sayinin adresi
	printf("%p\n",p);//say�n�n edresi pinter ile
	printf("%d\n",*p);
	printf("%d",sayi2);
}
