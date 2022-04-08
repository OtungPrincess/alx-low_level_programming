#ifndef MAIN_H
#define MAIN_H

int *int_calloc(int nmemb, unsigned int size);
void mult(int *product, char *n1, char *n2, int len1, int len2);
int is_valid(char *num);
void err(int status);
int main(int argc, char **argv);
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
