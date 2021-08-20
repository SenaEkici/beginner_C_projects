#include<stdio.h>
main()
{
	//mukemmel sayi=pozitif tam bolenlerinin toplamý kontrol edilen sayýya tam bolunuyorsa bu sayý mukemmel sayýdýr.
	//2-10000 için kontrol.
	
	for(int i=2;i<=10000;i++)
	{
		//pozitif bolenleri=
		int toplam=0;
		for(int j=1;j<i;j++)
		{
		if(i%j==0)
		toplam=toplam+j;
		}
		if(toplam%i==0)
		printf("%d mukemmel sayidir\n",i);
	}
	
}
