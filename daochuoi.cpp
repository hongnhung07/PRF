#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  char str[100],t;
  scanf("%s", &str);
  int len=strlen(str);
  int i,j;
  for (i=0, j=len-1; i<j; i++, j--){
  	t=str[i];
  	str[i]=str[j];
  	str[j]=t;
  }
  printf("%s\n",str);
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
