#include <stdio.h>

void max_bitwise(int n, int k) {
    int max_a = 0, max_o = 0, max_x = 0; 

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int a = i & j;
            int o = i | j;
            int x = i ^ j;

            if (a > max_a && a < k) {
                max_a = a;
            }
            if (o > max_o && o < k) {
                max_o = o;
            }
            if (x > max_x && x < k) {
                max_x = x;
            }
        }
    }

    printf("%d\n%d\n%d", max_a, max_o, max_x);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    max_bitwise(n, k);

    return 0;
}