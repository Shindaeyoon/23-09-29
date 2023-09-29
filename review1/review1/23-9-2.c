//#include <stdio.h> // p.532 문제24-2
//#include <string.h>
//#pragma warning(disable:4996)
//
//long GetFileSize(FILE* fp);
//
//int main(void) {
//	char str[100];
//	FILE* fp = fopen("ABC.txt", "rt");
//	fgets(str, 100, fp);
//	fputs(str, stdout);
//	printf("파일의 크기: %d \n", GetFileSize(fp));
//	fgets(str, 100, fp);
//	fputs(str, stdout);
//	printf("파일의 크기: %d \n", GetFileSize(fp));
//	fgets(str, 100, fp);
//	fputs(str, stdout);
//	fclose(fp);
//	return 0;
//}
//long GetFileSize(FILE* fp) {
//	long fpos;
//	long fsize;
//	fpos = ftell(fp);
//
//	fseek(fp, 0, SEEK_END);
//	fsize = ftell(fp);
//	fseek(fp, fpos, SEEK_SET);
//	return fsize;
//}


/* chapter 25 */


//#include <stdio.h> // ReadStringFault1
//
//char* ReadUserName(void) {
//	char name[30];
//	printf("What`s your name?: ");
//	gets(name);
//	return name;
//}
//
//int main(void) {
//	char* name1;
//	char* name2;
//	name1 = ReadUserName();
//	printf("name1: % s \n", name1);
//  	name2 = ReadUserName();
//	printf("name2: % s \n", name2);
//	return 0;
//}


//#include <stdio.h> // ReadStringFault2
//char name[30];
//
//char* ReadUserName(void) {
//	printf("What`s your name?: ");
//	gets(name);
//	return name;
//}
//
//int main(void) {
//	char* name1;
//	char* name2;
//	name1 = ReadUserName();
//	printf("name1: %s \n", name1);
//	name2 = ReadUserName();
//	printf("name2: %s \n", name2);
//
//	printf("name1: %s \n", name1);
//	printf("name2: %s \n", name2);
//	return 0;
//}


//#include <stdio.h> // DynamicMemoryAllocation
//#include <stdlib.h>
//
//int main(void) {
//	int* ptr1 = (int*)malloc(sizeof(int));
//	int* ptr2 = (int*)malloc(sizeof(int) * 7);
//	int i;
//
//	*ptr1 = 20;
//	for (i = 0; i < 7; i++)
//		ptr2[i] = i + 1;
//	
//	printf("%d \n", *ptr1);
//	for(i=0;i<7;i++)
//		printf("%d ", ptr2[i]);
//	free(ptr1);
//	free(ptr2);
//	return 0;
//}


//#include <stdio.h> // ReadStringRight
//#include <stdlib.h>
//
//char* ReadUserName(void) {
//	char* name = (char*)malloc(sizeof(char) * 30);
//	printf("What`s your name? ");
//	gets(name);
//	return name;
//}
//
//int main(void) {
//	char* name1;
//	char* name2;
//	name1 = ReadUserName();
//	printf("name1: %s \n", name1);
//	name2 = ReadUserName();
//	printf("name2: %s \n", name2);
//
//	printf("again name1: %s \n", name1);
//	printf("again name2: %s \n", name2);
//	free(name1);
//	free(name2);
//	return 0;
//}