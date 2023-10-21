#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
// nhap vao hai so nguyen la thang va nam. Sau do in ra so ngay trong thang cua nam do
// vi du: 2/2000: 29 ngay
// 3/1999:31 ngay
// thang 31 ngay: 1,3,5,7,8,10,12. Thang 30 ngay: 4,6,9,11
// thang 2: = 29 ngay neu nam chia cho 4 khong chia het 100 hoac chia het 400
//           con lai =28 ngay
int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a,b;
  scanf("Thang %d\n", a);
  scanf("Nam %d", b);
  if (a>=1 && a<=12 && b>0){
  if( a==1 || a==3|| a==5 ||a==7 || a==8 || a==10 || a==12) {
  printf("31 ngay");}
  else if ( a==4 || a==6 || a==9 || a==11) printf("30 ngay");
  if ( b%4==0 && b%100!=0 || b%400==0) printf(" 29 ngay"); else printf("28 ngay");
}
else printf("thang hoac nam khong hop le");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
