#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
void NhapMangR(double a[], int n){
	int i;
	for(i=0; i<n;i++)
	scanf("%lf",&a[i]);
}
double TimMax(double a[],int n){
	double max=a[0]; int i;
	for (i=0; i<n; i++){
		if (max<a[i]) max=a[i];
	}
	return max;
}
double TimMin(double a[],int n){
	double min=a[0]; int i;
	for (i=0; i<n; i++){
		if (min>a[i]) min=a[i];
	}
	return min;
}

int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
double x[100]; int n;
scanf("%d", &n);
NhapMangR(x,n);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
printf("Max=%.2lf; Min=%.2lf", TimMax(x,n), TimMin(x,n));
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
