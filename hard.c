#include <stdio.h>
#include <stdlib.h>
void vuln() {
	char buffer[80];
	puts("No source code?! How mean! Don't worry, I believe in you though!!");
	puts("Anyways, you're going to want to use some shellcode for this one!");
	printf("Also, not like this is terribly important, but here's a random address: 0x%x. Again, not like you need it or anything....\n", &buffer);
	puts("Finally, there may be more than one way to solve this! Surely, that's compensation for forgetting the source code, right?!");
	puts("Good luck! You got this!! :)");
	read(0, buffer, 300);
}
int main() {
	setresuid(getegid(), getegid(), getegid());
	setresgid(getegid(), getegid(), getegid());
	setbuf(stdout, NULL);
	vuln();
	puts("Sorry :(");
}
