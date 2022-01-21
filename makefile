CC := gcc
OBJS := main.c class.c
COMPILER_FLAGS := -Wall -Wextra -pedantic -std=c11
LINKER_FLAGS :=
OBJ_NAME := SemesterOrganizer

all: $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

clean: $(OBJ_NAME)
	rm -f $(OBJ_NAME)