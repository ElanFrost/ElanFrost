#include <stdio.h>
#include <string.h>

int main() {
    int a;
    char s[10];
    printf("Input: ");
    scanf("%d", &a);
    (a%2 == 0) ? strcpy(s, "lyginis") : strcpy(s, "nelyginis");
    printf("%d yra %s skaicius!\n", a, s);
    return 0;
}
