#include <stdio.h>

void Fibonacci(int n) {
    int t1 = 0, t2 = 1, t3;

    printf("Fibonacci series: ");
    printf("%d %d", t1, t2);
    for (int i = 3; i <= n; i++) {
        t3 = t1 + t2;
        printf(" %d", t3);
        t1 = t2;
        t2 = t3;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    Fibonacci(n);

    return 0;
}
