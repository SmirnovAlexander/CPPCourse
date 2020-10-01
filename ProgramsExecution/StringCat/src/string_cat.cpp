void string_cat(char *to, const char *from) {
    unsigned len1 = 0;
    while (*(to + len1) != '\0') {
        len1++;
    }

    unsigned len2 = 0;
    while (*(from + len2) != '\0') {
        len2++;
    }

    for (unsigned i = 0; i <= len2; i++) {
        *(to + len1 + i) = *(from + i);
    }
}
