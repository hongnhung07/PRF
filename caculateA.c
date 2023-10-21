#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
// tinh bieu thuc A= -1.x/1!+(-1)^2.x^-2/2!....

int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,i,gti=1; double x,A=0;
  scanf("%lf%d",  &x, &n);
  for (i=1; i<=n;i++){
  	   gti=gti*i; // tinh duoc giai thua tu i
  	   A+=pow(-1,i)*pow(x,i)/gti;
  }
  printf("%.2lf\n+", A);
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
