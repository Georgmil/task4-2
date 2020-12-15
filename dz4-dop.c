#include <stdio.h>
#include <math.h>

//
//void task1() {
//	void ramka(int N);
//	int N;
//	printf("Set a parameter N,we will draw a square of * :");
//	scanf_s("%d", &N);
//	ramka(N);
//
//
//}

void task2() {
	void ramka2(int m, int n, int d);
	void ramkav2(int m, int n);
	void probel(int a);
	int m, n, d;


	printf("Set a parameter m for lenth of rectangle, wich we will draw of * :");
	scanf_s("%d", &m);
	printf("Set a parameter n for widthness of rectangle, wich we will draw of * :");
	scanf_s("%d", &n);
	printf("Set a parameter d for thickness of rectangle, wich we will draw of * :");
	scanf_s("%d", &d);

	if ((d >= m) || (d >= n))
		ramkav2(m,n);
	else
		ramka2(m, n, d);

}
//
//
//void task3() {
//	void circle(int r);
//	int cir;
//	printf("Print value for circle:\n");
//	scanf_s("%d", &cir);
//	circle(cir);
//}
//
//
//void task4() {
//	void kol(int b);
//	int raz;
//	printf("Type in a number:");
//	scanf_s("%d", &raz);
//	kol(raz);
//
//}
//
//void task7() {
//	void func(int a, int b);
//	int per, step;
//	printf("Zapishite peremenuju:");
//	scanf_s("%d", &per);
//	printf("Zapishite stepen:");
//	scanf_s("%d", &step);
//	func(per, step);
//}
//
//void task6() {
//	printf("task 6\n");
//
//	int age;
//	printf("Type in age between 20-69:\n");
//	scanf_s("%d", &age);
//
//
//	switch (age / 10) {
//
//	case 2: printf("Dvatsat "); break;
//	case 3: printf("Tridsat "); break;
//	case 4: printf("Sorok "); break;
//	case 5: printf("Pjatdisat "); break;
//	case 6: printf("Shedsisat "); break;
//	}
//
//	switch (age % 10) {
//	case 1: printf("odin "); break;
//	case 2: printf("dva "); break;
//	case 3: printf("tri "); break;
//	case 4: printf("chetiri "); break;
//	case 5: printf("pjat "); break;
//	case 6: printf("shest "); break;
//	case 7: printf("semj "); break;
//	case 8: printf("vosem "); break;
//	case 9: printf("djevatj "); break;
//	}
//	switch (age % 10) {
//	case 0:printf("let"); break;
//	case 1:printf("god"); break;
//	case 2:
//	case 3:
//	case 4:printf("goda"); break;
//	case 5:
//	case 6:
//	case 7:
//	case 8:
//	case 9:printf("let"); break;
//
//	}
//
//
//
//}



int main() {
	int n = 1;
	while (n) {
		printf("\n\n");
		printf("Press 2 for task 2 (Type 0 to exit):\n");
		scanf_s("%d", &n);
		printf("\n");
		switch (n) {
		//case 1: task1(); break;
		case 2: task2(); break;
		//case 3: task3(); break;
		//case 4: task4(); break;
		//case 7: task7(); break;
		//case 6: task6(); break;

		}
	}




	return 0;
}


//void ramka(int N) {
//	printf("\n");
//	int a = 10;
//	for (int i = 0; i < N; i++) {
//		printf("* ");
//	}
//
//	for (int j = 0; j < N - 2; j++) {
//		printf("\n*");
//		printf("%*c", N * 2 - 2, '*');
//	}
//	printf(" \n");
//	for (int h = 0; h < N; h++) {
//		printf("* ");
//	}
//
//}

void probel(int a) {

	for (int i = 0; i < a; i++)
		printf(" ");

}
void ramkav2(int m, int n) {
	for (int i = 0; i < n; i++) {
		printf("\n");
		for (int j = 0; j < m; j++)
			printf("* ");
	}
}

void ramka2(int m, int n, int d) {

	int d1 = 1;
	while (d1 <= d) {
		printf("\n");
		for (int i = 0; i < m; i++)
			printf("* ");
		d1++;
	}

	for (int j = 0; j < n - 2 * d; j++) {
		printf("\n");
		for (int k = 0; k < d; k++)
			printf("* ");

		probel(2 * m - 4 * d);
		for (int t = 0; t < d; t++)
			printf("* ");

	}
	d1 = 1;
	while (d1 <= d) {
		printf("\n");
		for (int i = 0; i < m; i++)
			printf("* ");
		d1++;
	}
}



//void circle(int r) {
//
//
//	for (int y = -r; y <= r; y++) {
//		printf("\n");
//		for (int x = -r; x <= r; x++) {
//
//			if ((pow(x, 2) + pow(y, 2)) < r * r)
//				printf("*");
//			else
//				printf(" ");
//		}
//	}
//
//}
//
//
//void kol(int b) {
//	int koli = 0;
//
//
//	while (b > 0) {
//		b = b / 10;
//		koli++;
//	}
//
//	printf("Kolichestvo razradov: %d", koli);
//}
//
//void func(int a, int b) {
//	int res = 0, st = 1;
//
//	while (res < a) {
//		res = pow(st, b);
//		st++;
//	}
//	if (res == a)
//		printf("Nashli, %d v stepeni %d daet %d", st - 1, b, a);
//	else
//		printf("Bez variantov");
//
//
//}