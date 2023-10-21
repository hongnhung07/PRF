#include <stdio.h>
#include <stdlib.h>

void NhapMangR(double a[], int n) {
    int i;
    for (i = 0; i < n; i++)
        scanf("%lf", &a[i]);
}
int TimVTMax(double a[], int n) {
    double max = a[0];
    int i, vt = 0;
    for (i = 0; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
            vt = i;
        }
    }
    return vt;
}
int TimMin(double a[], int n) {
    double min = a[0];
    int i;
    for (i = 0; i < n; i++) {
        if (min > a[i])
            min = a[i];
    }
    return min;
}
int TimMinVT2(double a[], int n) {
    double min = TimMin(a, n);
    int i, count = 0, vt = 0;
    for (i = 0; i < n; i++) {
        if (a[i] == min) {
            count++;
            if (count == 2) {
                vt = i;
            }
        }
    }
    return vt;
}
int main() {
    system("cls");
    double d[100];
    int n;
    scanf("%d", &n);
    NhapMangR(d, n);
    printf("\nOUTPUT:\n");
    printf("%d %d", TimVTMax(d, n) + 1, TimMinVT2(d, n) + 1);
    printf("\n");
    system("pause");
    return 0;
}
