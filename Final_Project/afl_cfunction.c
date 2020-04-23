#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "cfunction.h"

int main() {

    int n1, n2, i, flag;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers between %d and %d are: ", n1, n2);
    for (i = n1 + 1; i < n2; ++i) {
        // flag will be equal to 1 if i is prime
        flag = cfunction(i);
        if (flag == '1') //bug '1' is supposed to be 1
            printf("%d ", i);
    }
    return 0;
}
