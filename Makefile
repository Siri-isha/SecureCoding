# Define the compiler
CC = gcc

# Define the output executable name
OUTPUT = main

# Find all .c files in the current directory
SRC = $(wildcard *.c)

# Define the object files
OBJ = $(SRC:.c=.o)

# Define the build target
all: $(OUTPUT)

# Define how to build the executable
$(OUTPUT): $(OBJ)
    $(CC) -o $@ $^

# Define how to build the object files
%.o: %.c
    $(CC) -c $< -o $@

# Clean up build files
clean:
    rm -f $(OBJ) $(OUTPUT)
