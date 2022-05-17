#include <iostream>
#include <Windows.h>


using namespace std;


int f1(int* arr1, int* arr2, int* arr3, int n, int m)
{
	int p = 0;
	for (int i = 0; i < n; i++)
	{
		arr1[i] = rand() % 100; 
		cout << arr1[i] << " ";
		arr3[p] = arr1[i];
		p++;
	}
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		arr2[i] = rand() % 100;
		cout << arr2[i] << " ";
		arr3[p] = arr2[i];
		p++;
	}
	cout << endl << "ќбщий массив" << endl;
	for (int i = 0; i < n + m; i++)
		cout << arr3[i] << " ";

}

int main()
{
	setlocale(0, "ru");
	int n, m;
	cout << "¬ведите размер первого массива: ";    cin >> n;
	cout << "¬ведите размер второго массива: ";    cin >> m;
	int* arr1 = new int[n]; 
	int* arr2 = new int[m];
	int* arr3 = new int[n + m];
	f1(arr1, arr2, arr3, n, m);

	delete[] arr1, arr2, arr3;
	system("pause");
}
