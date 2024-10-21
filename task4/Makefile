# Makefile for task4

# Variables
CC = gcc
CFLAGS = -c
SRC = main.c inc1/math_utils.c inc2/string_utils.c
USE_WALL = 1  # Set to 1 to enable -Wall, 0 to disable

# Add -Wall to CFLAGS if USE_WALL is set to 1
ifeq ($(USE_WALL), 1)
    CFLAGS += -Wall
endif

# Default target when no target is provided
.DEFAULT_GOAL := help

# All target (compile and run)
all: compile run

# Compile target
compile:
	@mkdir -p build
	@echo "Compiling..."
	$(CC) $(CFLAGS) main.c -o build/main.o
	$(CC) $(CFLAGS) inc1/math_utils.c -o build/math_utils.o
	$(CC) $(CFLAGS) inc2/string_utils.c -o build/string_utils.o
	$(CC) build/main.o build/math_utils.o build/string_utils.o -o build/app

# Run target
run:
	@echo "Running..."
	@./build/app

# Clean target
clean:
	rm -rf build

# Help target
help:
	@echo "Usage: make [target]"
	@echo "Targets:"
	@echo "  all     - Compile and run the project"
	@echo "  compile - Compile the project"
	@echo "  run     - Run the compiled executable"
	@echo "  clean   - Remove build files"
	@echo "  help    - Display this help message"
