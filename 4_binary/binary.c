#include <stdio.h>
// int a = 0x5; - hex
// int a = 0b101; - binary
// int a = 05; - octal
// int a = 5; - decimal
int main() {
	int a = 17; // 00000000 00000000 00000000 00010001
	char ch; // sizeof(char) = 1 byte == 8 bit
	ch = 5; // 0000 0101
	// & - AND
	// | - OR
	// ^ - XOR
	// ~ - inversion
	// >>, << - shift
	ch = ch << 5; // 1010 0000 = -96 (signed); 160 (if unsigned)

}
