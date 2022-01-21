#include "class.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h> // directory manipulation

Class* get_class_info() {
	Class *class = malloc(sizeof(class));

	printf("Enter semester: ");
	scanf("%s", &class->semester);
	
	printf("Enter class identifier/name: ");
	scanf("%s", &class->class_name);

	return class;
}

void create_directory(Class *c, char *year) {
	// allocate memory for the whole strint './year/semester/class/'
	char *directory_tmp = malloc(sizeof(char) * 40);
	sprintf(directory_tmp, "./%s/%s/%s/", year, c->semester, c->class_name);
	//printf("test %s\n", directory_tmp);

	struct stat st = {0};
	if(stat(directory_tmp, &st) == -1) {
		mkdir(directory_tmp, 0700);
	} else {
		printf("Directory already exists.\n");
	}

	free(directory_tmp);	
}

void print_choices() {
	printf(
		"1.\tAdd class.\n"
		"2.\tExit\n"
	);
	printf("> ");
}