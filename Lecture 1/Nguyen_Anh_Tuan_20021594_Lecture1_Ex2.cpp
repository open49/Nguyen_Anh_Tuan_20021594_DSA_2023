#include <bits/stdc++.h>
using namespace std;

#define pdd pair<double, double>

void displayPoint(pdd P)
{
    cout << "(" << P.first << ", " << P.second << ")" << endl;
}

pdd lineLineIntersection(pdd A, pdd B, pdd C, pdd D)
{
    double a1 = B.second - A.second;
    double b1 = A.first - B.first;
    double c1 = a1 * A.first + b1 * A.second;

    double a2 = D.second - C.second;
    double b2 = C.first - D.first;
    double c2 = a2 * C.first + b2 * C.second;

    double determinant = a1 * b2 - a2 * b1;

    if (determinant == 0)
    {
        return make_pair(FLT_MAX, FLT_MAX);
    }
    else
    {
        double x = (b2 * c1 - b1 * c2) / determinant;
        double y = (a1 * c2 - a2 * c1) / determinant;
        return make_pair(x, y);
    }
}

int main()
{
    pdd A, B, C, D;

    cout << "Input A (x y): ";
    cin >> A.first >> A.second;

    cout << "Input B (x y): ";
    cin >> B.first >> B.second;

    cout << "Input C (x y): ";
    cin >> C.first >> C.second;

    cout << "Input D (x y): ";
    cin >> D.first >> D.second;

    pdd intersection = lineLineIntersection(A, B, C, D);

    if (intersection.first == FLT_MAX && intersection.second == FLT_MAX)
    {
        cout << "AB // CD.\n";
    }
    else
    {
        cout << "Giao diem AB va CD: ";
        displayPoint(intersection);
    }

    return 0;
}
