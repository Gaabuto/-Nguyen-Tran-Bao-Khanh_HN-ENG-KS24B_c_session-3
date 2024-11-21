#include <stdio.h>

int main(){
	int so;
	printf("moi ban nhap so bat ky co 4 chu so ");
	scanf("%d", &so);
	int d = so % 10;
	int c = so/10 % 10;
	int b = so/100 % 10;
	int a = so/1000;
	int tong = a + b + c + d;
	printf("%d", tong);
	
	return 0;
}
