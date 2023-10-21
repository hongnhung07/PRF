#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
// UCLN, BCNN
int UCLN(int a, int b){
	while (a!=b) {
		if (a>b) a=a-b; // phuong phap tru
		else b=b-a;
	}
	return a;
}
int UCLNC(int a, int b){
	while (a%b!=0) {
		if (b>a){
		int t=a; a=b;b=t; //swap
		}
		 a=a%b; // phuong phap tru
	}
	return b;
}
int BCNN (int a, int b){
	return a*b/UCLN(a,b);
}

int main() {
	int a,b;
	scanf("%d%d", &a,&b);
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:




  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
printf("%d %d", UCLNC(a,b), BCNN(a,b));


  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
