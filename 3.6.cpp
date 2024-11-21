#include <stdio.h>

int main(){
	float b;
	printf("moi ban nhap do dai canh cua tam giac ");
	scanf("%f", &b);
	float h;
	printf("moi ban nhap chieu cao cua tam giac ");
	scanf("%f", &h);
	float dienTich = ( b * h ) / 2;
	printf ("dien tich cua hinh tam giac co dien tich la %.2f", dienTich);
	return 0;
}
