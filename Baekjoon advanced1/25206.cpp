#include <iostream>

using namespace std;

int main()
{
	double sumSet[20];
	double sum = 0;
	double average = 0;
	double count = 0;

	for (int i = 0; i < 20; i++)
	{
		char name[51];
		double period;
		char grade[3];
		double grade_num = 0;

		cin >> name >> period >> grade;

		if (grade[0] == 'A' && grade[1] == '+')
			grade_num = 4.5;
		if (grade[0] == 'A' && grade[1] == '0')
			grade_num = 4.0;
		if (grade[0] == 'B' && grade[1] == '+')
			grade_num = 3.5;
		if (grade[0] == 'B' && grade[1] == '0')
			grade_num = 3.0;
		if (grade[0] == 'C' && grade[1] == '+')
			grade_num = 2.5;
		if (grade[0] == 'C' && grade[1] == '0')
			grade_num = 2.0;
		if (grade[0] == 'D' && grade[1] == '+')
			grade_num = 1.5;
		if (grade[0] == 'D' && grade[1] == '0')
			grade_num = 1.0;
		if (grade[0] == 'F')
			grade_num = 0.0;
		if (grade[0] == 'P')
		{
			count++;
			continue;
		}
		sumSet[i] = period * grade_num;
		sum += sumSet[i];
	}

	average = sum / (20 - count);
	
	cout << average;

	return 0;
}