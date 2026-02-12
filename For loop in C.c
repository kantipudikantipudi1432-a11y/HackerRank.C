/*For Loop in C*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    
  	char* numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = a; i <= b; i++) { // Loop from 'a' to 'b' (inclusive)
        if (i >= 1 && i <= 9) {
            // Print the English word (adjusting for 0-based array indexing)
            printf("%s\n", numbers[i - 1]);
        } else {
            // Print "even" or "odd" for numbers > 9
            if (i % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }

    return 0;
}

    return 0;
}

