#include <stdio.h>

void int_validation(int* a, int min, int max){
    while(scanf("%d", a) != 1 || getchar() != '\n' || *a < min || *a > max){
        fflush(stdin);
        printf("ERROR!\n");
        printf("Apimtis: (%d, %d)!\n", min, max);
        printf("Iveskite tinkama reiksme: ");
    }
}
//16	24	20	15	7	23	3	11
int main() {
    int n;

    printf("Iveskite sveika skaiciu N: ");
    int_validation(&n, 1, 100000);

    int ai[n], bi[n];
    int g;
    printf("\nIveskite (%d) poras sveiku skaiciu: \n", n);
    for(int i = 0; i < n; i++){
        printf("(%d) \n", i+1);
        printf("a: ");
        int_validation(&ai[i], -1000000000, 1000000000);
        printf("b: ");
        int_validation(&bi[i], -1000000000, 1000000000);
    }

    printf("\nIveskite sveika skaiciu G: ");
    int_validation(&g, -1000000000, 1000000000);

    printf("\n------------\n*Rezultatai*\n------------\n");
    printf("Tinkamos poros:\n");
    int c = 0;
    for(int i = 0; i < n; i++){
        if(ai[i] > bi[i]){
            if(g <= ai[i] && g >= bi[i]){
                printf("Pora (%d): %d, %d\n", i+1, ai[i], bi[i]);
                ++c;
            }
        }
        else{
            if(g >= ai[i] && g <= bi[i]){
                printf("Pora (%d): %d, %d\n", i+1, ai[i], bi[i]);
                ++c;
            }
        }
    }
    printf("Is viso tinkamu poru: %d\n", c);

    return 0;
}
