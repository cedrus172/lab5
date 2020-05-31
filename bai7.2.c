#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	float a,b,z;
	printf("\nNhap vao so a =");
	scanf("%f",&a);
	printf("\nNhap vao so b =");
	scanf("%f",&b);
	z=a*b;
	if(z==1000)
	printf("\nTich nay bang 1000");
	else if(z>1000)
	printf("\nTich nay lon hon 1000");
	else
	printf("\nNot found");
	return 0;
}
