#include <stdio.h>



int main() {
    int a, b, c;
    printf("Number: ");
    scanf("%d", &a);
    printf("Input Type:\n0.Binary\n1.Decimal\n2.Hexadecimal\n");
    scanf("%d", &b);
    printf("Convert To:\n0.Binary\n1.Decimal\n2.Hexadecimal\n");
    scanf("%d", &c);
    printf("Output: %d", a);
    return 0;
}
