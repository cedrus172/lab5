#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	char ch;
	printf("\nEnter a lower cased alphabet (a-z):");
	scanf("%c",&ch);
	if(ch<'a'||ch>'z')
	printf("\nThe Character not a lower cased alphabet");
	else
	switch(ch)
	{
		case'a':
		case 'b':
		case 'i':
		case 'o':
		case 'u':
			printf("\nCharacter is a vowel");
			break;
			case 'z':
				printf("\nLast alphabet (z) was entered ");
				break;
				default :
					printf("\nCharacter is a consonant");
					break;
		
	}
}
