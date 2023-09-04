#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: filename.
 * text_content: content written in a file
 *
 * Return: 1 if success, -1 if it fails.
 */ 


int create_file(const char *filename, char *text_content) 
{
	int fd;
	int new_letters;
	int rwr;

        if (!filename) 
            return (-1);

        fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
        if (fd == -1)
            return -1; 

        if (!text_content)
	    text_content = "";

        for(new_letters = 0; text_content[new_letters]; new_letters++);

        rwr = write(fd, text_content, new_letters);

        if (rwr == -1)
	    return -1;
        

        close(fd);

        return 1; 
}
