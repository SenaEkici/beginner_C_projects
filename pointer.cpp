//pointer ile dizinin ilk iki elemninin 
#include<stdio.h>
double ortalama(double b[],int n);//fonk. tanýmladýk
main()
{
	double a[5]={1,3,5};
	double ort;
	ort=ortalama(a,2);
	printf("ortalama=%f",ort);
	
}
double ortalama(double b[],int n)
{
	double *p;double t=0.0;
	p=&b[0];
	for(int i=0;i<n;i++)
	  t=t+*(p+i);
	  return(t/n);
	
}
