#include<stdio.h>

void swap(int *p, int *q) 
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main() {
    int a = 10, b = 20;
    printf("%d %d ", a, b);
    swap(&a, &b);
    printf(" %d %d", a, b);

    return 0;
}
