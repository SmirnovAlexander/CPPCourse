#include "access.h"

Cls::Cls(char c, double d, int i) {
    this->c = c;
    this->d = d;
    this->i = i;
}

char Cls::get_c() { return this->c; }
double Cls::get_d() { return this->d; }
int Cls::get_i() { return this->i; }

char &get_c(Cls &cls) {
    Hacker *hacker = reinterpret_cast<Hacker *>(&cls);
    return hacker->c;
}

double &get_d(Cls &cls) {
    Hacker *hacker = reinterpret_cast<Hacker *>(&cls);
    return hacker->d;
}

int &get_i(Cls &cls) {
    Hacker *hacker = reinterpret_cast<Hacker *>(&cls);
    return hacker->i;
}
