#ifndef CLASS_H
#define CLASS_H

typedef struct Class {
	char semester[10];
	char class_name[10];
} Class;

// Get the Year, Semester, and Class Code
Class* get_class_info();

// Create directory path from the string
void create_directory(Class *c, char* year);

// This prints the choices available
void print_choices();


#endif // CLASS_H