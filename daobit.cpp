#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
// constance: khai bao hang so - value khong thay doi trong suot chuong trinh
#define x 100
const int y=200;
int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a=41, b=10;




  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("~a=%d",~a);
  printf("\n >>a =%d", a>>1);
  printf("\n <<a =%d", a<<1);
  printf("\n a&b =%d, a|b =%d, a^b =%d", a&b, a|b , a^b);
  printf("\n constance x =%d, y= %d",x,y);


  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
