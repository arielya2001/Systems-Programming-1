# Rule to build the final executable
program: main.o mathlib.o libmathlib.a
	gcc -Wall -Wextra -o program main.o mathlib.o -L. -lmathlib 

# Rule to create the static library
libmathlib.a: mathlib.o
	ar rcs libmathlib.a mathlib.o

# Rule to compile main.c into main.o
main.o: main.c
	gcc -Wall -Wextra -c main.c -o main.o

# Rule to compile mathlib.c into mathlib.o
mathlib.o: mathlib.c
	gcc -Wall -Wextra -c mathlib.c -o mathlib.o

# Clean up all generated files
clean:
	rm -f program main.o mathlib.o libmathlib.a

# Run the program
run: program
	./program
