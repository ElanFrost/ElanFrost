#include <stdio.h>
#include <math.h>

int line_up(int a){
    int b = a;
    int c = 0;
    while(b!=0){
        int elem = b%10;
        int next_elem = b/10%10;
        if(next_elem>elem){
            a = a-elem*pow(10, c)-next_elem*pow(10, c+1)+next_elem*pow(10, c)+elem*pow(10, c+1);
            b = a;
            c = 0;
            continue;
        }
        b = b/10;
        c++;
    }
    return a;
}

int main() {
    int a;
    printf("Input: ");
    scanf("%d", &a);
    a = line_up(a);
    printf("Output: %d", a);
    return 0;
}
