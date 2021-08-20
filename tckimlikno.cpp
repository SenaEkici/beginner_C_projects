#include<stdio.h>
//girilen tcnin dogrulugunu kontrol eden program
main()
{
	int tc[11];
	printf("tc kimlik numaranizi sirayla giriniz");
	for(int i=0;i<11;i++)
	 scanf("%d",&tc);
	//1-3-5-9. basamaklari toplama=
	int top=0;
	for(int i=0;i<9;i=i+2)
	  top=top+tc[i];
	top=top*7;
	for(int i=1;i<9;i=i+2)
	  top=top-tc[i];
	if(top%10!=tc[9]){
	  printf("girdiginiz tc hatali");
	  return(0);
	  }
	else 
	  printf("10. hane kontrolu tamamlandi");
	int top2=0;
	for(int i=0;i<10;i++)
	  top2=top2+tc[i];
	if(top2%10!=tc[10])
	{
	  printf("girmis oldugunuz tc hatali");
	  return(0);
  }
	else
	 printf("girmis oldugunuz tc dogru");	 
}
