#include <iostream>
using namespace std;

int main()
{
	int n = 5;

	int arr[5] = {};

	cout << "Enter " << n << "numbers: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> arr[i];
	}
	cout << endl;

	cout << "Before sorting: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int temp;

	for (int i = 0; i < n - 1 ; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}

	cout << "After sorting: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}