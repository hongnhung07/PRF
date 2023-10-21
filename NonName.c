#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu

//nhap 1 chuoi ten sinh vien, sau do chuan hoa ten
// 1. xoa dau cach thua(dau,cuoi,giua)
// 2. in hoa chu cai dau moi tu
void RemoveSHead(char s[]){
	int i=0;
	while(s[i]==' ')
	i++;
	strcpy(&s[0],&s[i]); //copy chuoi s tu o nho i ve o nho 0
}//xoa cac ky ty o cuoi xau
void RemoveSTail(char s[]){
	int i=strlen(s);
	while(s[i+1]==' ')
	i++;
	s[i]='\0';
}//xoa cac dau cach thua o giua
void RemoveSMid(char s[]){
	int i,k;
	for(i=0;i<strlen(s);i++)
	    if(s[i]==' '&& s[i+1]==' '){ //xoa = copy don len phia tren
	        for(k=i+1;k<strlen(s);k++)
	            s[k]=s[k+1];
	            i--;
		}
}
void toUpr(char s[]){
	int i,k;
	s[0]=toupper(s[0]);
	for(i=0;i<strlen(s);i++)
	    if(s[i]==' ' && s[i+1]!=' ') s[i+1]=toupper(s[i+1]);
}
int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
char s[50];gets(s);


  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
RemoveSHead(s);RemoveSTail(s);RemoveSMid(s);toUpr(s);
puts(s);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}