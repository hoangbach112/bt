#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void test02() {
	//Ghi noi dung: SINH VIEN APTECH 19 LE THANH NGHI -> test.txt
	
	//B1. Khai bao
	FILE *fp;
	
	//B2. Mo ket noi toi file
	fp = fopen("myinfor.txt", "a");
	if(ferror(fp)) {
		printf("\nMo file bi error");
	} else {
		//B3. Ghi noi dung vao file
		char name[50] = "Nguyen Hoang Bach\n";
		
		fputs(name, fp);
		char age[50] = "24";
		fputs(age,fp);
		char email[50] = "hoangbach11299@gmail.com";
		fputs(email,fp);
		char sdt[20] = "0812546666";
		fputs(sdt,fp);
	}
	
	//B4. Dong file
	fclose(fp);
}

int main(int argc, char** argv) {
	
    test02();
	
	
	
	return 0;
}
