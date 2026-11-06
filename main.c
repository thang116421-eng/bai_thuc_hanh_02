#include<stdio.h>
#include<stdlib.h>
int main(){
	int hang,cot;
	printf("Nhap so hang: ");
	scanf("%d",&hang);
	printf("Nhap so cot: ");
	scanf("%d",&cot);
	float**arr=(float **)malloc(hang * sizeof(float *));
	for(int i=0;i<hang:i++){
		*(arr+i)=(float *)malloc(cot * sizeof(float));
	}
	printf(\nNhap cac phan tu cua ma tran\n);
	for(int i=0;i,hang;i++){
		for(int j=0;j<cot;j++){
			printf("arr[%d][%d]= ",i,j);
			scanf("%f",*(arr+i)+j);
		}
	}
	printf("\nMa tran cua ban\n");
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			printf("%.2f\t",*(*(arr+i)+j));
		}
		printf("\n");
	}
	for(int i=0;i<hang;i++){
		free(*(arr+i));
	}
	free(arr);
	return 0;
}
