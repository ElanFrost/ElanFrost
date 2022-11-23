#include <stdio.h>

int main() {
    int a, b, c;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    int mn = a;
    int mx = a;
    (b > mx) ? (mx = b) : (mn = b);
    (c > mx) ? (mx = c) : ((c<mn) ? (mn = c) : (mn = mn));
    printf("%d, %d", mn, mx);
    return 0;
}
