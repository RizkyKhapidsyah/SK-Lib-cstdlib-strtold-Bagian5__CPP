#include <cstdio>
#include <cstdlib>
#include <conio.h>

/*
	Source by AlphaCodingSkills (https://www.alphacodingskills.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char str[] = "123 10.55 555.89";
	char* pEnd;

	long double val1 = strtold(str, &pEnd);
	long double val2 = strtold(pEnd, &pEnd);
	long double val3 = strtold(pEnd, &pEnd);

	//menampilkan hasil
	printf("val1 = %.2Lf\n", val1);
	printf("val2 = %.2Lf\n", val2);
	printf("val3 = %.2Lf\n", val3);

	_getch();
	return 0;
}