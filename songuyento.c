#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu


int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,i;
 scanf("%d",&n);
 for (i=2; i<=n; i++){
 	int k,dem=0;
 	for (k=1; k<=i; k++)
 	if (i%k==0) dem++; // het for, dung dem cac so chia het
 	if (dem==2) printf("%d\n",i);
}



  
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
