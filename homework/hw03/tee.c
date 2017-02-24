#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){
	char buffer[128]; // Buffer for the input
	int append = 0; // Flag for appending
	int num_files; // Number of files
	int pos = 0; // Position based on flag

	char ch; // Character for getopt
	while((ch = getopt(argc, argv, "a")) != EOF){
		switch(ch){
			case 'a':
				append = 1;
				break;
			default:
				break;
		}
		argc -= optind;
		argv += optind;
	}

	/*
		If append, set the num_files to argc
		Otherwise, set it to argc-1 and set
		the position to 1; this is to ignore
		the ./tee.o arg
	*/
	if(append){
		num_files = argc;
	} else{
		num_files = argc-1;
		pos = 1;
	}

	FILE *files[num_files]; // Declaring files

	int i;
	for(i=0; i<num_files; i++){
		files[i] = fopen(argv[i+pos], append ? "a":"w"); // Open the files
	}

	while(scanf("%127[^\n]\n", buffer) == 1){
		printf("%s\n", buffer) // Print to stdout
		for(i=0; i<num_files;i++){
			fprintf(files[i], "%s\n", buffer); // Print the buffer to the files
		}
	}

	for(i=0; i<num_files; i++){
		fclose(files[i]); // Close the files
	}

	return 0;
}