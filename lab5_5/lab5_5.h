#ifndef BINOMIAL_COEFFICIENT_H
#define BINOMIAL_COEFFICIENT_H

// Змінні для відстеження глибини рекурсії
extern int recursionDepth; // Поточна глибина рекурсії
extern int maxDepth;       // Максимальна досягнута глибина

// Функція для обчислення факторіала
int factorial(int n);

// Функція для обчислення біноміального коефіцієнта через факторіали
int binomialCoefficientFactorial(int n, int k);

// Рекурсивна функція для обчислення біноміального коефіцієнта
int binomialCoefficientRecursive(int n, int k);

#endif // BINOMIAL_COEFFICIENT_H
