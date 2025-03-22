#include <stdio.h>

// Function to rotate the array
void rotateArray(int arr[], int n, int k) {
    
  if(k>=n){
        k=k%n;
    }
    for(int j=1;j<=k;j++){
        int first=arr[0];
        for(int i=0;i<=n-2;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=first;
        
    }
    
}



int main() {
    int n, k;
    // Reading input
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    // Call the function to rotate the array
    rotateArray(arr, n, k);
    
    // Print the rotated array
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}
