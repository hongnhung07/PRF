#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
//Nhap vao diem va hanh kiem cua hoc sinh in ra khen thuong nhu sau:
// Diem >=9 hkiem = 'T' thi khen thuong loai 1
//Diem >=9 dkiem = ' K' khen thuong loai 2
//Diem >=7.5 hkiem = 't' khen thuong loai 2
//diem >=7.5 hkiem = 'k' khen thuong loai 3
//con lai khong khen thuong
int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
 double d;
 char hk="T,K";
 scanf("%lf", &d);
 scanf(" %c", &hk);
 if(d>=0 && d<=10) {
 	if(d>=9 && hk=='T') printf(" Khen thuong loai 1");
 	else if (d>=9 && hk== 'K') printf("khen thuong loai 2");
 		if ( d>=7.5 && hk== 'T') printf(" khen thuong loai 2");
 		if ( d>=7.5 && hk== 'K') printf("khen thuong loai 3");
 		if (d<7.5 ) printf("khong khen thuong");
	 }
	else printf("diem khong hop le");





  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
