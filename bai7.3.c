#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int a,b,z;
	printf("\nNhap vao so a =");
	scanf("%d",&a);
	printf("\nNhap vao so b = ");
	scanf("%d",&b);
	z=a-b;
	if(z==a)
	printf("\nHieu bang gia tri<gia tri cua so da nhap vao>");
	else if (z==b)
	printf("\nHieu bang gia tri<gia tri cua so da nhap vao>");
	else
	printf("\nHieu khong bang bat ki nao gia tri duoc nhap");
	return 0;
}
