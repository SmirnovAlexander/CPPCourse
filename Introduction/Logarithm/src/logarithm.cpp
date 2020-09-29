int logarithm(int n) {

    int p = 1;
    int result = 2;
    
    if (n == 1) {
        return 0;
    }

    while (result * 2 <= n) {
        result *= 2;
        p += 1;
    }
    return p;
}
