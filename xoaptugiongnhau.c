#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
// xoa cac phan tu trung nhau trong mang chi de lai mot phan tu duy nhat
void NhapMangI(int a[], int n){
	int i;
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
}
void HienMangI(int a[], int n){
	int i;
	for (i=0;i<n;i++)
	printf("%d ", a[i]);
}
int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a[10], n;
  scanf("%d", &n);
  NhapMangI(a,n);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int i,k,m;
  for (i=0;i<n-1;i++){ // vong nay de chay qua cac phan tu
  	for (k=i+1;k<n;k++){ //vong nay de tim phan tu lap
  	if(a[k]==a[i]){ //vi tri k xuat hien phan tu lap lai. copy tu vi tri k+1 toi <n ve phia trc 1 vtri
  	int m; // copy
  	for(m=k+1; m<n; m++){
  		a[m-1]=a[m];
	  }
	  n--; k--; // giam so luong phan tu mang di 1, lui k lai de xet duoc phan tu vua copy len phia trc
	  }
	  }
  }
   HienMangI(a,n);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
