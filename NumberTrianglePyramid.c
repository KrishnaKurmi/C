/*
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/
#include <stdio.h>

int main() {
    int i, j, space;
    for(i = 1; i <= 5; i++) {
        for(space = 1; space <= 5 - i; space++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
