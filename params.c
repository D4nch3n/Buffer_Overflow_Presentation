#include <stdio.h>
#include <stdlib.h>

//Challenge inspired by picoCTF
void getfood(unsigned long arg1, unsigned long arg2) {
	puts("Alright, drinks are set! Now, what would you like on the menu?");
	if(arg1 == 0xdeadbeef && arg2 == 0xdeadf154)
	{
		puts("Your order is ready. Enjoy!");
		system("/bin/sh");
		exit(0);
	}
	else {
		printf("We're sorry, %x and %x is not on the menu today! Better luck next time!\n", arg1, arg2);
		exit(0);
	}
}
void vuln() {
	long item = 0xbaaaaaad;
	char buffer[40];
	gets(buffer);
	if(item != 0x08coffee)
	{
		puts("Seems like you can't. Goodbye!");
		exit(0);
	]
}
int main() {
	setresuid(getegid(), getegid(), getegid());
	setresgid(getegid(), getegid(), getegid());
	setbuf(stdout, NULL);
	puts("Welcome to our newly opened resteraunt! Think you can order from our super secret menu?!");
	vuln();
	puts("Seems like you can't. Goodbye!");
}
