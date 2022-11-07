#include <stdio.h>
#include <malloc.h> // <stdlib.h>

int main() {

	int n = 5; // 4 byte
	printf("%d %p\n", n, &n);

	int *ptr = NULL; // sizeof(int *) = sizeof(ptr) = 4 or 8 byte (x86_32 or x86_64)
	//*ptr = 3; // segmentation fault
	ptr = &n;
	printf("addr n = %p; *ptr addr = %p; ptr addr = %p\n", &n, ptr, &ptr);
	*ptr = 3;
	printf("n = %d *ptr = %d\n", n, *ptr);

	int arr[3] = {1, 2, 3}; // {int, int, int}
	arr[2] = 111;
	
	/*     ___________________________________________________
		   |	            							     |
		   |                                                 V
-----------|---------------|-------------------------------|---------------|--
  ..|  |   | p |   |   |   |   |   |   |   |   |   |   |   | a |   |   |   |..
-----------|---------------|-------------------------------|---------------|--
	     100 101 102 103 104							 112 113 114 115 116
			   
		int a = 5;
		int *p;
		p = &a;
		*p = 2;

		int* ----> [1, 2, 3]
	*/

	// &arr[0] == arr; arr[0] == *arr;
	printf("arr[2] = %d *(arr+2) = %d\n", arr[2], *(arr + 2));

	printf("Array:\n");
	for (int i = 0; i < 3; i++) {
		printf("%d %d\n", arr[i], *(arr + i));
	}


	int *dyn_arr;

	dyn_arr = (int *)malloc(sizeof(int)*4);
	//realloc
	dyn_arr[0] = 123;
	printf("%d\n", dyn_arr[0]);
	
	free(dyn_arr);
}
