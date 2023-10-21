#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
const int x=100; // hang so x=100, luon =100 cho du dung o dau trong file nay
#define y 200; //hang so y=200
#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu


int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int *a; double*c, d,*e; // khia bao con tro a kieu int, c kieu double 
	a= (int*)malloc(1); 
	c=(double*) malloc(1); // cap phat bo nho cho con tro 
	e=(double*)calloc(10, sizeof(double));// cap phat 10 o nho cho con tro e moi o nho size= kieu double 
	e=(double*)realloc(e,20); 
	scanf("%d%lf", a,c); printf("a= %d, c= %.2lf", *a,*c);
// 	int n=7; a=&n; // con tro a = dia chi cua n
	



  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n"); // a-> dung con tro a; *a -> lay gia tri trong o nho ma ocn tro nam giu 
  //@STUDENT: WRITE YOUR OUTPUT HERE:

	d=*a+*c;
	printf("\nd== %.2lf",d); 

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}