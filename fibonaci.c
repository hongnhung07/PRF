#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu


int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,i,f1=1,f2=1;
  scanf("%d", &n);
  for (i=3; i<=n; i++){
  	int tmp=f2;
  	    f2=f1+f2;
  	    f1=tmp;
  }
printf("%d",f2);
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
