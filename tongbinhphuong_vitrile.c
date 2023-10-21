#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
//n<10 mang cac so nguyen. tinh tong binh phuong cac so le ? vi tri le
void NhapMangI(int a[], int n){
	int i;
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
}
int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i,n;
  int a[100];
  int sum=0;
  scanf("%d", &n);
  NhapMangI(a,n);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (i=0;i<n;i++){
  	if((i+1)%2!=0 && a[i]%2!=0){
  		sum+=pow(a[i],2);
	  }
  }
printf("tong binh phuong la: %d", sum);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
