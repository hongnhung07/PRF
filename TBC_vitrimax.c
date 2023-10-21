#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu


int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  double d,s=0;
  int n,a[4];
  int vitri=0;
  scanf("%d", &n);
  for(int i=1; i<=n; i++){
  	scanf("%d", &a[i]);
  	s+=a[i];
	d=s/n;}
	int max=0;
for(int i=1; i<=n; i++){
	if (a[i]> max){
	max=a[i]; vitri=i;}
	}
	printf("vi tri max = %d\n", vitri);	
printf("tbc= %.2f", d);
return 0;
  }
