#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include "hints.c"
void SIG_SEGV(int sig) {
	puts("Are you trying to hack me? That's mean :( No hint for you!");
	fflush(stderr);
	exit(1);
}
int vuln() {
	char passwd[40];
	puts("Welcome to the hint generator! Please enter your password below:");
	gets(passwd);
	puts("Your password has been recieved...");
	return 0;
}
void win() {
	puts("You have been authorized! Have a shell!");
	system("/bin/sh");
	generateFinalHint();
	exit(0);
}
int main(int argc, char **argv) {
	setresuid(getegid(), getegid(), getegid());
	setresgid(getegid(), getegid(), getegid());
	setbuf(stdout, NULL);
	signal(SIGSEGV, SIG_SEGV);
	puts("**************************************");
	puts("*                                    *");
	puts("*        Hint Generator v1.3.37      *");
	puts("*                                    *");
	puts("**************************************");
	if(vuln()) {
		win();	
	}
	else {
		puts("Invalid password! Goodbye!");
		generateHint();
	}
}
	}
}
