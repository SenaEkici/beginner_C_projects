//structure ile ogrenci
#include<stdio.h>
struct dogumtarih{
	int gun;
	int ay;
	int yil;
};
struct ogr{
	char ad[15];
	int yas;
	float gano;
	struct dogumtarih dt;
};
main()
{
	struct ogr ogr1,ogr2;
	ogr1.yas=21;
	ogr1.gano=2.40;
	ogr1.dt.gun=25;
	printf("isim :");
	scanf("%s",&ogr1.ad);
	printf("%s",ogr1.ad);
	printf("%d",ogr1.yas);
}
