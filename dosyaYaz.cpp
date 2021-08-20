//dosya iþlemleri1-yazma 
#include<stdio.h>
main()
{
	FILE *dosyaYaz;
	dosyaYaz=fopen("test.txt","w");
	fputs("naber sena",dosyaYaz);
	fclose(dosyaYaz);
}
