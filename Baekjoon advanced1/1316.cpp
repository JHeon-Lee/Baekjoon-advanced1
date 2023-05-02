#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	int n;
	int count = 0;
	char s[101];

	cin >> n;
	while (n > 100 || n < 1)
		cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> s;
		while (strlen(s) > 100)
			cin >> s;

		if (strlen(s) >= 3)
		{
			for (int j = 0; j < strlen(s) - 2; j++)
			{
				for (int k = j + 2; k < strlen(s); k++)
				{
					if (s[j] != s[j + 1] && s[j] == s[k])
					{
						count++;
						j = strlen(s) - 2;
						break;
					}
				}
			}
		}
	}

	cout << n - count;

	return 0;
}