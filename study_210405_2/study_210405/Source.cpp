/*
for (int i = 0; i < 10; i++) {

	}

	int a = 0;

	while (a<10) {


	}

	printf("hello\n");
	a++;*/


#include<iostream>
/*
while�� �����ϱ�


*
**
***
****
*****

*/


using namespace std;

void main() {
	/*
	
	1. while ����

	int a= 0;
	while (a < 5) {
		int b = 0;
		while (b<= a) {
			printf("*");
			b++;
		}
		a++;
		printf("\n");
	}
	*/


	/*
	2. do while ����
	
	int a = 0;

	do {
		printf("hello world\n");

	} while (a == 1) {
		printf("hello world");
	}


	*/


	int loop = 4;
	while (loop<10) {
		int innerLoop = 1;
		printf("=====%d��==== \n\n", loop);

		while (innerLoop <= 9) {
			printf("%d * %d=%d\n", loop, innerLoop, loop * innerLoop);
			innerLoop++;
		}
			loop += 4;
		}
	fgetc(stdin);
	}




