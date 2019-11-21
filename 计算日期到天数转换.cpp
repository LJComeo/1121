#include <iostream>
using namespace std;

int main2()
{
	int y, m, d;
	while (cin >> y >> m >> d)
	{
		int sum = 0;
		int tmp = 0;

		if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
		{
			for (int i = 1; i < m; i++)
			{
				if (i == 2)
				{
					tmp += 29;
				}
				else if (i == 4 || i == 6 || i == 9 || i == 11)
				{
					tmp += 30;
				}
				else
				{
					tmp += 31;
				}
			}
			sum = tmp + d;
		}
		else
		{
			for (int i = 1; i < m; i++)
			{
				if (i == 2)
				{
					tmp += 28;
				}
				else if (i == 4 || i == 6 || i == 9 || i == 11)
				{
					tmp += 30;
				}
				else
				{
					tmp += 31;
				}
			}
			sum = tmp + d;
		}
		cout << sum << endl;
	}
	return 0;
}