#include<stdio.h>
#include<math.h>
main()
{
	//fermat sayısı
	int fermat=0;
	for(int i=0;i<4;i++)
	{
		fermat=pow(2,pow(2,i))+1;
		printf("%d\n",fermat);
	}
}
