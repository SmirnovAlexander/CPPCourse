char *resize(const char *str, unsigned size, unsigned new_size) {
    char *new_str = new char[new_size];

    if (new_size >= size) {
        for (unsigned i = 0; i < size; i++) {
            new_str[i] = str[i];
        }
    } else if (new_size < size) {
        for (unsigned i = 0; i < new_size; i++) {
            new_str[i] = str[i];
        }
    }

    delete[] str;

    return new_str;
}
