#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu


int main() {

   	int n,sum=0,i,cuoi;
   	scanf("%d", &n);
   	if (n%2==0) {
	   cuoi=n;
   	sum= cuoi + (cuoi-2) + (cuoi -4);
   	}
   	else { cuoi=n-1;
   	sum= cuoi + (cuoi-2) + (cuoi -4);
   	}
   	printf("%d", sum);
	   	
 
  return(0);		// quay ve
}
