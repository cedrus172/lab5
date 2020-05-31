#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	float a,b,c;
	printf("Nhap vao a =");
	scanf("%f",&a);
	printf("Nhap vao b =");
	scanf("%f",&b);
	printf("Nhap vao c =");
	scanf("%f",&c);
	if (a<b&&b<c)
	printf("\nSo lon nhat la  = %f",c);
	else if(c<b&&b<a)
	printf("\nSo lon nhat la  = %f",a);
	else 
	printf("\nSo lon nhat la b= %f",b);

}
