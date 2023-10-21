#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu


int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int m,y;
scanf("%d%d", &m,&y);
switch(m){
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		printf("thang %d nam %d co 31 ngay",m,y); break; 
	case 4:case 6:case 9:case 11:
		printf("thang %d nam %d co 30 ngay",m,y); break;
	case 2:
		if(y%4==0 && y%100!=0 || y%400==0) printf("thang %d nam %d co 29 ngay",m,y);
		else printf("thang %d nam %d co 28 ngay",m,y);
		break;
		default:printf("thang da nhap khong hop le"); break;
	}

  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
