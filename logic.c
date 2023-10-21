#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu


int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a=5;




  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 printf("a>5 && a<10 ?=%d ",a>5 && a<10);
 printf("\na>5 || a<0?=%d", a>5 || a<0);
 printf("\n!(a>5 || a<0) ?=%d)", !(a>5 || a<0));


  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
