#include<stdio.h>
int main(){
	float soGio,mucLuong,luongCoban,tongLuong,phuCap;
	printf (" nhap gio lam trong mot thang ");
	scanf("%f",&soGio);
	printf (" nhap muc luong mot gio ");
	scanf("%f",&mucLuong); 
	luongCoban=soGio*mucLuong;
	if (soGio>160){
		phuCap=luongCoban*0.1;
		tongLuong=luongCoban+phuCap;
	}
	else{
		phuCap=0;
		tongLuong=luongCoban;
	}
	printf (" luong co ban la %f ",luongCoban);
	printf ("  tien duoc phu cap la %f ",phuCap);
	printf (" tong luong la   %f ",tongLuong);
	return 0;

}