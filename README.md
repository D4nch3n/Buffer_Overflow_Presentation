# Buffer_Overflow_Presentation

Here's the slides and challenges for the buffer overflow presentation!

The easy challenge requires the files hintgen.c and hints.c
The medium challenge requires the file params.c
the hard challenge requires the file hard.c

Note: Hard is meant to be completed without getting access to the source code
For the easy and medium challenges, you will need to compile it with stack canaries and PIE disabled, For the hard challenges, you can disable NX as well (though the other way of doing it won't require that)
ALSO: For the medium and hard challenges: To make your life much easier, make sure to compile it so that you get a 32-bit binary. For the hard challenge: In order to be able to exploit it the second way, you need to compile it so that the resulting executable is STATICALLY LINKED

Have fun!
