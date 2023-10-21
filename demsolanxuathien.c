#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
// nhap mot mang n phan tu nguyen. sau do nhap 1 so x, dem so lan x xuat hien  tren mang
void NhapMangI(int a[], int n){
	int i;
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
}
int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i,n,x,dem=0;
  int a[100];
  scanf("%d", &n);
  NhapMangI(a,n);
  scanf("%d",&x);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 for (i=0; i<n;i++){
 	if (a[i]==x) dem++;
 }
printf("So lan xuat hien %d", dem);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
