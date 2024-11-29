# Compile the shared library
libadvmath.so: advmath.o
	gcc -shared -o libadvmath.so advmath.o -lm
#gcc -shared creats dynamic library. -lm links the "math library" needed for functions like sqrt.

# Compile advmath.c into position-independent code
advmath.o: advmath.c advmath.h
	gcc -c -fPIC advmath.c -o advmath.o 

#fpic is used to compile .o files into dynamic libraries ^^

# Compile and link the main program
program: main.c libadvmath.so
	gcc main.c -L. -ladvmath -o program
#can also be written like this: gcc main.c ./libadvmath.so -o program

# Run the program
run: program
	LD_LIBRARY_PATH=. ./program
#adding the current directory(using .) to a variable so the compiler will be able to find the library.
#YOU CANNOT RENAME IT(LD_LIBRARY_PATH)

# Clean up generated files
clean:
	rm -f advmath.o libadvmath.so program
