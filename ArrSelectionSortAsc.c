#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu

void NhapMangR(int a[], int n){
	int i;
	for(i=0; i<n;i++)
	scanf("%d",&a[i]);
}
void HienMangR(int a[], int n){
	int i;
	for (i=0;i<n;i++)
	printf("%d", a[i]);
}
void SelectionSortAsc( int a[], int n){
	int i,k;
	for(i=0;i<n-1;i++)
	for (k=i+1; k<n; k++)
	if (a[i] >a[k]){
		int tmp=a[i]; a[i]=a[k]; a[k]=tmp;
	}
}
int main() {
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  // Fixed Do not edit anything here.
  int a[100],n; scanf("%d", &n);
  NhapMangR(a,n);
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
HienMangR(a,n);
printf("\n After Selection sort:\n");
SelectionSortAsc(a,n);
HienMangR(a,n);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
