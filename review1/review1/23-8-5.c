//#include <stdio.h> // FirstFileWrite
//#pragma warning(disable:4996)
//
//int main(void) {
//	FILE* fp = fopen("data.txt", "wt");
//	if (fp == NULL) {
//		puts("���Ͽ��� ����!");
//		return -1;
//	}
//	fputc('A', fp);
//	fputc('B', fp);
//	fputc('C', fp);
//	fclose(fp);
//	return 0;
//}


//#include <stdio.h> // FirstFileRead
//#pragma warning(disable:4996)
//
//int main(void) {
//	int ch, i;
//	FILE* fp = fopen("data.txt", "rt");
//	if (fp == NULL) {
//		puts("���Ͽ��� ����!");
//		return -1;
//	}
//
//	for (i = 0; i < 3; i++) {
//		ch = fgetc(fp);
//		printf("%c \n", ch);
//	}
//	fclose(fp);
//	return 0;
//}


//#include <stdio.h> // TextDataFileWrite
//#pragma warning(disable:4996)
//
//int main(void) {
//	FILE* fp = fopen("simple.txt", "wt");
//	if (fp == NULL) {
//		puts("���Ͽ��� ����");
//		return -1;
//	}
//	fputc('A', fp);
//	fputc('B', fp);
//	fputs("My name is Hong \n", fp);
//	fputs("Your name is Yoon \n", fp);
//	fclose(fp);
//	return 0;
//}


//#include <stdio.h> // TextDataFileRead
//#pragma warning(disable:4996)
//
//int main(void) {
//	char str[30];
//	int ch;
//	FILE* fp = fopen("simple.txt", "rt");
//	if (fp == NULL) {
//		puts("���Ͽ��� ����");
//		return -1;
//	}
//	ch = fgetc(fp);
//	printf("%c \n", ch);
//	ch = fgetc(fp);
//	printf("%c \n", ch);
//
//	fgets(str, sizeof(str), fp);
//	printf("%s", str);
//	fgets(str, sizeof(str), fp);
//	printf("%s", str);
//
//	fclose(fp);
//	return 0;
//}


//#include <stdio.h> // TextCharFileCopy
//#pragma warning(disable:4996)
//
//int main(void) {
//	FILE* src = fopen("src.txt", "rt");
//	FILE* des = fopen("dst.txt", "wt");
//	int ch;
//
//	if (src == NULL || des == NULL) {
//		puts("���Ͽ��� ����");
//		return -1;
//	}
//	while ((ch = fgetc(src)) != EOF)
//		fputc(ch, des);
//	if (feof(src) != 0)
//		puts("���Ϻ��� �Ϸ�!");
//	else
//		puts("���Ϻ��� ����!");
//
//	fclose(src);
//	fclose(des);
//	return 0;
//}