void rotate(int a[], unsigned size, int shift) {
    for (int i = 0; i < shift; i++) {
        int t1;
        int t2 = *(a + size - 1);
        for (int* p = a + size - 1; p > a; p--) {
            t1 = t2;
            t2 = *(p - 1);
            *(p - 1) = t1;
        }

        *(a + size - 1) = t2;
    }
}
