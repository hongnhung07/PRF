#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu


int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,i,k;
  scanf("%d", &n);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (i=1; i<=n; i++){
  	if (i==1 || i==n){
  		for (k=1; k<=n; k++) printf("* ");
	  }else {
	  	for (k=1; k<=n; k++) if (k==1 || k==n) printf ("* "); 
		  else printf(" ");
	  }printf("\n");
  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
