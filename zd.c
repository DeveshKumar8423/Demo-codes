#include <stdio.h>

int main()
{

	char old_name[] = "fileold.txt";

	// Any string
	char new_name[] = "newfile.txt";
	int value;

	// File name is changed here
	value = rename(old_name, new_name);

	// Print the result
	if (!value) {
		printf("%s", "File name changed successfully");
	}
	else {
		perror("Error");
	}
	return 0;
}
