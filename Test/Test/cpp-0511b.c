#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
������(��ǰָ��ָ����Ǹ���������)*ָ�������
Ұָ��:ָ�������ڴ��ָ��
(Ұָ����ֵ��������,1.����һ��ָ��,û�и����Ϸ���;2.malloc���굱ǰ�ѿռ�û��free����û���ÿ�.)
(������)
int* p��ָ��
int** p1˫ָ��
int(*p2)[3]����ָ��
int* p3[4]ָ������
int(*p4)(int,int)����ָ��
int* p5(int,int)ָ�뺯��
int(*p4[3])(int,int)����ָ������
*/

#if 0
void swap1(int a, int b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void swap2(int* x, int* y) {
	int* tmp;
	tmp = x;
	x = y;
	y = tmp;
}

void swap3(int* x, int* y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

void main() {
	int a = 5,b = 7;//ջ�ռ�
	int* p = &a;//�ѿռ�p -> a
	//swap1(a, b);
	//swap2(&a, &b);
	swap3(&a, &b);
	printf("%d,%d\n", a, b);
	system("pause");
}
#endif

#if 0
void main() {
	char a[] = { 1, 1, 1, 1, 1 };
	int *p = (int*)a;
	printf("*p=%d\n", *p);
	system("pause");
}
#endif

#if 0
void main() {
	int a[] = { 1, 2, 3, 4, 5 };
	int* p = (int*)(&a + 1);
	printf("%d\n", *(p - 1));
	system("pause");
}
#endif

#if 0
void main() {
	int a[3][4];
	printf("%d,%d,%d\n", a, a[0], &a[0][0]);
	printf("%d,%d,%d\n", a, a + 1,&a[1]);
	system("pause");
}
#endif

#if 0
void main() {
	int a[] = { 7, 6, 8, 9, 0, 1, 2, 3, 4, 5 };
	int i, j, t;
	int* p = a;
	int n = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < n-1; i++) {
		for (j = 0; j < n-i-1; j++) {
			if (a[j] < a[j + 1]) {
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (i = 0; i < n;i++) {
		printf("%d ", a[i]);
	}
	putchar('\n');
	for (i = 0; i < n; i++) {
		printf("%d ", *(a+i));
	}
	putchar('\n');
	for (i = 0; i < n; i++) {
		printf("%d ", *(p+i));
	}
	putchar('\n');
	for (i = 0; i < n; i++) {
		printf("%d ", p[i]);
	}
	putchar('\n');
	for (i = 0; i < n; i++) {
		printf("%d ", *p-i);
	}
	putchar('\n');
	system("pause");
}
#endif

#if 0
void main() {
	int a[] = { 7, 6, 8, 9, 0, 1, 2, 3, 4, 5 };
	int n = sizeof(a) / sizeof(a[0]);
	//int* p = a, *q = a + n - 1;
	/*while (q < p) {
		int t = *p;
		*p = *q;
		*q = t;
		++ p;
		--q;
	}*/
	int* p = a, *q = a + 1, *end =a + n - 1;
	for (p = a; p < a + n - 1; p++) {
		for (q = a; q < end; q++) {
			if (*q < *(q + 1)) {
				int t = *q;
				*q = *(q+1);
				*(q+1) = t;
				end--;
			}
		}
	}
	for (p = a; p < a + n; p++) {
		printf("%d ", *p);
	}
	putchar('\n');
	system("pause");
}
#endif

/*
int a;
int b[10];
int c[2[3];
int* p;
*/
#if 0
void main() {
	int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 9, 8 };
	int* p = &a[0][0];
	int i;
	int j;
	for (int i = 0; i < 3 * 4; i++) {
		printf("%d ", *(p + i));//��ʾ��ʱ�򲻷���,���ڶ�ά������������ά�����ʾ����
	}
	putchar('\n');
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", *(p + i * 4 + j));
		}
		putchar('\n');
	}
	system("pause");
}
#endif

/*
�ַ�����ָ��
*/
#if 0
void main() {
	char a[5] = { '1', '2', '3', '4', '5' };
	char b[5] = "12345";
	
	system("pause");
}
#endif
#if 0
void main() {
	char a[] = "12345";//��1234�洢��char�����ٵĵ�ַ��ȥ
	char* p = "12345";//����ָ���ַ�����p,ָ���ַ��������׵�ַ
	char b[10] = "12345";//������������ֵ,
	//char* p;//��ʼ��
	//p = "1234";//����ֵ
	b[3] = 'k';
	p++;
	puts(b);
	puts(p);
	system("pause");
}
#endif

#if 0
void main()  {
	char a[] = "123";
	char b[] = "123";
	const char c[] = "123";
	const char d[] = "123";
	char* p = "123";
	char* q = "123";
	const char* pp = "123";
	const char* qq = "123";
	if (a == b)
		printf("a==b\n");
	if (c == d)
		printf("c==d\n");
	if (p == q)
		printf("p==q\n");
	if (pp == qq)
		printf("pp==qq\n");
	if (p == qq)
		printf("p==qq\n");
	system("pause");
}
#endif

#if 0
#include <string.h>
void main() {
	char a[] = "123";
	char b[] = "456";
	char tmp[20];
	strcpy(tmp, a);
	strcpy(a, b);
	strcpy(b, tmp);
	puts(a);
	puts(b);
	system("pause");
}
#endif

#if 0
void main() {
	char* p = "123";
	char* q = "456";
	char* t;
	t = p;
	p = q;
	q = t;
	puts(p);
	puts(q);
	//char a[] = "sfsfasasd";
	//char* p = a;
	system("pause");
}
#endif

#if 0
/*
int a[3][4] a(int(*)[4]),a[i](int*), a[i][j](int)
*/
void main() {
	int a[3][4];
	int(*p)[4];
	int* q[3];
	int i;
	p = a;
	for (i = 0; i < 3; i++) {
		q[i] = a[i];
	}
	system("pause");
}
#endif

#if 0
//ת�Ʊ�
int add(int a, int b){
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	if (b != 0) {
		return a / b;
	}
}

int mod(int a, int b)  {
	return a % b;
}

void main() {
	/*int(*p)(int, int);//����ָ��
	p = add;
	printf("%d\n", p(4, 5));
	p = sub;
	printf("%d\n", p(4, 5));
	p = mul;
	printf("%d\n", p(4, 5));
	p = div;
	printf("%d\n", p(4, 5));*/
	int(*p[])(int, int) = { add, sub, mul, div, mod};//����ָ������
	int n = sizeof(p) / sizeof(p[0]);
	for (int i = 0; i < n; i++) {
		printf("%d\n", p[i](5, 4));
	}
	system("pause");
}
#endif

#if 0
//����ָ����Ϊ����
int add(int a, int b){
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	if (b != 0) {
		return a / b;
	}
}

int mod(int a, int b)  {
	return a % b;
}

void test(int a, int b, int(*p) (int, int)) {//add -> p
	printf("%d\n", p(a, b));//add(a, b)
}

void main() {
	test(4, 7, add);
	test(4, 7, sub);
	test(4, 7, mul);
	test(4, 7, div);
	test(4, 7, mod);
	system("pause");
}
#endif

#if 0
//signal����ָ����Ϊ����ֵ
int add(int a, int b){
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	if (b != 0) {
		return a / b;
	}
}

int mod(int a, int b)  {
	return a % b;
}
//fn�����ķ���ֵ�Ǹ�ָ��(ָ����(int xx(int, int)))��ָ��)
int(*fn(int n))(int, int) {
	printf("fn:n = %d\n", n);
	return add;
}
void main(){
	int value = fn(100)(3, 9);//add(3,9)
	//int(*p)(int, int);
	//p = fn(100);
	//p(3, 9);
	printf("%d\n", value);
	system("pause");
}
#endif