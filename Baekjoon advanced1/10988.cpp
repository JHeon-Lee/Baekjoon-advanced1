#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	char s[101];
	cin >> s;
	int count = 0;

	for (int i = 0; i < (strlen(s) + 1) / 2; i++)
	{
		if (s[i] == s[strlen(s) - i - 1])
		{
			count++;
			if (count == (strlen(s) + 1) / 2)
				cout << "1";
		}
		else
		{
			cout << "0";
			break;
		}
	}

	return 0;
}