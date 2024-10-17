// #include <iostream>
// using namespace std;

// // // Функція для обчислення біноміального коефіцієнта з рекурсією
// // int binomialCoefficient(int n, int k, int level, int &maxDepth)
// // {

// //     if (level > maxDepth)
// //     {
// //         maxDepth = level;
// //     }

// //     cout << "level = " << level << endl;
// //     if (k == 0 || k == n)
// //         return 1;

// //     return binomialCoefficient(n - 1, k - 1, level + 1, maxDepth) + binomialCoefficient(n - 1, k, level + 1, maxDepth);
// // }

// int binomialCoefficient (int k, int n, int &maxDepth, int level)
// {
//     if (level > maxDepth)
//         maxDepth = level;
//     cout << "level =" << level << endl;

//     if (k == 0 || k == n)
//         return 1;
//     else
//         return binomialCoefficient(n - 1, k - 1, level + 1, maxDepth) + binomialCoefficient(n - 1, k, level + 1, maxDepth);
// }
// int main()
// {
//     int n, k;
//     int maxDepth = 0; // Змінна для збереження максимальної глибини рекурсії

//     cout << "Введіть n: ";
//     cin >> n;
//     cout << "Введіть k: ";
//     cin >> k;

//     int result = binomialCoefficient(n, k, 1, maxDepth);

//     cout << "Біноміальний коефіцієнт C(" << n << ", " << k << ") = " << result << endl;
//     cout << "level: " << maxDepth << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int binomialCoefficient(int n, int k, int &maxDepth, int level)
{
    if (level > maxDepth)
        maxDepth = level;
    cout << "level = " << level << endl;

    if (k == 0 || k == n)
        return 1;
    else
        return binomialCoefficient(n - 1, k - 1, maxDepth, level + 1) + binomialCoefficient(n - 1, k, maxDepth, level + 1);
}

int main()
{
    int n, k;
    int maxDepth = 0;

    cout << "Введіть n: ";
    cin >> n;
    cout << "Введіть k: ";
    cin >> k;

    int result = binomialCoefficient(n, k, maxDepth, 1);

    cout << "Біноміальний коефіцієнт C(" << n << ", " << k << ") = " << result << endl;
    cout << "Максимальна глибина рекурсії: " << maxDepth << endl;

    return 0;
}
