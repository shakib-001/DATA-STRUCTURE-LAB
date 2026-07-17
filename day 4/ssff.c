#include<stdio.h>
#include<string.h> // strlen() এর জন্য

int main(){
    char a[10001];
    scanf("%s",a); // &a এর পরিবর্তে শুধু a
    int length = strlen(a);

    for(int i = length - 1; i >= 0; i--){ // i>=0 পর্যন্ত
        printf("%c", a[i]); // %s এর পরিবর্তে %c
    }
    printf("\n"); // নতুন লাইন
    return 0;
}
