#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu

// viet lai cac so nguyen to <=n
#include <stdio.h>

int isPrime(int n) {
    int i, dem = 0;
    for (i = 2; i <= n; i++)
        if (n % i == 0)
            dem++;
    if (dem == 1)
        return 1;
    else
        return 0;
}

void Primeab(int a, int b) {
    if (a == b)
        return;
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    int i, nt1 = -1, nt2 = -1;
    for (i = 2; i <= b; i++) {
        if (isPrime(i) == 1) {
            nt1 = nt2;
            nt2 = i;
        }
    }
    if (nt1 >= 0)
        printf("%d, ", nt1);
    if (nt2 >= 0)
        printf("%d", nt2);
}

int main() {
    // system("cls"); // Commenting this out for portability (not supported on all systems)
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("\nOUTPUT:\n");
    Primeab(a, b);
    printf("\n");
    // system("pause"); // Commenting this out for portability (not supported on all systems)
    return 0;
}