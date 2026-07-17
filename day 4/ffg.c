#include <stdio.h>

int main() {
    int N; // ইনপুট N (গুঁড়ির প্রস্থ)

    // N এর মান ইনপুট নেওয়া
    if (scanf("%d", &N) != 1) {
        return 1;
    }

    // Constraint চেক (বিজোড় সংখ্যা এবং 1 <= N <= 21)
    if (N < 1 || N > 21 || N % 2 == 0) {
        return 0; // যদি প্রয়োজন হয় তবে ত্রুটি বার্তা দিয়ে এক্সিট করা যেতে পারে
    }

    // সর্বাধিক প্রস্থ স্থির: ২১ (নমুনা আউটপুট অনুযায়ী)
    const int W_BASE = 21;

    // --- গাছের পাতা (Foliage) প্রিন্ট করা (৬টি সারি) ---

    // প্রথম ৫টি সারি (১, ৩, ৫, ৭, ৯ স্টার)
    for (int i = 1; i <= 5; i++) {
        int stars = 2 * i - 1;
        int spaces = (W_BASE - stars) / 2; // কেন্দ্রে আনার জন্য স্পেস

        // স্পেস প্রিন্ট করা
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }

        // স্টার প্রিন্ট করা
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    // ৬ষ্ঠ সারি (স্থিরভাবে ২১টি স্টার, যা W_BASE এর সমান)
    for (int j = 0; j < W_BASE; j++) {
        printf("*");
    }
    printf("\n");


    // --- গাছের গুঁড়ি (Trunk) প্রিন্ট করা (৫টি সারি, প্রস্থ N) ---

    const int H_TRUNK = 5;

    // গুঁড়িকে কেন্দ্রে আনার জন্য বাম পাশে স্পেসের সংখ্যা
    // S_TRUNK = (W_BASE - N) / 2
    int S_TRUNK = (W_BASE - N) / 2;

    for (int i = 0; i < H_TRUNK; i++) {
        // স্পেস প্রিন্ট করা
        for (int j = 0; j < S_TRUNK; j++) {
            printf(" ");
        }

        // গুঁড়ির স্টার প্রিন্ট করা (N সংখ্যক)
        for (int j = 0; j < N; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
