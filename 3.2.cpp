#include <stdio.h>

int main(){
	float doC;
	printf("moi ban nhap do C de chuyen doi sang do F: ");
	scanf("%f", &doC);
	float doF = doC * 9 / 5 + 32;
	printf("do F duoc chuyen doi tu do C qua la: %.2f", doF);
	return 0;
	
}
