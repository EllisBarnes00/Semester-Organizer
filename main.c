#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "class.h"

int main() {
	printf("Year: ");
	char year[4];
	scanf("%s", &year);

	print_choices(); 
	char choice;
	while((choice = getchar()) != EOF) {
		switch(choice) {
			case '1': {
				Class *c = malloc(sizeof(c));
				c = get_class_info();
				create_directory(c, year);
				free(c);

				print_choices();
				break;
			}
			case '2': { 
				exit(0);
				break;
			}
		}
	}


	return 0;
}