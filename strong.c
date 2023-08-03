#include <stdio.h>

int main() {
    int num, originalNum, digit, sum = 0, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        digit = num % 10;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        fact = 1;
        num /= 10;
    }

    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}
