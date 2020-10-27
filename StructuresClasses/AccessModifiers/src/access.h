#ifndef ACEESS_H
#define ACEESS_H

struct Cls {
    Cls(char c, double d, int i);

    char get_c();
    double get_d();
    int get_i();

   private:
    char c;
    double d;
    int i;
};

struct Hacker {
    char c;
    double d;
    int i;
};

char &get_c(Cls &cls);
double &get_d(Cls &cls);
int &get_i(Cls &cls);

#endif  // ACEESS_H
