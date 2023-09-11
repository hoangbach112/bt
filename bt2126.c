#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("\n Nhap chieu dai = ");
	scanf("\n%d",&a);
	
	int b;
	printf("\n Nhap chieu rong = ");
	scanf("\n%d",&b);
	
	int chuvi = (a+b)*2;
	printf("\n Chu vi hinh chu nhat : %d",chuvi);
	
	int dientich = a*b;
	printf("\n Dien tich hinh chu nhat : %d",dientich);
	
	int x;
	printf("\n ban kinh hinh tron = ");
	scanf("\n%d",&x);
	
	int dientichHT = 3.14*(x*x);
	printf("\n Dien tich hinh tron : %d",dientichHT);
	
	int chuviHT = 2*3.14*x;
	printf("\n Chu vi hinh tron :%d",chuviHT);
	
	
	
	int n;
	printf("\nnhap vao so n :");
	scanf("%d",&n);
	float tong = (n+1)*n/2+1;
	printf("tong = %f",tong);
	
	
	
	
	return 0;
}
