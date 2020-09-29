#include <cmath>
#include <iostream>
#include <utility>

std::pair<double, double> find_roots(int a, int b, int c) {
    double root1, root2;
    double d = pow(b, 2) - 4 * a * c;

    if (d < 0) {
        throw std::runtime_error("No real roots");
    } else if (d == 0) {
        root1 = (double)-b / (2. * a);
        root2 = (double)-b / (2. * a);
    } else {
        root1 = ((double)-b + sqrt(d)) / (2. * a);
        root2 = ((double)-b - sqrt(d)) / (2. * a);
    }

    std::pair<double, double> roots(root1, root2);

    return roots;
}
