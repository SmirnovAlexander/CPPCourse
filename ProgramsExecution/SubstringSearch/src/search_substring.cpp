int search_substring(const char *text, const char *pattern) {

    /* If pattern is an empty string
       it is a substring from the start */
    if (*(pattern) == '\0') {
        return 0;
    }

    int i = 0;
    bool is_found = false;

    /* Iterating throw text. */
    while (*(text + i) != '\0') {

        /* Iterating throw pattern
           while its symbols matches
           text symbols. */
        int j = 0;
        while ((*(pattern + j) != '\0') & (*(text + i + j) == *(pattern + j))) {
            /* cout << *(pattern + j) << "\n"; */
            j++;
        }

        /* If after iterating throw a pattern
           we found that we iterated
           throw all of pattern, we
           found substring; exit. */
        if ((*(pattern + j) == '\0') & (j > 0)) {
            is_found = true;
            break;
        }
        i++;
    }

    return is_found ? i : -1;
}
