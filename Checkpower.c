#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu

int checkPower(int n){// ktra xem n co la power hay kh
 int i;
 for(i=0; pow(2,i)<=n; i++)
 if (pow(2,i)==n) return i; //neu la power 2 thi tra ve 1
 return 0; //chay het for ma chua return thi se tra ve 0
}
int main() {
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n; 
scanf("%d", &n); // gia su n nhap >0
  printf("\nOUTPUT:\n");
if (checkPower(n)==0) printf("%d is not power of 2", n);
else printf("%d equal %d power of 2", n, checkPower(n));


  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
