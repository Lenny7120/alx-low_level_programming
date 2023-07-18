#include <stdio.h>
/**
 * main - A program that prints _putchar
 * Return: 0 (success)
 */

int _putchar(char c);
void printWord(const char* word);
void printNewLine();

int main(void)
{
	printWord("_putchar");
	printNewLine();

	return 0;

}

int _putchar(char c)
{
	write(1, &c, 1);

	return 0;
}

void printWord(const char* word)
{
	for (int i = 0; word [i] != '\0'; i++)
{
	_putchar(word[i]);
}
}

void printNewLine()
{
	_putchar('\n');
}

    
