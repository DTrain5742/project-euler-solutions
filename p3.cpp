//Project Euler Problem 3
//Daniel Brooks (brooksda@umich.edu)

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	long long int N = 600851475143; //Constant that can be modified for different instances
	long long int result = 2; //Stores final result
	vector <long long int> resultVector; //Holds all factors
	
	long long int temp;

	while (result < (N / 2)) //Builds a vector of factors
	{
		if (N % result == 0)
		{
			temp = N / result;
			resultVector.push_back(result);
			if (temp < result)
			{
				break;
			}
		}
		result++;
	}

	for (int i = 0; i < resultVector.size(); i++) //Eliminate non prime factors
	{
		for (int j = 2; j < (resultVector[i] / 2); j++)
		{
			if (resultVector[i] % j == 0)
			{
				resultVector[i] = -1;
			}
		}
	}

	result = -1;

	for (int i = 0; i < resultVector.size(); i++) //Find largest prime factor
	{
		if (resultVector[i] > result)
		{
			result = resultVector[i];
		}
	}

	cout << "The largest prime factor of ";
	cout << N << " is " << result << endl;
}