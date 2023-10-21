#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
//nhập 1 mảng n số nguyên sau đó in ra các số lẻ của mảng
void NhapMangI(int a[], int n){ //nhap du lieu cho mang kieu int co n phan tu
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void HienMangI(int a[], int n){ //hien mang kieu int co n phan tu
    int i;
    for(i=0;i<n;i++){
    	if(a[i]%2!=0) {
		printf("%d ",a[i]);
	}
  }
}
int main() {
  // system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

int x[10],n; // n la so luong pt can nhap vao
scanf("%d",&n); 
NhapMangI(x,n);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
HienMangI(x,n);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}