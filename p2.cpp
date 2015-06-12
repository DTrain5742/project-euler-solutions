//Project Euler Problem 2
//Daniel Brooks (brooksda@umich.edu)

#include <iostream>

using namespace std;

int main(void)
{
	int LARGENUMBER = 4000000; //constant that can be modified for different instances
	int sum = 0; //keeps track of running total

	int first = 1; //first fibonacci number
	int second = 2; //second fibonacci number

	while (first <= LARGENUMBER)
	{
		if (first % 2 == 0)
		{
			sum += first;
		}

		int temp = second;
		second += first;
		first = temp;
	}

	cout << "The sum of all even fibonacci numbers below ";
	cout << LARGENUMBER << " is " << sum << endl;
}
