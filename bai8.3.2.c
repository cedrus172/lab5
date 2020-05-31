#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	 char kiTu;
	 printf("\nNhap ki tu ");
	 scanf("%c",&kiTu);
switch (kiTu)
{
	case 'A':
		printf("\nAda");
		break;
		case 'a':
		printf("\nAda");
		break;	
			case 'B':
		printf("\nBasic");
		break;
			case 'b':
		printf("\Basic");
		break;
			case 'C':
		printf("\nCOBOL");
		break;
			case 'c':
		printf("\COBOL");
		break;
			case 'D':
		printf("\nd BASE III");
		break;
			case 'd':
		printf("\nd BASE III");
		break;
			case 'F':
		printf("\nFortran");
		break;
			case 'f':
		printf("\Fortran");
		break;
			case 'P':
		printf("\nPascal");
		break;
			case 'p':
		printf("\nPascal");
		break;
			case 'V':
		printf("\nVisual c++");
		break;
			case 'v':
		printf("\nVisual c++");
		break;
		default:
		printf("\nCha nhap dung cai nao ca" );
		break;
}
}
