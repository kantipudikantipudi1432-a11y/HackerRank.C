/*Playing With Characters*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char str[50];
    char sen[100];
    scanf("%c\n", &ch);
    scanf("%s\n", &str);
    scanf("%[^\n]s", &sen );
    printf("%c", ch);
    printf("\n%s", str);
    printf("\n%s", sen);
    return 0;
}
