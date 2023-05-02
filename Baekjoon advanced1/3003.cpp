#include <iostream>

using namespace std;

int main()
{
	int arr1[6];
	int arr2[6] = { 1,1,2,2,2,8 };

	for (int i = 0; i < 6; i++)
	{
		cin >> arr1[i];
		while (arr1[i] > 10 || arr1[i] < 0)
			cin >> arr1[i];
	}

	for (int i = 0; i < 6; i++)
	{
		cout << arr2[i] - arr1[i] << " ";
	}

	return 0;
}