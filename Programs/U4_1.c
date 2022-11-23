#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Calculate x when:\nax^2+bx+c=0\nEnter whole numbers a, b and c:\n");

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    float d = pow(b, 2)-4*a*c;
    if(d<0){
        printf("No. of solutions: 0\n");
    }
    else if(d==0){
        printf("No. of solutions: 1\n");
        printf("x = %f\n", (-(float)b)/(2*(float)a));
    }
    else{
        printf("No. of solutions: 2\n");
        printf("x1 = %f\n", (-(float)b-sqrt(d))/(2*(float)a));
        printf("x2 = %f\n", (-(float)b+sqrt(d))/(2*(float)a));
    }
    return 0;
}
