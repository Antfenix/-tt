#include<iostream>
#include<time.h>
using namespace std;

int add_to_end_of_array(int*& ar, int& size, int value)
{
    int* temp = new int[size + 1];

    for (int i = 0; i < size; i++)
        temp[i] = ar[i];

    temp[size] = value;

    delete[]ar;
    ar = temp;
    size++;


}
int print_array(int* mas, int size)
{
    for (int i = 0; i < size; i++)
        cout << mas[i] << " ";
    cout << endl << endl;
}
bool contains(int* a, int size, int value)
{
    for (int i = 0; i < size; i++)
        if (a[i] == value)
            return true;
    return false;
}
int obel(int*& obw, int* mas, int* mas2, int size1, int size2, int& size3)
{
    obw = nullptr, size3 = 0;
    for (int i = 0; i < size1; i++)
    {
        if (!contains(obw, size3, mas[i]))
            add_to_end_of_array(obw, size3, mas[i]);
    }

    for (int i = 0; i < size2; i++)
    {
        if (!contains(obw, size3, mas2[i]))
            add_to_end_of_array(obw, size3, mas2[i]);
    }
}

void main()
{
    srand(time(0));
    int size = 10, size2 = 10;
    cout << "Enter size1: ";
    cin >> size;
    cout << "Enter size2: ";
    cin >> size2;
    int* mas2 = new int[size2];
    int* mas = new int[size];

    int* obw, size3;

    cout << "massiv 1: ";
    print_array(mas, size);
    cout << "massiv 2: ";
    print_array(mas2, size2);
    obel(obw, mas, mas2, size, size2, size3);
    cout << "massiv 3: ";
    print_array(obw, size3);
    delete[]mas;
    delete[]mas2;
    delete[]obw;
}
