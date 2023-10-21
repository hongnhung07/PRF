#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu


int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int choice ,a,b, kq;
		printf("1. Tinh tong 2 so:");
	printf("\n2. Tinh hieu 2 so:");
	printf("\n3. Tinh tich 2 so:");
	printf("\n4. Tinh thuong 2 so:");
	printf("\nMoi nhap lua chon 1-4:");
	scanf("%d", &choice);
	printf("\nMoi nhap 2 so a,b"); scanf("%d%d",&a, &b );
	



  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	switch(choice){
		case 1: kq=a+b;
		printf("%d + %d == %d", a, b, kq);
		break;
		case 2: kq=a-b;
		printf("%d - %d == %d", a, b, a-b);
		break;
		case 3: kq=a*b;
		printf("%d * %d == %d", a, b, a*b);
		break;
		case 4: kq=a/b;
		printf("%d / %d == %d", a,b, a/b);
		break;
		default : printf ("Khong co chuc nang nay");
		break;
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}