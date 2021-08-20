//dosyaiþlemleri2-dosya OKUMA
#include<stdio.h>
main()
{
	FILE *dosyaOku;
	dosyaOku=fopen("test.txt","r");
	char ogr[10];
	fgets(ogr,4,dosyaOku);//dosyadaki ilk 3 karakteri okur.
	printf("ogrenci: %s\n",ogr);
	fclose(dosyaOku);
}
