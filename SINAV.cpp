//KULLANICIDAN B�R MET�N ALIP BU METN� ��FRELEME(BU ��FRELEME HER HARFTEN SONRA "A" HARF� GELECEK �EK�LDE OLACAK)
#include<stdio.h>
main()
{
	FILE *dosya;
	dosya=fopen("test.txt","w");
	char metin[10];
	printf("bir metin giriniz");
	gets(metin);
	char A='A';
	for(int i=0;i<10;i++)
	 {
	 	
	 	fputc(metin[i],dosya);
	 }
	fclose(dosya);
}
