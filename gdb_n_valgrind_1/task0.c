#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (strcmp("", argv[1])) {
        printf("You figured it out!\n");
    } else {
        printf("Sorry :(\n");
    }
}