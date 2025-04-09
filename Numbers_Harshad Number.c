#include <stdio.h>

int main() {
    int n, sum = 0, digit, temp;
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

  
    if (n % sum == 0)
        printf("%d is a harshad number\n", n);
    else
        printf("%d is not a harshad number\n", n);

    return 0;
}
