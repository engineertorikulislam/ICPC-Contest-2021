#include <stdio.h>
int main() {
    int  n;
    long long r = 1;

    scanf("%d", &n);

    while (n != 0) {
        r = 2*r;
        n--;
    }
    printf("%lld", r);
    return 0;
}
