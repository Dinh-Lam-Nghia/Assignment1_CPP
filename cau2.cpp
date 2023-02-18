#include <iostream>
#include <cmath>
using namespace std;

int tinh(double a, double b, double c);

int main(int argc, char const *argv[])
{
    double a, b, c;
    cout << " nhap 3 so a, b, c: \n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    tinh(a, b, c);

    return 0;
}
int tinh(double a, double b, double c)
{
    double denta = b * b - 4 * a * c;
    if (denta < 0)
    {
        cout << "Phuong trinh vo nghiem!";
    }
    if (denta == 0)
    {
        cout << "Phuong trinh co ngiem kep x1 = x2 = " << -(b / 2 * a);
    }
    if (denta > 0)
    {
        cout << "Phuong trinh co 2 ngiem phan biet \nx1 = " << (-b + sqrt(denta)) / (2 * a)
             << "\nx2 = " << (-b - sqrt(denta)) / (2 * a);
    }

    return 0;
}
