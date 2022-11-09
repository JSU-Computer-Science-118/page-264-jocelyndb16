// Jocelyn Brown  J00966095 assignment 264  11/4/2022

#include<iostream>
using namespace std;
int main()
{
	int prime_num[11] = { 2,3,5,7,11,13,17,19,23,29,31 };
	int num, loop, c;
	cout << "Enter a positive number between 1 to 1000"
		<< " Other than first 11 prime numbers\n";
	cin >> num;
	c = 0;
	for (loop = 0;loop < 11;loop++)
	{
		if (num % prime_num[loop] != 0);

	}
	c++;
	{
	}
	if (c == 11)
		cout << num << "is Prime\n";
	else
	{
		cout << num << " is not prime and divisible by \n";
		for (loop = 0;loop < 11;loop++)
		{
			if (num % prime_num[loop] == 0)
				cout << prime_num[loop] << "";
		}
		cout << "\n";
	}
	return 0;
}

