#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float mucLuong;
	
	char loaiNhanvien ;
	printf("\nLoai nhan vien ");
	scanf("%c",&loaiNhanvien);
	printf("\nMuc luong =");
	scanf("%f",&mucLuong);
	
switch(loaiNhanvien)
{
	case 'A':
		printf("\nLuong cua nhan vien =%f",mucLuong+300);
		break;
	case 'B':
		printf("\nLuong cua nhan vien =%f",mucLuong+250);
		break;
	default:
		printf("\n Luong cua nhan vien =%f",mucLuong+100);
		break;
}
	
}
