#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
void NhapMang2D(double a[][50],int r, int c){// truyen tham so mang 2 chieu trong function can 1 chi so cot 50
  int i,k;
  for (i=0;i<r;i++) // vong lap duyet dong
  for (k=0; k<c;k++){//vong lap duyet cot
  scanf("%lf", &a[i][k]);
  }//mang 2 chieu trong function cung la tham chieu
}
void HienMang2D(double a[][50], int r, int c){
	int i,k;
	for (i=0;i<r;i++){ // vong lap duyet dong
		for (k=0;k<c;k++){//vong lap duyet cot in ta cac so tren mot dong
			printf("%.1lf\t", a[i][k]);
		}printf("\n");
	}
}
void SortCol(double a[][50], int r, int c){
	int cot,ht,hs; // h=chi so duyet hang, cs = ch? s? c?t ch?y sau, ct=chi so cot chay trc
	for(cot=0; cot<c;cot++){//duyet tung hang
	     for(ht=0;ht<r-1;ht++)
	     for (hs=ht+1; hs<r;hs++){
	     	if(a[ht][cot]>a[hs][cot]){//swa[
	     	double tmp=a[ht][cot]; a[ht][cot]=a[hs][cot]; a[hs][cot]=tmp;
			 }
		 }
	} HienMang2D(a,r,c);
	
}

int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
 double a[20][50]; int r,c;
  scanf("%d%d", &r, &c);
  NhapMang2D(a,r,c);
   printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  HienMang2D(a,r,c);
  printf("\nAfter Sort:\n");
 SortCol(a,r,c);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
