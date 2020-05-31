#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float diem;
	printf("\nNhap diem =");
	scanf("%f",&diem);
	if(diem>=75)
	printf("\nLoai A");
	else if(diem>=60 && diem<75)
	printf("\nLoai B");
	else if(diem>=45 && diem<60)
	printf("\nLoai C");
	else if(diem>=35 && diem<45)
	printf("\nLoai D");
	else
	printf("\nLoai E");
	return 0;
}
