#include <stdio.h>
#include <stdlib.h>


void multiply(int result[], int *resultSize, int multiplier) {
    int carry = 0;

    for (int i = 0; i < *resultSize; i++) {
        int product = result[i] * multiplier + carry;
        result[i] = product % 10;
        carry = product / 10;    
    }

    while (carry > 0) {
        result[*resultSize] = carry % 10;
        carry /= 10;
        (*resultSize)++;
    }
}

void factorial(int n) {
    int result[1000] = {0};
    result[0] = 1;
    int resultSize = 1;

    for (int i = 2; i <= n; i++) {
        multiply(result, &resultSize, i);
    }

    printf("%d! = ", n);

    
    for (int i = resultSize - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }

    printf("\n");
}

int main() {
    int n = 25; 
    factorial(n);
    return 0;
}

