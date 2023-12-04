#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int bputchar(char c);
int _printf(const char *format, ...);
int putts(char *d);
int _put(int n);

#endif
