#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu

int Timsomu(int n){
	int mu=0;
      while (n>0){
      	mu++; n=n/10;}
      	return mu;
}
int checkAmstrong(int m ){
	int sum=0,mu, tmp=m;
	mu=Timsomu(m);
	 while(m>0){
	  	int du=m%10; 
		sum+=pow(du,du);
	  	m=m/10;
}
if(sum==tmp) return 1; else return 0;}
int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  int n;
  scanf("%d", &n);
  printf("\nOUTPUT:\n");
if (checkAmstrong(n)==0) printf("%d is not a amstrong number",n);
else printf("%d is a amstrong number",n);


  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
