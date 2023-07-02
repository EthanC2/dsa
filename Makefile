CC=gcc
CFLAGS=-Wall -Wextra -pedantic -Werror
#LIB_CFLAGS=-rdynamic -shared -fPIC
DBG_CFLAGS=-v -g -ggdb -Og

dsa:
	ar rcs bin/static/libdsa.a bin/static/add.o