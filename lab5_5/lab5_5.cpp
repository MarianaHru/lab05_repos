#include <iostream>
using namespace std;

int recursionDepth = 0; // Поточна глибина рекурсії
int maxDepth = 0;       // Максимальна досягнута глибина

// Функція для обчислення факторіала
int factorial(int n)
{
    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

// Функція для обчислення біноміального коефіцієнта через факторіали
int binomialCoefficientFactorial(int n, int k)
{
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// Рекурсивна функція для обчислення біноміального коефіцієнта з відстеженням глибини і рівня
int binomialCoefficientRecursive(int n, int k)
{
    recursionDepth++; // Збільшення поточної глибини
    if (recursionDepth > maxDepth)
    {
        maxDepth = recursionDepth; // Оновлення максимальної глибини
    }

    // Виведення поточного рівня рекурсії
    cout << "Рівень рекурсії: " << recursionDepth << ", n = " << n << ", k = " << k << endl;

    // Базовий випадок
    if (k == 0 || k == n)
    {
        recursionDepth--; // Зменшення глибини при поверненні
        return 1;
    }

    // Рекурсивний випадок
    int result = binomialCoefficientRecursive(n - 1, k - 1) + binomialCoefficientRecursive(n - 1, k);

    recursionDepth--; // Зменшення глибини при поверненні
    return result;
}

int main()
{
    int n, k;

    // Введення значень n і k
    cout << "Введіть значення n: ";
    cin >> n;
    cout << "Введіть значення k: ";
    cin >> k;

    // Обчислення біноміального коефіцієнта через факторіали
    int resultFactorial = binomialCoefficientFactorial(n, k);
    cout << "Біноміальний коефіцієнт C(" << n << ", " << k << ") через факторіали = " << resultFactorial << endl;

    // Обчислення біноміального коефіцієнта рекурсивно
    int resultRecursive = binomialCoefficientRecursive(n, k);
    cout << "Біноміальний коефіцієнт C(" << n << ", " << k << ") рекурсивно = " << resultRecursive << endl;

    // Виведення максимальної глибини рекурсії
    cout << "Максимальна глибина рекурсії: " << maxDepth << endl;

    return 0;
}
