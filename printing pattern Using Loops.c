//Printing Pattern using Loops//

#include <stdio.h>

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int main() {
    int n;
    scanf("%d", &n);

    
    int size = 2 * n - 1;

    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int top = i;
            int bottom = size - 1 - i;
            int left = j;
            int right = size - 1 - j;

            int minimum_distance = min(min(top, bottom), min(left, right));

            printf("%d ", n - minimum_distance);
        }
        printf("\n");
    }

    return 0;
}
