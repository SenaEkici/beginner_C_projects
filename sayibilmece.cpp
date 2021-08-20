//TAHMÝN OYUNU
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	//1-20 arasýndaki sayilardan birini tahmin et
	int hak=3;
	int thm;
	int sayi=0;
	srand(time(NULL));
	sayi=rand()%20+1;
	do{
	
	
	printf("1-20 arasinda bi sayi tahmin et");
	scanf("%d",&thm);
	
	while(hak==0)
	{
	if(thm==sayi)
	printf("Tebrikler bildin\n");
	else
	{
		hak--;
		printf("bilemedin %d hakkin kaldi\n",hak);
	}
    }
}
