//#include <stdio.h> // ComplexFileWrite
//#pragma warning(disable:4996)
//
//int main(void) {
//	char name[10];
//	char sex;
//	int age;
//
//	FILE* fp = fopen("friend.txt", "wt");
//	int i;
//
//	for (i = 0; i < 3; i++) {
//		printf("이름 성별 나이 순 입력: ");
//		scanf("%s %c %d", name, &sex, &age); 
//		getchar();
//		fprintf(fp, "%s %c %d", name, sex, age);
//	}
//	fclose(fp);
//	return 0;
//}
//
//
//#include <stdio.h> // ComplexFileRead
//#pragma warning(disable:4996)
//
//int main(void) {
//	char name[10];
//	char sex;
//	int age;
//
//	FILE* fp = fopen("friend.txt", "rt");
//	int ret;
//
//	while (1) {
//		ret = fscanf(fp, "%s %c %d", name, &sex, &age);
//		if (ret == EOF)
//			break;
//		printf("%s %c %d \n", name, sex, age);
//	}
//	fclose(fp);
//	return 0;
//}
//
//
//#include <stdio.h> // StructFileWriteRead
//#pragma warning(disable:4996)
//
//typedef struct fren {
//	char name[10];
//	char sex;
//	int age;
//} Friend;
//
//int main(void) {
//	FILE* fp;
//	Friend myfren1;
//	Friend myfren2;
//
//	/*** file write ***/
//	fp = fopen("friend.bin", "wb");
//	printf("이름, 성별, 나이 순 입력 : ");
//	scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));
//	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);
//	fclose(fp);
//
//	/*** file read ***/
//	fp = fopen("friend.bin", "rb");
//	fread((void*)&myfren2, sizeof(myfren2), 1, fp);
//	printf("%s %c %d \n", myfren2.name, myfren2.sex, myfren2.age);
//	fclose(fp);
//	return 0;
//}
//
//
//#include <stdio.h> // MoveFileReWrPos
//#pragma warning(disable:4996)
//
//int main(void) {
//	/*파일생성*/
//	FILE* fp = fopen("text.txt", "wt");
//	fputs("123456789", fp);
//	fclose(fp);
//
//	/*파일개방*/
//	fp = fopen("text.txt", "rt");
//
//	/*SEEK_END test*/
//	fseek(fp, -2, SEEK_END);
//	putchar(fgetc(fp));
//
//	/*SEEK_SET test*/
//	fseek(fp, 2, SEEK_SET);
//	putchar(fgetc(fp));
//
//	/*SEEK_CUR test*/
//	fseek(fp, 2, SEEK_CUR);
//	putchar(fgetc(fp));
//
//	fclose(fp);
//	return 0;
//}
//
//
//#include <stdio.h> // TellFileReWrPos
//#pragma warning(disable:4996)
//
//int main(void) {
//	long fpos;
//	int i;
//
//	/*파일생성*/
//	FILE* fp = fopen("text.txt", "wt");
//	fputs("12344-", fp);
//	fclose(fp);
//
//	/*파일개방*/
//	fp = fopen("text.txt", "rt");
//
//	for (i = 0; i < 4; i++) {
//		putchar(fgetc(fp));
//		fpos = ftell(fp);
//		fseek(fp, -1, SEEK_END);
//		putchar(fgetc(fp));
//		fseek(fp, fpos, SEEK_SET);
//	}
//	fclose(fp);
//	return 0;
//}