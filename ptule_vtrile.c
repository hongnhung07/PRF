#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
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
	
 //2. in ra cac phan tu le o vi tri le theo thu tu giam dan, tang dan 
// Cach 1: dung mang tach cac phan tu le o vt le sang 1 ben 
// Cach 2; cu sap xep cac ptu le o vt le tren mang cu roi in ra 
void SortOddAcs( int a[], int n) {
	int b[1000], m,i; // m la so luong phan tu cua mang b, b la mang so le o vt le 
	for(i=0; i<n; i++){// coi vi tri dau tien trong mang la 1 
	if((i+1)%2==1 && a[i]%2==1)
	b[m++]= a[i]; // gan xog thi tang m
			
	} // b2. sap xep tren mang b tang dan 
	BubbleSortAsc(b,m);
	HienMangI(b,m);
}
		void BubbleSortAsc(int a[], int n){
		int i,k; 
		for(i=0; i< n-1; i++)
		for(k=n-1; k>i; k--)
		if(a[k] <a[k-1]){
			int tmp=a[k]; a[k]= a[k-1]; a[k-1]=tmp;
			
			
		}
	}	
	//3.khong tach rieng tung mang ma chi sap xep va in ra
void SortEvenDsc(int a[], int n){
	int i,k;
	for(i=0;i<n;i++)
		for (k=i+1;k<n;k++){
			if(a[i]%2==0 && a[k]%2==0 && (i+1)%2==1 && (k+1)%2==1){//swap
			int tmp=a[i]; a[i]=a[k]; a[k]=tmp;
			}
		}
	HienMangI(a,n);
}
// sap xep 5 phan tu giua theo thu tu tang dan, coi phan tu trung tam co vi tri =n/2 lay nguyen
void Sort5Last(int a[], int n){
	int i,k;// dung selection sort
	for (i=n-5; i<n;i++)
	for (k=i+1;k<n;k++){
		if(a[i]>a[k]){//swap
		int tmp=a[i]; a[i]=a[k];a[k]=tmp;
		}
	} HienMangI(a,n);
}

int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n, a[1000];
	scanf("%d", &n);
	NhapMangI(a,n); HienMangI(a,n);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  Sort5Last(a,n); 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
