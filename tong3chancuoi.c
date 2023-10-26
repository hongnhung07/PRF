#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
int main() {
   	int n,sum=0,i,dem=0;
   	scanf("%d",&n);
   	for (i=n; i>0;i--){
   		if(i%2==0){
   			sum+=i;
   			dem++;
		   }
		   if(dem==3){
		   	break;
		   }
	   }
   	printf("\nOUTPUT:\n");
   	printf("%d", sum);
   	printf("\n");
  system ("pause"); 
  return(0);		// quay ve
}