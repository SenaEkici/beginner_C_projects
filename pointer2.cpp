//pointer ile yer degistirme fonksiyonu.
#include<stdio.h>
void swap(int *a,int *b);
main()
{
	int x,y;
	printf("iki tane sayi giriniz");
	scanf("%d %d",&x,&y);
	swap(&x,&y);
	printf("%d %d",x,y);

}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
