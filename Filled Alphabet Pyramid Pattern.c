#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int row = 1; row <= n; row++) {

        
        for (int space = 1; space <= n - row; space++) {
            printf("  ");
        }

        
        char ch = 'A';
        for (int col = 1; col <= 2 * row - 1; col++) {
            printf("%c ", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}
