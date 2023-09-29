//#include <stdio.h> // 문제 23-1
//
//typedef struct point {
//	int xpos;
//	int ypos;
//} Point;
//
//void SwapPoint(Point* pos1, Point* pos2) {
//	Point temp = *pos1;
//	*pos1 = *pos2;
//	*pos2 = temp;
//}
//
//int main(void) {
//	int result;
//	Point pos1 = { 2,4 };
//	Point pos2 = { 5,7 };
//	SwapPoint(&pos1, &pos2);
//	printf("pos1: [%d, %d] \n", pos1.xpos, pos1.ypos);
//	printf("pos2: [%d, %d] \n", pos2.xpos, pos2.ypos);
//	return 0;
//}

//#include<stdio.h> // StructImportant
//#pragma warning(disable:4996)
//
//typedef struct student {
//	char name[20];
//	char stdnum[20];
//	char school[20];
//	char major[20];
//	int year;
//} Student;
//
//void ShowStudentInfo(Student* sptr) {
//	printf("학생 이름: %s \n", sptr->name);
//	printf("학생 고유번호: %s \n", sptr->stdnum);
//	printf("학교 이름: %s \n", sptr->school);
//	printf("선택 전공: %s \n", sptr->major);
//	printf("학년: %d \n", sptr->year);
//}
//
//int main(void) {
//	Student arr[7];
//	int i;
//
//	for (i = 0; i < 7; i++) {
//		printf("이름 : "); scanf("%s", arr[i].name);
//		printf("번호 : "); scanf("%s", arr[i].stdnum);
//		printf("학교 : "); scanf("%s", arr[i].school);
//		printf("전공 : "); scanf("%s", arr[i].major);
//		printf("학년 : "); scanf("%d", &arr[i].year);
//	}
//
//	for (i = 0; i < 7; i++)
//		ShowStudentInfo(&arr[i]);
//	return 0;
//}


//#include<stdio.h> // CircleIncludePoint
//
//typedef struct point {
//	int xpos;
//	int ypos;
//} Point;
//
//typedef struct circle {
//	Point cen;
//	double rad;
//} Circle;
//
//void ShowCircleInfo(Circle* cptr) {
//	printf("[%d, %d] \n", (cptr->cen).xpos, (cptr->cen).ypos);
//	printf("radius ;%g \n\n", cptr->rad);
//}
//
//int main(void) {
//	Circle c1 = { {1,2},3.5 };
//	Circle c2 = { 2,4,3.9 };
//	ShowCircleInfo(&c1);
//	ShowCircleInfo(&c2);
//	return 0;
//}


//#include <stdio.h> // 문제23-2
//#pragma warning(disable:4996)
//
//typedef struct point {
//	int xpos;
//	int ypos;
//} Point;
//
//int main(void) {
//	Point coordinate1, coordinate2; //좌표1, 좌표2
//	int Transverse, Length; //가로, 세로
//	int Area; //넓이
//
//	printf("Enter the first coordinate: ");
//	scanf("%d %d", &coordinate1.xpos, &coordinate1.ypos);
//
//	printf("Enter the second coordinate: ");
//	scanf("%d %d", &coordinate2.xpos, &coordinate2.ypos);
//
//	if (coordinate1.xpos > coordinate2.xpos)
//		Transverse = (coordinate1.xpos - coordinate2.xpos);
//	else if (coordinate1.xpos < coordinate2.xpos)
//		Transverse = (coordinate2.xpos - coordinate1.xpos);
//
//	if (coordinate1.ypos > coordinate2.ypos)
//		Length = (coordinate1.ypos - coordinate2.ypos);
//	else if (coordinate1.ypos < coordinate2.ypos)
//		Length = (coordinate2.ypos - coordinate1.ypos);
//
//	Area = Transverse * Length;
//	printf("The area of a rectangle: %d", Area);
//	return 0;
//}


//#include <stdio.h> // UnionMemAllloc
//
//typedef struct sbox {
//	int mem1;
//	int mem2;
//	double mem3;
//} SBox;
//
//typedef struct ubox {
//	int mem1;
//	int mem2;
//	double mem3;
//} UBox;
//
//int main(void) {
//	SBox sbx;
//	UBox ubx;
//	printf("%p %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
//	printf("%p %p %p \n", &ubx.mem1, &ubx.mem2, &ubx.mem3);
//	printf("%d %d \n", sizeof(SBox), sizeof(UBox));
//	return 0;
//}


//#include <stdio.h> // EnumTypeTone
//
//typedef enum syllable {
//	Do = 1, Re = 2, Mi = 3, Fa = 4, So = 5, La = 6, Ti = 7
//} Syllable;
//
//void Sound(Syllable sy) {
//	switch (sy) {
//	case Do:
//		puts("Doe, a deer a female deer"); return;
//
//	case Re:
//		puts("Ray a drop of golden song"); return;
//
//	case Mi:
//		puts("Me a name I call myself"); return;
//
//	case Fa:
//		puts("Far a long long way to run"); return;
//
//	case So:
//		puts("Sew a needle pulling thread"); return;
//
//	case La:
//		puts("La a note to follow sew"); return;
//
//	case Ti:
//		puts("Tea a drink with jam and bread"); return;
//	}
//	puts("That will bring us back to Doe, oh oh oh");
//}
//int main(void) {
//	Syllable tone;
//	for (tone = Do; tone <= Ti; tone += 1)
//		Sound(tone);
//	return 0;
//}