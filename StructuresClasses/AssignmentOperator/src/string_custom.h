#ifndef STRING_CUSTOM
#define STRING_CUSTOM

#include <cstddef> // size_t

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	String(const String &other);
	~String();

	String &operator=(const String &other);

	void append(const String &other);

	size_t size;
	char *str;
};

#endif  // STRING_CUSTOM
