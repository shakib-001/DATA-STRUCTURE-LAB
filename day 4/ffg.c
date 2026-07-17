#include <stdio.h>

int main() {
    int N; 

   
    if (scanf("%d", &N) != 1) {
        return 1;
    }

   
    if (N < 1 || N > 21 || N % 2 == 0) {
        return 0;
    }

    
    const int W_BASE = 21;

    
    for (int i = 1; i <= 5; i++) {
        int stars = 2 * i - 1;
        int spaces = (W_BASE - stars) / 2; 

      
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }

       
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (int j = 0; j < W_BASE; j++) {
        printf("*");
    }
    printf("\n");

    const int H_TRUNK = 5;

    // S_TRUNK = (W_BASE - N) / 2
    int S_TRUNK = (W_BASE - N) / 2;

    for (int i = 0; i < H_TRUNK; i++) {
        for (int j = 0; j < S_TRUNK; j++) {
            printf(" ");
        }

        for (int j = 0; j < N; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
