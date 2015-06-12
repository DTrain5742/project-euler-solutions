//Project Euler Problem 1
//Daniel Brooks (brooksda@umich.edu)

#include <iostream>

using namespace std;

int main(void)
{
	int LARGENUMBER = 1000; //constant that can be modified for different instances
	int sum = 0; //keeps track of running total

	for (int i = 0; i < LARGENUMBER; i++)
	{
		if (i % 3 == 0) //multiple of 3
		{
			sum += i;
		}
		else if (i % 5 == 0) //multiple of 5 but not 3
		{
			sum += i;
		}
	}

	cout << "The sum of all multiples of 3 or 5 below ";
	cout << LARGENUMBER << " is " << sum << endl;
}
