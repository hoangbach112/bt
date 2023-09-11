#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char rollno[16];
	printf("\n Nhap vao rollno =");
	scanf("%s,&rollno");
	
	int age;
	printf("\n Nhap vao age");
	scanf("%d",&age);
	
	char name[50];
	printf("\n Nhap vao name");
	scanf("%s",&name);	
	
	char address[200];
	printf("\n Nhap vao address");
	scanf("%s",&address);
	
	fflush(stdin);fflush(stdout);
	
	printf("\n=============================");
	printf("\n| Ten           | Tuoi    | Ma SV     | dia chi        |");
	printf("\n==============================");
	printf("\n|%s             |%d       |%s         |%s              |",name,age,rollno,address);

	
	
	
	
	return 0;
}
