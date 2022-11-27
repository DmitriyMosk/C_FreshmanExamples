#include <stdio.h>


int main() {

    int n = 17;
    int x;
    for(x = 0; x < n; x++){

        if(n % x == 0) {
            printf("%d is not prime\n", n);
            return 0;
        }
        
    }

    if (x == n) {
        printf("%d is prime\n", n);
    }
}