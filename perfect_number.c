#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
int perfect(int n){
	int sum = 0;
	for (int i = 1; i <= sqrt(n); i++){
		if ( n % i == 0){
			sum += i;
			if ( i != n/i) 
			sum += n/i;
		}
	}
	if ( sum - n == n) return 1;
	else return 0;
}

int main() {
	int n;
	scanf ("%d", &n);
	if (  perfect(n) == 1)
	printf ("is perfect num");
	else printf (" is not perfect num");	
  return(0);
}
