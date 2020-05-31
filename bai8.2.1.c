#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {

	float diemMot,diemHai,diemBa,diemTb;
	printf("\nDiem dau tien =");
	scanf("%f",&diemMot);
	printf("\nDiem thu hai =");
	scanf("%f",&diemHai);
	printf("\nDiem thu ba =");
	scanf("%f",&diemBa);
	if(diemMot<=100 && diemHai<=100 && diemBa<=100)
	printf("\nDiem trung binh là : %f",diemTb=(diemMot+diemHai+diemBa)/3);
	else  
	printf("\nMoi ban nhap lai");
	if (diemTb>=90)
	printf("\nDat E+");
	else if(diemTb<90&&diemTb>=80)
	printf("\nDat E");
	else if(diemTb<80&&diemTb>=70)
	printf("\nDat A+");
	else if(diemTb<70&&diemTb>=60)
	printf("\nDiem A");
	else if(diemTb<60&&diemTb>=50)
	printf ("\nDat B+");
	else 
	printf("\nToach");
}







