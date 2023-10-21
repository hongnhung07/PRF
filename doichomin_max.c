#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu

//nhập vào 1 mảng n số nguyên sau đó đổi chỗ phần tử max đầu tiên tim thấy với phần tử min cuối cùng tìm thấy. Chương trình in OUTPUT như sau: 
// INPUT: 9 3 45 134 587 9 21 56                 9 3 45 134 587 9 21 3
// OUTPUT: 9 587 45 134 3 9 21 56                9 3 45 134 3 9 21 587

void NhapMangI(int a[], int n){ //nhap du lieu cho mang kieu int co n phan tu
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void HienMangI(int a[], int n){ //hien mang kieu int co n phan tu
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
int TimVTMax(int a[], int n){ // n la so luong phan tu cua mang a 
	int max= a[0]; int i, vt=0;
	for(i=0; i<n; i++) {
		if(max< a[i]) {
		 max=a[i];
		  vt=i; 
	}
}
	return vt;
}
int TimMinCC(int a[], int n){ // n la so luong phan tu cua mang a 
	int min= a[0]; int i,vt=0;
	for(i=0; i<n; i++) {
		if(min>=a[i]) min=a[i]; vt=i;
	
	}
	return vt;
}

void Swap(int a[],int n){
	int vtmaxdau=TimVTMax(a,n), vtmincuoi=TimMinCC(a,n),tmp=0;
	tmp=a[vtmaxdau]; a[vtmaxdau]= a[vtmincuoi]; a[vtmincuoi]=tmp;
}
int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int d[100]; int n; scanf("%d", &n); 
	NhapMangI(d,n); HienMangI(d,n);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  Swap(d,n); HienMangI(d,n);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
