#include <stdio.h>
int main() {
    int mod = 1000000007;
    int  n;
    int r = 1;

    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        r=(r*2)%mod;
    }

    printf("%d\n", r);
    return 0;
}









/*#include <stdio.h>
int main() {
    int  n;
    long long r = 1;

    scanf("%d", &n);
    r = pow(2, n);

    printf("%lld", r);
    return 0;
}
*/
