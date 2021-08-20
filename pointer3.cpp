//pointer ile ortalam bulma
#include<stdio.h>
double ortalama(double a[],int n);
main()
{
	double sayi[5]={1,3,5};
	int ort=0;
	ort=ortalama(sayi,2);
	printf("ortalama=%d",ort);
}
double ortalama(double a[],int n)
{
	double *p,top=0.0;
	p=a;
	for(int i=0;i<n;i++)
	 top=top+*(p+i);
	 return(top/n);
}
