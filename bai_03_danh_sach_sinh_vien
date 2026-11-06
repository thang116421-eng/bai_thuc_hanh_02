#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	char hoTen[50];
	int masv;
	float diem1;
	float diem2;
	float diem3;
}SinhVien;
int main(){
	int n;
	printf(Nhap so uong sinh vien: );
	scanf("%d",&n);
	sinhVien *ds=(SinhVien *)malloc(n * sizeof(sinhVien));
	for(int i=0;i<n;i++){
		fgets((ds+i)->hoTen,sizeof((ds+i)->hoTen),stdin);
		fgets((ds+i)->masv,sizeof((ds+i)->masv),stdin);
		scanf("%f",&(ds+i)->diem1);
		scanf("%f",&(ds+i)->diem2);
		scanf("%f",&(ds+i)->diem3);
		getchar();
	}
	for(int i=0;i<n;i++){
		printf("sv %d | MaSV: %d| Ten:%s|Diem:%.1f,%.1f,%.1f\n",i+1,(ds+i)->masv,(ds+i)->hoTen,(ds+i)->diem1,(ds+i)->diem2,(ds+i)->diem3);
	}
	free(ds);
	return 0;
}
