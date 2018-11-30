#include <stdio.h>
#include <math.h>
#include <time.h>
char* hint1 = "Hint: Try setting a breakpoint right before you return! You can then examine $esp to see what the return address will be!";
char* hint2 = "Hint: Is gets() a secure function?";
char* hint3 = "Hint: Run objdump -d hintgen to see the disassembled version of the program! You can also view it in gdb";
char* hint4 = "Hint: If a segmentation fault happens when you are running the program in gdb, gdb will actually tell you where the segmentation fault occurs!";
char* hint5 = "Hint: If you're trying to do the math by hand, maybe try adding a few more characters. 32 bit programs like things in multiples of 4";
char* hint6 = "Hint: \x08 in echo will print the ascii value of 0x08 when you specify the -e flag";
char* hint7 = "Hint: As much as I don't like to admit it, python makes things much easier. For example, if you want to print 40 A's, you can run python -c \'print \"A\" * 40\' instead of typing 40 A's. You can also do string concatenation with the + sign as well :)";
void generateHint() {
	srand(time(0));
	int hintnum = rand();
	switch(hintnum % 7) {
		case 0:
			puts(hint1);
			break;
		case 1:
			puts(hint2);
			break;
		case 2:
			puts(hint3);
			break;
		case 3:
			puts(hint4);
			break;
		case 4:
			puts(hint5);
			break;
		case 5:
			puts(hint6);
			break;
		case 6:
			puts(hint7);
			break;
	}
}
void generateFinalHint() {
	puts("Not getting a shell? Remember you have to keep the pipeline open after calling gets()");
	puts("Something like (cat input.txt; cat -) | ./hintgen");
}
