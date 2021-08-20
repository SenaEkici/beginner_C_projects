	#include<stdio.h>
	main()
	{
		FILE *dosyaOku;
	dosyaOku=fopen("test.txt","r");
	char ogr[10];
	fgets(ogr,10,dosyaOku);//dosyadaki ilk 3 karakteri okur.
	printf("ogrenci: %c\n",ogr);
	fclose(dosyaOku);
	}
	
	
	
