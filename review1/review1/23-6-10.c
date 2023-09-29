//#include <stdio.h> // StructPointer
//
//struct point {
//	int xpos;
//	int ypos;
//};
//
//int main(void) {
//	struct point pos1 = { 1,2 };
//	struct point pos2 = { 100,200 };
//	struct point* pptr = &pos1;
//
//	(*pptr).xpos += 4;
//	(*pptr).ypos += 5;
//	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);
//
//	pptr = &pos2;
//	pptr->xpos += 1;
//	pptr->ypos += 2;
//	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);
//	return 0;
//}


//#include <stdio.h> // StructPointMem
//
//struct point {
//	int xpos;
//	int ypos;
//};
//
//struct circle {
//	double radius;
//	struct point* center;
//};
//
//int main(void) {
//	struct point cen = { 2,7 };
//	double red = 5.5;
//
//	struct circle ring = { red,&cen };
//	printf("원의 반지름: %g \n", ring.radius);
//	printf("원의 중심: [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);
//	return 0;
//}


//#include <stdio.h> // PointRelation
//
//struct point {
//	int xpos;
//	int ypos;
//	struct point* ptr;
//};
//
//int main(void) {
//	struct point pos1 = { 1,1 };
//	struct point pos2 = { 2,2 };
//	struct point pos3 = { 3,3 };
//
//	pos1.ptr = &pos2;
//	pos2.ptr = &pos3;
//	pos3.ptr = &pos1;
//
//	printf("점의 연결관계... \n");
//
//	printf("[%d, %d]와(과) [%d, %d] 연결 \n",
//		pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
//	printf("[%d, %d]와(과) [%d, %d] 연결 \n",
//		pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
//	printf("[%d, %d]와(과) [%d, %d] 연결 \n",
//		pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);
//	return 0;
//}


//#include <stdio.h> // StructValAddress
//
//struct point {
//	int xpos;
//	int ypos;
//};
//
//struct person {
//	char name[20];
//	char phoneNum[20];
//	int age;
//};
//
//int main(void) {
//	struct point pos = { 10,20 };
//	struct person man = { "이승민","010-1212-0001",21 };
//
//	printf("%p, %p \n", &pos, &pos.xpos);
//	printf("%p %p \n", &man, man.name);
//	return 0;
//}

/* chapter 23 */

//#include <stdio.h> // TypeNameTypedef
//
//typedef int INT;
//typedef int* PTR_INT;
//
//typedef unsigned int UINT;
//typedef unsigned int* PTR_UINT;
//
//typedef unsigned char UCHAR;
//typedef unsigned char* PTR_UCHAR;
//
//int main(void) {
//	INT num1 = 120;
//	PTR_INT pnum1 = &num1;
//
//	UINT num2 = 190;
//	PTR_UINT pnum2 = &num2;
//
//	UCHAR ch = 'z';
//	PTR_UCHAR pch = &ch;
//
//	printf("%d, %u, %c \n", *pnum1, *pnum2, *pch);
//	return 0;
//}


//#include <stdio.h> // StructTypedef
//
//struct point {
//	int xpos;
//	int ypos;
//};
//
//typedef struct point Point;
//
//typedef struct person {
//	char name[20];
//	char phoneNum[20];
//	int age;
//} Person;
//
//int main(void) {
//	Point pos = { 10,20 };
//	Person man = { "이승기","010-1212-0001",21 };
//	printf("%d %d \n", pos.xpos, pos.ypos);
//	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
//	return 0;
//}



//#include <stdio.h> // StructValAndFunction
//#pragma warning(disable:4996)
//
//typedef struct point {
//	int xpos;
//	int ypos;
//} Point;
//
//void ShowPosition(Point pos) {
//	printf("[%d, %d] \n", pos.xpos, pos.ypos);
//}
//
//Point GetCurrentPosition(void) {
//	Point cen;
//	printf("Input current pos: ");
//	scanf("%d %d", &cen.xpos, &cen.ypos);
//	return cen;
//}
//
//int main(void) {
//	Point curPos = GetCurrentPosition();
//	ShowPosition(curPos);
//	return 0;
//}
