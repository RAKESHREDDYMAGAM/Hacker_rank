#include <stdio.h>

#define MAX 100001 // Assuming numbers are in range [1, 100000]

int main() {
    int n;
    scanf("%d", &n);
    int a[n], freq[MAX] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++; // Counting occurrences
    }

    int maxFreq = 0, result;

    for (int i = 0; i < n; i++) {
        if (freq[a[i]] > maxFreq) {
            maxFreq = freq[a[i]];
            result = a[i];
        }
    }

    printf("%d\n", result);
    return 0;
}
