#include <stdio.h>

int main() {
    int a, b, c;
    printf("Print fc when f0 = a, f1 = b and fc = f(c-1)+f(c-2)\nEnter whole non-negative numbers a, b and c:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int f1 = a;
    if(c>0){
        f1 = b;
    }
    if(c>1){
        f1 = a+b;
        int f2 = f1+b;
        for(int i = 2; i < c; ++i){
            int f = f2;
            f2 = f1+f2;
            f1 = f;
        }
    }
    printf("fc = %d", f1);
    return 0;
}
