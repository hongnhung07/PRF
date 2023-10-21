#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
//tim diem yen ngua
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
void YenNgua(double a[][50], int r, int c){
	int h,cot,d; double minr, maxc; //min hang, max cot. b1 duyet moi hang tim min hang->b2. ktra gia tri min hang thoa man max cot khong?
	for(h=0; h<r; h++){ //duyet theo hang va tim min hang
	minr=a[h][0]; //cho min hang =pt dau cua moi hang
	for(cot=0;cot<c;cot++)
	     if (a[h][cot]<minr) minr=a[h][cot];
	     //tim minr xong. b2 ktra all pt min tren hang do xem co thoa man la max tren cot do khong
    for (cot=0; cot<c;cot++){
    	if (a[h][cot]==minr){//b2 ktra gtri min hang thoa man max cot khong
    	     for(d=0; d<r;d++){
    	     	if(a[d][cot]>a[h][cot]) break;// neu bi break thi d<r-1 =>kp la yen ngua
    	     }
    	     if(d>=r-1) printf("vi tri (%d.%d) =%.1lf la mot diem yen ngua", h,cot,a[h][cot]);
		}
}
	}
}

int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
double a[20][50]; int r,c;
  scanf("%d%d", &r, &c);
  NhapMang2D(a,r,c);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 HienMang2D(a,r,c);
 YenNgua(a,r,c);


  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
