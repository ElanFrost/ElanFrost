#include <stdio.h>
#include <math.h>

int main() {
    double x, y, z;
    printf("--------------------------------------\n");
    printf("Equations:\n");
    printf("x + 4*y + z^3 = ?");
    printf("\n(x + sqrt(y)) * (z^4 - |z| + 46.3) = ?\n");
    printf("--------------------------------------\n");
    printf("x: ");
    scanf("%lf", &x);
    printf("y: ");
    scanf("%lf", &y);
    printf("z: ");
    scanf("%lf", &z);
    printf("--------------------------------------\n");
    printf("\n%f + 4*%f + %f^3 = %f", x, y, z, x+4*y+pow(z,3));
    printf("\n(%f + sqrt(%f)) * (%f^4 - |%f| + 46.3) = %f\n", x, y, z, z, (x+sqrt(y))*(pow(z, 4)-abs(z)+46.3));

   return 0;
}
