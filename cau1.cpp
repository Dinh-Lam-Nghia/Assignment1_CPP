#include <iostream>
using namespace std;

int tinh(int d, int h);
int xacthuc(int d, int h);

int main(int argc, char const *argv[])
{
    int d = 0, h = 0;
    xacthuc(d, h);
    return 0;
}
int xacthuc(int d, int h)
{
    cout << "What is the speed of the vehicle in mph? ";
    cin >> d;
    cout << "How many hours has it traveled? ";
    cin >> h;
    cout << "----------------------------------------------\n";
    if (d <= 0 || h <= 1)
    {
        xacthuc(d, h);
    }
    return tinh(d, h);
}
int tinh(int d, int h)
{
    cout << "Hour Distance Traveled\n--------------------\n";
    for (int i = 1; i <= h; i++)
    {
        int qd = i * d;
        cout << i << "        " << qd << "\n";
    }
    return 0;
}
