#include <stdio.h>

int sum(int a, int b) {

    return a + b;
}

void test1(int a, int *p) {
    a = 5;
    *p = 5;
}

void test2(int N, int *arr) { // *arr or arr[]
    arr[0] = 123;
}

void test3(int N, int arr[][3]) { // **arr - dynamic; arr[][size] - static
    arr[0][0] = 123;
}

void test4();

void main() {
    
    int a = 1;
    int b = 1;

    printf("my sum is %d\n", sum(a, b));


    // int *p = &b;
    test1(a, &b);
    printf("a = %d b = %d\n", a, b);

    const int N = 3;
    int arr_1d[N];
    test2(N, arr_1d);
    printf("test2 = %d\n", arr_1d[0]);


    int arr_2d[N][N];
    test3(N, arr_2d);
    printf("test3 = %d\n", arr_2d[0][0]);



    int (*fun_ptr)();
    fun_ptr = sum;

    printf("fun_ptr res = %d\n", fun_ptr(a, b));

}

void test4() {

    printf("This is %s\n", __FUNCTION__);
}