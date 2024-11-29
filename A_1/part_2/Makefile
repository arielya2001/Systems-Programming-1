# Compile and link the final program
program: src/main.o src/armor.o src/character.o src/shiny.o
	gcc -Wall -Wextra -IInclude -o program src/main.o src/armor.o src/character.o src/shiny.o

# Rule to compile main.c
src/main.o: src/main.c Include/armor.h Include/character.h Include/shiny.h
	gcc -Wall -Wextra -IInclude -c src/main.c -o src/main.o

# Rule to compile armor.c
src/armor.o: src/armor.c Include/armor.h Include/shiny.h
	gcc -Wall -Wextra -IInclude -c src/armor.c -o src/armor.o

# Rule to compile character.c
src/character.o: src/character.c Include/character.h
	gcc -Wall -Wextra -IInclude -c src/character.c -o src/character.o

# Rule to compile shiny.c
src/shiny.o: src/shiny.c Include/shiny.h
	gcc -Wall -Wextra -IInclude -c src/shiny.c -o src/shiny.o

# Clean up all generated files
clean:
	rm -f program src/*.o

#first we create all of the object files(.o) lines 6-19
#then we link all of the .o files into exectuable file(lines 2-3)
#in the end, we clean all of the .o files.

