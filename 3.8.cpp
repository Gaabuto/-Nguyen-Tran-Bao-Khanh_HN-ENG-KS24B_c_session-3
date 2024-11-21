#include <stdio.h>

int main(){
	int so;
	printf("moi ban nhap so bat ky co 4 chu so ");
	scanf("%d", &so);
	int d = so % 10;
	int c = so/10 % 10;
	int b = so/100 % 10;
	int a = so/1000;
	int daoD = d * 1000;
	int daoC = c*100;
	int daoB = b*10;
	int soDao = daoD + daoC + daoB + a;
	printf("%d", soDao);
	return 0;
}
