#include <stdio.h>
#include <string.h>
using namespace std;
struct sinhvien {
	int ma;
	float diem;
	char ten[50];
	char truong;
};
typedef struct sinhvien sinhvien;

int main(){
	float sum1 = 0.0;
	float sum2 =0.0;
	float sum3=0.0;
	int i;
	int n;
	float max_diem;
	printf("Nhap so luong sinh vien cua 3 truong : ");
	scanf("%d", &n);
	sinhvien sv[n];
	for(i =0;i<n;i++){
		printf("Nhap ma sinh vien : ");
		scanf("%d", &sv[i].ma);
		printf("Nhap ten sinh vien : ");
		getchar();
		gets(sv[i].ten);
		printf("Nhap diem sinh vien : ");
		scanf("%f", &sv[i].diem);
		getchar();
		printf("Nhap truong cua sinh vien : ");
		scanf("%c", &sv[i].truong);
		if(sv[i].truong == '1'){
			sum1+= sv[i].diem; 
		}
		else if(sv[i].truong == '2'){
			sum2+= sv[i].diem;
		}
		else{
			sum3+= sv[i].diem;
		}
	}
	float max = sum1;
	char c = '1';
	if(sum2 > max){
		max = sum2;
		c = '2';
	}
	if(sum3>max){
		max =sum3;
		c='3';
	}
	printf("Truong co so diem cao nhat : ");
	if(max==sum1){
		printf("1 ");	
	}
	if(max == sum2){
		printf("2 ");
	}
	if(max == sum3){
		printf("3");
	}
	printf("\nNhap ten sinh vien muon tim kiem : ");
	getchar();
	char s[50];
	gets(s);
	for(i=0;i<n;i++){
		if(strcmp(sv[i].ten, s) == 0){
			printf("%d\n", sv[i].ma);
			printf("%s\n", sv[i].ten);
			printf("%.2f\n", sv[i].diem);
			printf("%c\n", sv[i].truong);	
		}
	}
	printf("Sinh vien co diem cao nhat la : ");
	max_diem = sv[0].diem;
	int k;
	for(i =0;i < n;i++){
		if(i==0 || sv[i].diem >= max_diem){
			max_diem = sv[i].diem;
			k =i;
		}
	}
	printf("%s\n", sv[k].ten);
//	for(i = 0; i<n;i++){
//		printf("%d\n", sv[i].ma);
//		printf("%s\n", sv[i].ten);
//		printf("%f\n", sv[i].diem);
//		printf("%c", sv[i].truong);
//	}
	

	
	return 0;
}
