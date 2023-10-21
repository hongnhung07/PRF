#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
//sap xep tang tren moi dong
void NhapMang2I(int a[][50], int r, int c){// truyen tham so mang 2 chieu trong function can 1 chi so cot 50
  int i,k;
  for (i=0;i<r;i++) // vong lap duyet dong
  for (k=0; k<c;k++){//vong lap duyet cot
  scanf("%d", &a[i][k]);
  }//mang 2 chieu trong function cung la tham chieu
}
void HienMang2I(int a[][50], int r, int c){
	int i,k;
	for (i=0;i<r;i++){ // vong lap duyet dong
		for (k=0;k<c;k++){//vong lap duyet cot in ta cac so tren mot dong
			printf("%d\t", a[i][k]);
		}printf("\n");
	}
}
void SortAscbyRow(int a[][50], int r, int c){
	int i,k,m;
	for(i=1;i<r;i++){//vong lap duyet dong sau do sap xep/dong = selection sort 2 vong for chay chi so cot
	for (k=0;k<c-1;k++)
	for (m=k+1;m<c;m++){
		if (a[i][k] >a[i][m]) {
			double tmp=a[i][k]; a[i][k]=a[i][m]; a[i][m]= tmp;
		}
	}
	}
	HienMang2I(a,r,c);
}
int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a[50][50],r,c; scanf("%d%d", &r,&c);
  NhapMang2I(a,r,c);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  HienMang2I(a,r,c);
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  SortAscbyRow(a,r,c);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
