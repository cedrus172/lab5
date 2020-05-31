#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	float a,b,c;
	printf("Nhap vao a =");
	sacnf("%f",&a);
	printf("Nhap vao b =");
	sacnf("%f",&b);
	printf("Nhap vao c =");
	sacnf("%f",&c);
	if (a<b&&b<c)
	printf("\nSo lon nhat la c = %f",c);
	else if(c<b&&b<a)
	printf("\nSo lon nhat la a = %f",a);
	else 
	printf("\nSo lon nhat la b = %f",b);
}
