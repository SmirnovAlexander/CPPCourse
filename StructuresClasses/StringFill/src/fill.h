#ifndef FILL_H
#define FILL_H

#include <cstddef>  // size_t

struct String {

	String(size_t n, char c);

	~String();

	size_t size;
	char *str;
};

#endif  // FILL_H
