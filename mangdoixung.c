#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
// nhap 1 mang n ptu so nguyen. Kiem tra mang co doi xung khong
// a[0]=a[n-1]--a[i]=a[k] chạy tới khi nào i<=k. i++; k--
void NhapMangI(int a[], int n){
	int i;
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
}
int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,a[100];
  scanf("%d", &n);
  NhapMangI(a,n);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int i=0,k=n-1;
  while (i<=k){
  	if(a[i]!=a[k]) break;
  	i++;k--;
  }
  if (i>k) printf("Arr is Symmetric");
  else printf("Arr is not Symmetric");

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
