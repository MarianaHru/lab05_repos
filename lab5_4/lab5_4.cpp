#include <iostream>
#include <cmath>

using namespace std;

double S0(const int i, const int N)
{
    double s = 0;
    for (int p = i; p <= N; p++)
        s += 1. / i + sqrt(1 + (sin(i) * sin(i)));
    return s;
}
double S1(const int i, const int N, const int p)
{
    if (p > N)
        return 0;
    else
        return 1. / i + sqrt(1 + (sin(i) * sin(i))) + S1(i, N, p + 1);
}
double S2(const int i, const int N, const int p)
{
    if (p < i)
        return 0;
    else
        return 1. / i + sqrt(1 + (sin(i) * sin(i))) + S2(i, N, p - 1);
}

double S3(const int i, const int N, const int p, double t)
{
    t = t + 1. / i + sqrt(1 + (sin(i) * sin(i)));
    if (p >= N)
        return t;
    else
        return S3(i, N, p + 1, t);
}
double S4(const int i, const int N, const int p, double t)
{
    t = t + 1. / i + sqrt(1 + (sin(i) * sin(i)));
    if (p <= i)
        return t;
    else
        return S4(i, N, p - 1, t);
}

#ifndef UNIT_TESTING

int main()
{
    int i, N;
    i = 1;
    cout << "N = ";
    cin >> N;

    cout << "(iter)           S0=" << S0(i, N) << endl;
    cout << "(recup++)        S1=" << S1(i, N, i) << endl;
    cout << "(recup--)        S2=" << S2(i, N, N) << endl;
    cout << "(rec down ++)    S3 = " << S3(i, N, i, 0) << endl;
    cout << "(rec down --)    S4 = " << S4(i, N, N, 0) << endl;

    return 0;
}

#endif