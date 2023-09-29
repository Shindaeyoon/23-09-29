/* chapter 22 */

//#include <stdio.h> // TwoPointDistance
//#include <math.h>
//#pragma warning(disable:4996)
//
//struct point {
//	int xpos;
//	int ypos;
//};
//
//int main(void) {
//	struct point pos1, pos2;
//	double distance;
//
//	fputs("point1 pos: ", stdout);
//	scanf("%d %d", &pos1.xpos, &pos1.ypos);
//
//	fputs("point2 pos: ", stdout);
//	scanf("%d %d", &pos2.xpos, &pos2.ypos);
//
//	/*두 점간의 거리 계산 공식*/
//	distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));
//
//	printf("두 점의 거리는 %g입니다. \n", distance);
//	return 0;
//}


//#include <stdio.h> // TelephoneInfo
//#include <string.h>
//#pragma warning(disable:4996)
//
//struct person {
//	char name[20];
//	char phoneNum[20];
//	int age;
//};
//
//int main(void) {
//	struct person man1, man2;
//	strcpy(man1.name, "안성준");
//	strcpy(man1.phoneNum, "010-1122-3344");
//	man1.age = 23;
//
//	printf("이름 입력: "); scanf("%s", man2.name);
//	printf("번호 입력: "); scanf("%s", man2.phoneNum);
//	printf("나이 입력: "); scanf("%d", &(man2.age));
//
//	printf("이름 입력: %s \n", man1.name);
//	printf("번호 입력: %s \n", man1.phoneNum);
//	printf("나이 입력: %d \n", man1.age);
//
//	printf("이름 입력: %s \n", man2.name);
//	printf("번호 입력: %s \n", man2.phoneNum);
//	printf("나이 입력: %d \n", man2.age);
//	return 0;
//}


//#include <stdio.h> // p.458 문제22-1
//#include <string.h>
//#pragma warning(disable:4996)
//
//struct employee {
//	char name[30];
//	char Rrn[30];
//	int Salary;
//};
//
//int main(void) {
//	struct employee man;
//
//	fputs("이름입력: ", stdout);
//	scanf("%s", &man.name);
//
//	fputs("주민등록번호입력: ", stdout);
//	scanf("%s", &man.Rrn);
//
//	fputs("급여정보입력: ", stdout);
//	scanf("%d", &man.Salary);
//
//	printf("이름: %s, 주민등록번호: %s, 급여정보: %d", man.name, man.Rrn, man.Salary);
//	return 0;
//}


//#include <stdio.h> // InitStructVal
//
//struct point {
//	int xpos;
//	int ypos;
//};
//
//struct person {
//	char name[30];
//	char phoneNum[30];
//	int age;
//};
//
//int main(void) {
//	struct point pos = { 10,20 };
//	struct person man = { "이승기", "010-1212-0001",21 };
//	printf("%d %d \n", pos.xpos, pos.ypos);
//	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
//	return 0;
//}


//#include <stdio.h> // StructArray
//#pragma warning(disable:4996)
//
//struct point {
//	int xpos;
//	int ypos;
//};
//
//int main(void) {
//	struct point arr[3];
//	int i;
//
//	for (i = 0; i < 3; i++) {
//		printf("점의 좌표 입력: ");
//		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
//	}
//
//	for (i = 0; i < 3; i++)
//		printf("[%d, %d] ", arr[i].xpos, arr[i].ypos);
//	return 0;
//}


//#include <stdio.h> // InitStructArray
//
//struct person {
//	char name[30];
//	char phoneNum[30];
//	int age;
//};
//
//int main(void) {
//	struct person arr[3] = {
//		{"이승민","010-1212-0001",21},
//		{"정지영","010-1313-0002",22},
//		{"한지수","010-1717-0003",19}
//	};
//
//	int i;
//	for (i = 0; i < 3; i++)
//		printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
//	return 0;