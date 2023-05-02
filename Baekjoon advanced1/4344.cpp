#include <iostream>

using namespace std;

int main()
{
	int c, n;
	int score[1001];
	double ratio;

	cin >> c;
	while (c < 1)
		cin >> c;
	
	for (int i = 0; i < c; i++)
	{
		double average = 0;
		int count = 0;

		cin >> n;
		while (n > 1000 || n < 1)
			cin >> n;

		for (int j = 0; j < n; j++)
		{
			cin >> score[j];
			while (score[j] > 100 || score[j] < 0)
				cin >> score[j];
		}

		for (int j = 0; j < n; j++)
		{
			average += score[j];
		}

		average = average / n;

		for (int j = 0; j < n; j++)
		{
			if (score[j] > average)
				count++;
		}

		ratio = (double)count / n;
		cout.setf(ios::fixed);
		cout.precision(3);

		cout << ratio * 100 << "%" << endl;
	}

	return 0;
}