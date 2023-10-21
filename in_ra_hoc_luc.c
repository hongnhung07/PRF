#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
//nhap diem svien in ra loai hoc luc
//>=9 xuat sac; >=8 gioi; >=7 kha
//>= trung binh con lai la yeu

int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  double d;
  scanf("%lf", &d);
  if(d>=0 && d<=10){
  	if (d>=9) printf("xuat sac");
  	if (d>=8 && d<9) printf("gioi");
  	if (d>=7 && d<8) printf("kha");
  	if (d>=5 && d<7) printf("trung binh");
  	if (d<5) printf("yeu");
  }
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
