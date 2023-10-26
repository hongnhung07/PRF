#include<stdio.h>

void NhapMang(double a[], int n) {
    int i;
    for(i=0;i<n;i++) {
        scanf("%lf", &a[i]);
    }
}

void HienMang(double a[], int n) {
    int i;
    for(i=0;i<n;i++) {
        printf("%lf", a[i]);
    }
}

void CheckMax(double a[], int n){
    int i, max = a[0], index;
    for(i=1;i<n;i++) {
        if(a[i]> max) {
            max = a[i];
            index = i+1;
        }
    }
    printf(" %d", index);
}
void Adventage(double a[], int n) {
    int i; double sum = 0, aventage;
    for(i=0;i<n;i++) {
        sum += a[i];
    }
    aventage = sum/n;

    printf("%.2lf", aventage);
}

int main() {
    int n;
    double a[100];
    scanf("%d", &n);
    NhapMang(a,n);
    Adventage(a,n);
    CheckMax(a,n);
    return 0;
}