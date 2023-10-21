#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
//viet lai ctrinh in ra cac so ngto <n

  int isPrime(int n){
  	int i,dem=0;
  	for(i=1;i<=n;i++) if (n%i==0) dem++;
  	if(dem<=2) return 1;
  	else return 0;
  }
  int PrimeSn(int n){
  	int i;
  	for (i=2; i<n; i++) if (isPrime(i)==1) printf("%d ",i);
  }
int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  int n;
  scanf("%d", &n);
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
isPrime(n);


  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
