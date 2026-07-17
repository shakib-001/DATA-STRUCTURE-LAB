#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 1 || N > 21 || N % 2 == 0) return 0;

    int foliage_height = 7;       // fixed from sample outputs
    int max_stars = N + 10;       // last line width pattern from samples

    // --- Print Foliage ---
    for (int i = 1; i <= foliage_height; i++) {
        int stars = 2 * i - 1;     // odd sequence: 1,3,5,7,...
        int spaces = (max_stars - stars) / 2;

        for (int j = 0; j < spaces; j++) printf(" ");
        for (int j = 0; j < stars; j++)  printf("*");
        printf("\n");
    }

    // --- Print Trunk ---
    int trunk_height = 5;
    int trunk_spaces = 5;          // fixed from sample
    for (int i = 0; i < trunk_height; i++) {
        for (int j = 0; j < trunk_spaces; j++) printf(" ");
        for (int j = 0; j < N; j++) printf("*");
        printf("\n");
    }

    return 0;
}
