Here is a quick summary of task files on 0x05. C - Pointers, arrays and strings:

0-reset_to_98.c - a function that takes a pointer to an int as parameter and updates the value it points to to 98.
Prototype: void reset_to_98(int *n);

1-swap.c - a function that swaps the values of two integers.
Prototype: void swap_int(int *a, int *b);

2-strlen.c - a function that returns the length of a string.
Prototype: int _strlen(char *s); 

3-puts.c - a function that prints a string, followed by a new line, to stdout.
Prototype: void _puts(char *str);

4-print_rev.c - a function that prints a string, in reverse, followed by a new line.
Prototype: void print_rev(char *s);

5-rev_string.c - a function that reverses a string.
Prototype: void rev_string(char *s);

6-puts2.c - a function that prints every other character of a string, starting with the first character, followed by a new line.
Prototype: void puts2(char *str);

7-puts_half.c - a function that prints half of a string, followed by a new line.
Prototype: void puts_half(char *str);
The function should print the second half of the string. If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

8-print_array.c - a function that prints n elements of an array of integers, followed by a new line.
Prototype: void print_array(int *a, int n);
where n is the number of elements of the array to be printed. Numbers must be separated by comma, followed by a space. The numbers should be displayed in the same order as they are stored in the array

9-strcpy.c - a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest. Return value: the pointer to dest
Prototype: char *_strcpy(char *dest, char *src);

