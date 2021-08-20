//structures
//ekrandan girilen iki nokta arasý mesafe bulma
#include<stdio.h>
#include<math.h>
struct nokta{
	int x;
	int y;
};
main()
{
	struct nokta p1,p2;
	float mesafe;
	printf("iki nokta giriniz");
	scanf("%d %d",&p1.x,&p1.y);
	scanf("%d %d",&p2.x,&p2.y);
	mesafe=sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2));
	printf("%f",mesafe);
}
