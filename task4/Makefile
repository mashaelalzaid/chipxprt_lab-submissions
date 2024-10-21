CC=gcc
CFLAGS=-g

# Directories
BUILD_DIR = build
INC1 = inc1
INC2 = inc2

SRC = main.c $(INC1)/math_utils.c $(INC2)/string_utils.c
HEADERS= $(INC1)/math_utils.h $(INC2)/string_utils.h

output: $(BUILD_DIR)/main.o $(BUILD_DIR)/math_utils.o $(BUILD_DIR)/string_utils.o
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/output


.DEFAULT_GOAL := help

# Compile main.c
$(BUILD_DIR)/main.o: main.c $(HEADERS) | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c main.c -o $@

# Compile math_utils.c
$(BUILD_DIR)/math_utils.o: $(INC1)/math_utils.c $(INC1)/math_utils.h | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $(INC1)/math_utils.c -o $@

# Compile string_utils.c
$(BUILD_DIR)/string_utils.o: $(INC2)/string_utils.c $(INC2)/string_utils.h | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $(INC2)/string_utils.c -o $@

USE_WALL ?= 1
ifeq ($(USE_WALL), 1)
	CFLAGS += -Wall
endif

$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

help:
	@echo "consult instructor:)"

#wanted to add this extra for simplicity
clean_o_files:
	rm $(BUILD_DIR)/*.o
	@echo "object files cleaned"	
clean:
	@echo "Cleaning up..."
	@rm -rf $(BUILD_DIR)
	@echo "Clean complete."
