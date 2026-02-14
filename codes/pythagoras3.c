#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <limit number>\n", argv[0]);
        return 1;
    }

    long long ln = atoll(argv[1]);
    long long x, y, z_sq;
    double z;

    printf("x y z : x^2 + y^2 = z^2\n");

    for (x = 1; x <= ln; x++) {
        for (y = x; y <= ln; y++) {
            z_sq = x * x + y * y;
            z = sqrt((double)z_sq);

            // zが整数かつ上限以下かチェック
            if (z == (long long)z && z <= ln) {
                printf("%lld %lld %lld\n", x, y, (long long)z);
            }
        }
    }
    return 0;
}
