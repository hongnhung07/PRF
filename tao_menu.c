#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu


int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  int choice,a,b,kq;
  printf("1. Tinh tong hai so: ");
  printf("\n2. Tinh hieu hai so: ");
  printf("\n3. Tinh tich hai so: ");
  printf("\n4. Tinh thuong hai so: ");
  printf("\nMoi nhap lua chon 1-4: ");
  scanf("%d", &choice);
  printf("\nMoi nhap 2 so a,b: "); scanf("%d%d, &a, &b");
  printf("\nOUTPUT:\n");
  switch(choice){
  	case 1: kq=a+b;
  	printf("%d + %d = %d", a,b,kq); break;
  	case 2:printf("%d - %d = %d", a,b,a-b);break;
  	case 3:printf("%d * %d = %d", a,b,a*b);break;
  	case 4: printf("%d / %d = %d", a,b,a/b); break;
  	default: printf("khong co chuc nang nay");break;
  
  }
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
