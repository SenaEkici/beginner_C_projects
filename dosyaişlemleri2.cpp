#include<stdio.h>
main()
{
	char ad[15];
	int nt;
	FILE  *dosyaoku;
	dosyaoku=fopen("test.txt","r");
	for(int i=0;i<2;i++)
	{
	fscanf(dosyaoku,"%s %d",&ad,&nt);
	printf("ADI:%s \n NOT: %d\n",ad,nt);
}
	fclose(dosyaoku);
}
