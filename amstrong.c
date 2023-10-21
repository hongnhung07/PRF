#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu


int main() {
//   system("cls");   // lenh cls trong dos xoa man hinh
 int n,i;
 scanf("%d", &n);
 for (i=1;i<=n;i++){ //3. tim so mu cho so i
      int m=i,mu=0;
      while (m>0){
      	mu++; m=m/10;
	  }//4. tinh tong cac chu so lay mu
	  m=i; int sum=0;
	  while(m>0){
	  	int du=m%10; 
		sum+=pow(du,mu);
	  	m=m/10;
	  }
 	if (sum==i) printf("%d\n" ,i);
 }

  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
