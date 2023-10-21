#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
// nhap n nguyen 1,2,...n
//tinh tong cac so le <=n
//................chan <=n
//..................%5 <=n

int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n,sum=0,i,k=0,h=0;
scanf("%d", &n);
for(i=0;i<=n; i++){
	if (i%2!=0){
		sum+=i;	}
	else k+=i;
	if (i%3==0) h+=i;
}
		printf("tong ca so le = %d\n", sum);	
		printf("tong cac so chan = %d\n", k);
		printf("tong ca so chia het cho 3= %d\n", h);
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
