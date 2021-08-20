#include<stdio.h>
#include<string.h>
main()
{
	char ad[20];
	int k;
	printf("bir kelime giriniz");
	scanf("%s",ad);
	k=strlen(ad);
	int j=k-1;
	int pd=0;
	for(int i=0;i<k;i++)
	{
		if(ad[i]!=ad[j])
		pd=1;
		j--;
	}
	if(pd==0)
	 printf("polindrom");
	else
	printf("polindrom deil");	
}
	

