#ifndef APPEND_H
#define APPEND_H

#include <cstddef>  // size_t

struct String {

	String(const char *str = "");
	String(size_t n, char c);
	~String();

	void append(String &other);

	size_t size;
	char *str;
};

#endif  // APPEND_H
