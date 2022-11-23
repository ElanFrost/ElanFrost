#include <stdio.h>

int main() {
    int a = 1;
    int n;
    printf("Enter a number! Any number!\n");
    while(a!=0){
        if((scanf("%d", &a) == 1) || (getchar() == '\n')){
            if(a<0 && a%2!=0){
                n++;
            }
        }
        else{
            printf("Ok, maybe not that one. Enter a WHOLE number please.\n");
        }
    }
    printf("%d", n);
    return 0;
}
