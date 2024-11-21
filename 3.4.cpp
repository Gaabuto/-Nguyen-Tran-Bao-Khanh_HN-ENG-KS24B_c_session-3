#include <stdio.h>

int main(){
	float toan;
	printf("moi nhap diem toan cua ban ");
	scanf("%f", &toan);\
	float van;
	printf("moi nhap diem van cua ban ");
	scanf("%f", &van);
	float anh;
	printf("moi nhap diem anh cua ban ");
	scanf("%f", &anh);
	float diemTrungBinh = (toan + van + anh) / 3;
	printf("diem trung binh cua ban la %.2f", diemTrungBinh);
	return 0;
}
