#include <stdio.h>
#include <malloc.h>

// Пример структуры комплексного числа
struct complex {
    int re;
    int im;
};

// complex_t тоже самое что и struct complex
typedef struct complex complex_t;

// обьявление структуры и typedef сразу
typedef struct person {
    int age;
    char name[100];
} person_t;

// sizeof(struct padding) == 8
struct padding {
    char b;
    int c;
};

struct example {
    int a;
} variable;
// variable глобальная переменная

person_t *init() {
    person_t *tmp = malloc(sizeof(person_t));
    return tmp;
}

void deinit(person_t *tmp) {
    free(tmp);
}

int main() {

    // struct variable
    struct complex c;
    c.re = -5;
    c.im = 2;
    printf("%d + j*(%d)\n", c.re, c.im);

    // pointer to struct
    person_t *p = init();
    p->age = 2;
    deinit(p);

    // массив структур
    struct complex arr[5];
    arr[0].im = 5;
    arr[3].re = 5;
}