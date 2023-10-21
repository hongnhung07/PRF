#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu


int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n,sum=0;
do {
	scanf("%d",&n);
} while (n<=100);
while(n>0){
	int du=n%10;
	sum+=du;
	n=n/10;
}
printf("%d", sum);


  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
