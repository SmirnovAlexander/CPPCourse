#ifndef QUADRATIC_H
#define QUADRATIC_H

#include <utility>

/*
 * Calculating roots of a quadratic equation.
 *
 * @params a b c Coefficents of equation
 * @returns pair<double, double> Roots
 * @throws runtime_error("No real roots")
 */
std::pair<double, double> find_roots(int a, int b, int c);

#endif  // QUADRATIC_H
