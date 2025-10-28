#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find smallest, second smallest, largest, and second largest
    int min1 = INT_MAX, min2 = INT_MAX;
    int max1 = INT_MIN, max2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        // Update smallest and second smallest
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }

        // Update largest and second largest
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }

    long long product = (long long)max2 * min1;
    long long sum = (long long)min2 + max1;

    if (product > sum)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
