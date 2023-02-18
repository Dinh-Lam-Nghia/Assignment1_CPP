#include <iostream>
#include <algorithm>
using namespace std;

void tb(float *array, int noe)
{
    int sum =0;
    for (int i = 0; i < noe; i++)
    {
        sum += array[i];
    }
    float tbc = sum / noe;
    cout << "diem trung binh: "<< tbc << endl;
}

void Validation(float *array, int noe)
{
    for (int i = 0; i < noe; i++)
    {
        cout << "Element number " << i + 1 << ": ";
        cin >> array[i];
        if (array[i] < 0)
        {
            cout<< "Do not accept negative numbers for test scores.";
            Validation(array, noe);
        }
    }
    
    tb(array, noe);
}

int main(int argc, char **)
{
    int noe;
    double median = 0;
    cout << "so luong diem: ";
    cin >> noe;

    float array[noe];
    Validation(array, noe);

    sort(array, array + noe);
    cout << "diem da duoc sap xep tang dan: ";
    for (int i = 0; i < noe; ++i)
        cout << array[i] << " ";


    return 0;
}