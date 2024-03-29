#include "class.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h> // directory manipulation

Class* get_class_info() {
	// Allocate the memory for the class struct
	Class *class = malloc(sizeof(class));

	printf("Enter semester: ");
	scanf("%10s", &class->semester);
	
	printf("Enter class identifier/name: ");
	scanf("%10s", &class->class_name);

	return class;
}

void create_directory(Class *c, char *year) {
	// allocate memory for the whole strint './year/semester/class/'
	char *directory_tmp = malloc(sizeof(char) * 34);
	sprintf(directory_tmp, "%s/", year);

	// Make the directory for the year first
	if(mkdir(directory_tmp, S_IRUSR | S_IWUSR | S_IXUSR) != -1) {
		printf("%s created\n", directory_tmp);
	}

	// Make the directory for the semester next
	sprintf(directory_tmp, "%s/%s/", year, c->semester);
	if(mkdir(directory_tmp, S_IRUSR | S_IWUSR | S_IXUSR) != -1) {
		printf("%s created\n", directory_tmp);
	}

	// Make the Directory for the class itself
	sprintf(directory_tmp, "%s/%s/%s/", year, c->semester, c->class_name);
	if(mkdir(directory_tmp, S_IRUSR | S_IWUSR | S_IXUSR) != -1) {
		printf("%s created\n", directory_tmp);
	}

	// Now to make the subs for the assignments, documents, etc
	sprintf(directory_tmp, "%s/%s/%s/Assignments/", year, c->semester, c->class_name);
	if(mkdir(directory_tmp, S_IRUSR | S_IWUSR | S_IXUSR) != -1) {
		printf("%s created\n", directory_tmp);
	}

	sprintf(directory_tmp, "%s/%s/%s/Documents/", year, c->semester, c->class_name);
	if(mkdir(directory_tmp, S_IRUSR | S_IWUSR | S_IXUSR) != -1) {
		printf("%s created\n", directory_tmp);
	}

	sprintf(directory_tmp, "%s/%s/%s/Downloads/", year, c->semester, c->class_name);
	if(mkdir(directory_tmp, S_IRUSR | S_IWUSR | S_IXUSR) != -1) {
		printf("%s created\n", directory_tmp);
	}

	free(directory_tmp);	
}

void print_choices() {
	printf(
		"================\n"
		"1. Add Class.\n"
		"2. Change Year.\n"
		"2. Exit Program.\n"
		"================\n"
	);
	printf("> ");
}