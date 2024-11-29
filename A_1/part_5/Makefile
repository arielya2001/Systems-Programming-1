# Create the static library
libbasic.a: mathlib.o
	ar rcs libbasic.a mathlib.o

mathlib.o: mathlib.c mathlib.h
	gcc -c mathlib.c -o mathlib.o

# Create the dynamic library
libadvmath.so: advmath.o
	gcc -shared -o libadvmath.so advmath.o -lm

advmath.o: advmath.c advmath.h
	gcc -c -fPIC advmath.c -o advmath.o

# Compile and link the main program
program: main.c libbasic.a libadvmath.so
	gcc main.c -L. -lbasic -L. -ladvmath -o program

# Run the program
run: program
	LD_LIBRARY_PATH=. ./program

# Clean up
clean:
	rm -f *.o libbasic.a libadvmath.so program
