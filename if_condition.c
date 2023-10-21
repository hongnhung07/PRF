#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
// nhap 2 so a va b kieu nguyen. Sau do neu a>=b thi in ra a-b. Nguoc lai thi in ra b-a

int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a,b;
  scanf("%d %d", &a,&b);
  if(a>=b) printf("a-b\n");
  else printf("b-a\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
