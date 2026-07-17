#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 1 || N > 21 || N % 2 == 0) {
        return 0;
    }

    /* ---- Valid Case: Print Tree ---- */
    else {

        int H = (N + 11) / 2;  
        int star = 1;
        int space = H - 1;

        /* ---- Print Foliage ---- */
        for (int i = 1; i <= H; i++) {

            for (int k = 1; k <= space; k++) {
                printf(" ");
            }

            for (int j = 1; j <= star; j++) {
                printf("*");
            }

            printf("\n");
            star += 2;
            space--;
        }

        /* ---- Print Trunk ---- */
        int trunkHeight = 5;
        int trunkSpace = 5;

        for (int i = 0; i < trunkHeight; i++) {

            for (int k = 0; k < trunkSpace; k++) {
                printf(" ");
            }

            for (int j = 0; j < N; j++) {
                printf("*");
            }

            printf("\n");
        }
    }

    return 0;
}
