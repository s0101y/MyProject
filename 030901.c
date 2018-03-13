#include <stdio.h>
#include <Windows.h>
#include <conio.h>

#define PEC 'C'
#define sPEC 'c'
#define LEN 20

int main() {

	int i, j = 0;
	char point[] = ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,";
	int k;
	char ch;

	while (j < LEN) {

		if (kbhit()) {
			ch = getch();

			if (ch == 224 || ch == 77) {

				system("cls");

				for (i = 1; i < j; i++) {
					printf(" ");
				}
				if (j % 2 == 0) {
					printf("%c", PEC);
				}
				else
				{
					printf("%c", sPEC);
				}
				for (k = 19; k > j; k--) {
					printf("%c", point[k]);
				}

				Sleep(100);
				j++;
			}
		}
	}
	return 0;
}
