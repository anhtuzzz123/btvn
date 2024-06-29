#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct test {
    char mon[20];
    char ma[20];
    char ht[20];
};

typedef struct test test;

void nhap(test *x) {
    getchar();
    printf("Nhap ten mon: ");
    gets(x->mon);

    printf("Ma mon: ");
    gets(x->ma);

    printf("Hinh Thuc: ");
    gets(x->ht);
    return x;
}

void in(test x) {
    printf("%s %s %s\n", x.mon, x.ma, x.ht);
}

int comp(const void *a, const void *b) {
    test *x = (test*)a;
    test *y = (test*)b;
    return strcmp(x->ma, y->ma);
}

int main() {
    int n;
    printf("So Luong Mon La : ");
    scanf("%d",&n);
   // getchar();

    test a[n];
    for(int i = 0; i < n; i++)
     {
        nhap(&a[i]);
    }
    qsort(a, n, sizeof(test), comp);
    printf("Ket qua sau Khi Sx : \n");
    for(int i = 0; i < n; i++) {
        in(a[i]);
    }
}
