#include <stdio.h>

int main() {
    int digit0, digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8, digit9;
    int index, rotation;
    
    
    scanf("%d %d %d %d %d %d %d %d %d %d", &digit0, &digit1, &digit2, &digit3, &digit4, &digit5, &digit6, &digit7, &digit8, &digit9);
    
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &index, &rotation);
        switch (index) {
            case 0: digit0 = (digit0 + rotation) % 10;
            break;
            case 1: digit1 = (digit1 + rotation) % 10;
            break;
            case 2: digit2 = (digit2 + rotation) % 10;
            break;
            case 3: digit3 = (digit3 + rotation) % 10; 
            break;
            case 4: digit4 = (digit4 + rotation) % 10; 
            break;
            case 5: digit5 = (digit5 + rotation) % 10; 
            break;
            case 6: digit6 = (digit6 + rotation) % 10; 
            break;
            case 7: digit7 = (digit7 + rotation) % 10; 
            break;
            case 8: digit8 = (digit8 + rotation) % 10; 
            break;
            case 9: digit9 = (digit9 + rotation) % 10; 
            break;
        }
    }
    
    printf("%d %d %d %d %d %d %d %d %d %d\n", digit0, digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8,                       digit9);
    
  return 0;
}
