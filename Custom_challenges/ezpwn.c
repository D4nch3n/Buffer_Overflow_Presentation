#include <stdio.h>
#include <stdlib.h>

void win() {
	puts("Nice Job! Submit your exploit/script to me at dc3pe@virginia.edu, and I will give you the flag!");
	exit(0);
}

int main() {
	char buf[32];
	setbuf(stdout, NULL);
	unsigned int val = 0xdeadbeef;
	puts("Enter your password: ");
	gets(buf);
	printf("%x\n", val);
	if(val == 0x13372446) {
		win();
	}
	else {
		puts("NOPE!");
	}
}
