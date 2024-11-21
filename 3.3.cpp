#include <stdio.h>

int main(){
	float banKinh;
	printf("moi nhap ban kinh cua hinh tron ");
	scanf("%f", &banKinh);
	float chuVi = 2 * 3.14159 * banKinh;
	float dienTich = 3.14159 * banKinh * banKinh;
	printf ("chu vi hinh tron la %.2f\n", chuVi);
	printf("dien tich hinh tron la %.2f", dienTich);
	return 0;
	
}
