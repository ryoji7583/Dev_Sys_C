#include<stdio.h>

int main(void) {
	FILE *fp;
	errno_t error;
	int c;
	int a;
	while(1){
		if ((error = fopen_s(&fp, "Source1.txt", "r")) != 0);
		scanf_s("%d", &a);
		if (a == 1) {
			while ((c = fgetc(fp)) != EOF) {
				putchar(c);
			}			
		}
		if (a == 9) {
			printf("èIóπÇµÇ‹Ç∑ÅB\n");
			fclose(fp);
			return 0;
		}
		fclose(fp);
	}
}