#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "RUS");
	int year;
	int a;
	printf("Введите год: ");
	scanf("%11d", &year);
	a = (int)(((year - 4) % 12 + 12) % 12);
	switch (a) {
	    case 0:
			printf("Год крысы\n");
			break;
		case 1:
			printf("Год коровы\n");
			break;
		case 2:
			printf("Год тигра\n");
			break;
		case 3:
			printf("Год зайца\n");
			break;
		case 4:
			printf("Год дракона\n");
			break;
		case 5:
			printf("Год змеи\n");
			break;
		case 6:
			printf("Год лошади\n");
			break;
		case 7:
			printf("Год овцы\n");
			break;
		case 8:
			printf("Год обезьяны\n");
			break;
		case 9:
			printf("Год петуха\n");
			break;
		case 10:
			printf("Год собаки\n");
			break;
		case 11:
			printf("Год свиньи\n");
			break;
	}
	return 0;
}