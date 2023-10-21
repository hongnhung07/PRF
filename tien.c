#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu


int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int pa=1, nam,muoi,haimuoi,nammuoi;
  
  

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(nam=0; nam<10; nam ++)
 for (muoi=0;muoi<10;muoi++)
  for (haimuoi=0;haimuoi<20;haimuoi++)
  for (nammuoi=0;nammuoi<10;nammuoi++)
  if(nam*5000+muoi*10000+haimuoi*20000+nammuoi*50000==70000)
  printf("\n%d lay %d to 5000 + %d to 10000 + %d to 20000 + %d to 50000", pa++,nam,muoi,haimuoi,nammuoi);
 


  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}
