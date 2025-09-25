#include <stdio.h>
int main() {
    int count = 0;
    long int a, b, c, d;
    long int n;
    printf("First 20 Ramanujan numbers:\n");
    for (n = 1; count < 20; n++) {
        int ways = 0;
        for (a = 1; a * a * a < n; a++) {
            for (b = a; a * a * a + b * b * b <= n; b++) {
                if (a * a * a + b * b * b == n) {
                    ways++;
                }
            }
        }
        if (ways >= 2) {
            printf("%ld\n", n);
            count++;
        }
    }
    return 0;
}
