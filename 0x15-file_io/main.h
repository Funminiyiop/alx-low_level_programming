#ifndef HEADER_H
#define HEADER_H

#include <sys/types.h> /* open */
#include <sys/stat.h> /* open */
#include <fcntl.h> /* open */
#include <unistd.h> /* close */
#include <stdio.h> /* dprintf */
#include <stdlib.h> /* malloc, free */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int __exit(int error, char *s, int fd);
int main(int argc, char *argv[]);

#endif
