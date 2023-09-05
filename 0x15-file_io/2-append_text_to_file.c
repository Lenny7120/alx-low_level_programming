#include "main.h"
/**
 * append_text_to_file - appends text at the end of file
 * @filename: filename
 * @text_content: added content
 *
 * Return: 1 if the file exist, -1 if file doesnot exist
 */





int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int new_letters;
	int rwr;

    if (filename == NULL) 
        return -1;

    fd = open(filename, O_WRONLY | O_APPEND); 
    if (fd == -1)
        return -1;
    if (text_content)
    {
	    for (new_letters = 0; text_content[new_letters]; new_letters++);
	    rwr = write(fd, text_content, new_letters);

	    if(rwr == -1)
		    return -1;
    }

    close(fd);
    return 1;
}
