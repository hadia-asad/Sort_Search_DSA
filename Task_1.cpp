#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int n = 5;

	string arr[n];

	cout << "Enter " << n << "fruits: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter fruit " << i + 1 << ": ";
		getline(cin, arr[i]);
	}
	cout << endl;

	cout << "Before sorting: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	string temp;

	for (int i = 0; i < n - 1; i++)
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
