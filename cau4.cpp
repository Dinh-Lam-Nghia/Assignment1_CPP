#include <iostream>
using namespace std;

void reverse(int* a, int n)
{
    for (int i = 0; i < n / 2; ++i) {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    cout<<"Mang da sap xep: ";
    for (int i = 0; i < n; i++)
    {
        cout<< a[i]<<" ";
    }
    
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "so luong mang: "; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<"Mang chua sap xep: ";
    for (int i = 0; i < n; i++)
    {
        cout<< a[i]<<" ";
    }

    reverse(a, n);
    
    return 0;
}
