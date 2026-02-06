#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {

    int n;

    scanf("%d", &n);

    int start = 1;   

    for (int i = n; i >= 1; i--) {

        int val = start;

        for (int j = 1; j <= i; j++) {

            printf("%d", val);

            val = 1 - val;   

        }

        printf("\n");

        start = 1 - start;   

    }

    return 0;

}
