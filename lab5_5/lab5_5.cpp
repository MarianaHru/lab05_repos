#include <iostream>
using namespace std;

// Функція для обчислення біноміального коефіцієнта з рекурсією
int binomialCoefficient(int n, int k, int level, int &maxDepth)
{
    // Оновлюємо максимальну глибину, якщо поточний рівень більше
    if (level > maxDepth)
    {
        maxDepth = level;
        cout << "level = " << level << endl;
    }

    // Базовий випадок: якщо k = 0 або k = n
    if (k == 0 || k == n)
        return 1;

    // Рекурсивний випадок: використовуємо формулу
    return binomialCoefficient(n - 1, k - 1, level + 1, maxDepth) + binomialCoefficient(n - 1, k, level + 1, maxDepth);
}

int main()
{
    int n, k;
    int maxDepth = 0; // Змінна для збереження максимальної глибини рекурсії

    // Введення значень n та k
    cout << "Введіть n: ";
    cin >> n;
    cout << "Введіть k: ";
    cin >> k;

    // Виклик функції для обчислення біноміального коефіцієнта
    int result = binomialCoefficient(n, k, 1, maxDepth); // Початковий рівень = 1

    // Виведення результату
    cout << "Біноміальний коефіцієнт C(" << n << ", " << k << ") = " << result << endl;
    cout << "level: " << maxDepth << endl;

    return 0;
}