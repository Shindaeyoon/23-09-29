/* chapter 21 */

//#include <stdio.h> // ReadWriteChar
//
//int main(void) {
//	int ch1, ch2;
//	ch1 = getchar();
//	ch2 = fgetc(stdin);
//
//	putchar(ch1);
//	fputc(ch2, stdout);
//	return 0;
//}


//#include <stdio.h> // ConsoleEOF
//
//int main(void) {
//	int ch;
//	while (1) {
//		ch = getchar();
//		if (ch == EOF)
//			break;
//		putchar(ch);
//	}
//	return 0;
//}


//#include<stdio.h> // p.423 ¹®Á¦ 21-1
//
//int main(void) {
//	int ch1, ch2;
//	int i;
//	ch1 = getchar();
//	if (ch1 >= 'a' && ch1 <= 'z')
//		ch1 -= 32;
//	else if (ch1 >= 'A' && ch1 <= 'Z')
//		ch1 += 32;
//
//	ch2 = putchar(ch1);
//	return 0;
//}


//#include<stdio.h> // WriteString
//
//int main(void) {
//	char* str = "simple String";
//
//	printf("1. puts test ------ \n");
//	puts(str);
//	puts("So Simple String");
//
//	printf("2. fputs test ------ \n");
//	puts(str, stdout); printf("\n");
//	puts("So Simple String", stdout); printf("\n");
//
//	printf("3. end of main ------ \n");
//	return 0;
//}


//#include <stdio.h> // ReadString
//
//int main(void) {
//	char str[7];
//	int i;
//
//	for (i = 0; i < 3; i++) {
//		fgets(str, sizeof(str), stdin);
//		printf("Read %d : %s \n", i + 1, str);
//	}
//	return 0;