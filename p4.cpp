//Project Euler Problem 4
//Daniel Brooks (brooksda@umich.edu)

#include <iostream>

using namespace std;

int main(void)
{
	int result = -1;

	for (int i = 0; i < 1000; i++)
	{
		for (int j = 0; j < 1000; j++)
		{
			int temp = i * j;
			int num = temp;
			int n = num;
			int rev = 0;

			while (num > 0)
			{
				int dig = num % 10;
				rev = rev * 10 + dig;
				num = num / 10;
			}

			if (n == rev && temp > result)
			{
				result = temp;
			}
		}
	}

	cout << "The largest palendrome product of two three digit numbers is ";
	cout << result << endl;
}
