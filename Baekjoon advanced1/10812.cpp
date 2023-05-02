#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	while ((n > 100 || n < 1) || (m > 100 || m < 1))
		cin >> n >> m;

	int arr[100] = { 0 };
	int arr2[100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}

	int begin, mid, end;
	for (int i = 0; i < m; i++)
	{
		cin >> begin >> end >> mid;
		while ((begin > mid || begin < 1) || (mid > end) || (end > n))
			cin >> begin >> mid >> end;

		for (int j = 0; j < end - mid + 1; j++)
		{
			arr2[begin + j - 1] = arr[mid + j - 1];
		}
		for (int j = 0; j < mid - begin; j++)
		{
			arr2[begin + end - mid + j] = arr[begin + j - 1];
		}
		for (int j = begin; j < end + 1; j++)
		{
			arr[j - 1] = arr2[j - 1];
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}