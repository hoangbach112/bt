#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c,t,n,ch;
	printf("\nnhap gia tri cua a = ");
	scanf("%d",&a);
	printf("\nNHap gia tri cua b = ");
	scanf("%d",&b);
	c = a + b;
	t = a - b;
	n = a*b;
	ch = a/b;
	printf("\n a+b = %d",c);
	printf("\n a-b = %d",t);
	printf("\n a*b =%d",n);
	printf("\n a/b = %d",ch);
	
	
	
	
	return 0;
}
