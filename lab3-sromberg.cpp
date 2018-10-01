//Lab03.cpp
//Spencer Romberg
//COSC 2030 Fall 2018
//Lab 03
//October 1st, 2018

#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void short_sum()
{
	short n;
	short sum = 0;
	int check_prior;
	int check_after;
	int accurate_data = 0;
	cout << "Please enter an integer greater than or equal to 1 to calcuate a sum from 1 to the number you chose: ";
	cin >> n;
	for (short i = 1; i <= n; i++)
	{
		check_prior = sum;
		sum = sum + i;
		check_after = sum;
		if (check_after < check_prior)
		{
			cout << "OVERFLOW DETECTED" << endl;
			cout << "Overflowed at: " << i << endl;
			accurate_data++;
			break;
		}
	}
	if (accurate_data == 0)
	{
		cout << "The sum of all integers from 1 to: " << n << " is: " << sum << endl;
	}
}

void long_sum()
{
	long n;
	long sum = 0;
	int check_prior;
	int check_after;
	int accurate_data = 0;
	cout << "Please enter an integer greater than or equal to 1 to calculate a sum from 1 to the number you chose: ";
	cin >> n;
	for (long i = 1; i <= n; i++)
	{
		check_prior = sum;
		sum = sum + i;
		check_after = sum;
		if (check_after < check_prior)
		{
			cout << "OVERFLOW DETECTED" << endl;
			cout << "Overflowed at: " << i << endl;
			accurate_data++;
			break;
		}
	}
	if (accurate_data == 0)
	{
		cout << "The sum of all integers from 1 to " << n << " is: " << sum << endl;
	}
}

void factorial_product()
{
	long n;
	float product = 1;
	float check_prior;
	float check_after;
	int accurate_data = 0;
	cout << "Please enter an integer greater than or equal to 1 to calcuate a factorial product from 1 to the number you chose: ";
	cin >> n;
	for (long i = 1; i <= n; i++)
	{
		product = product * i;
	}
	if (accurate_data == 0)
	{
		cout << "The product of all integers from 1 to " << n << " is: " << product << endl;
	}
}

void factorial_double_product()
{
	long n;
	double product = 1;
	double check_prior;
	double check_after;
	int accurate_data = 0;
	cout << "Please enter an integer greater than or equal to 1 to calcuate a factorial product from 1 to the number you chose: ";
	cin >> n;
	for (long i = 1; i <= n; i++)
	{
		product = product * i;
	}
	if (accurate_data == 0)
	{
		cout << "The product of all integers from 1 to " << n << " is: " << product << endl;
	}
}

void question_six_p1()
{
	float n;
	float sum = 0;
	cout << "Please enter an integer greater than or equal to 1 to calculate a sum from 1 to the number you chose involving ratios over n: ";
	cin >> n;
	for (float i = 1; i <= n; i++)
	{
		sum = sum + (1 / n);
	}
	cout << "The sum of all the ratios is: " << sum - 1 << endl;
}

void question_six_p2()
{
	double n;
	double sum = 0;
	cout << "Please enter an integer greater than or equal to 1 to calculate a sum from 1 to the number you chose: ";
	cin >> n;
	for (double i = 1; i <= n; i++)
	{
		sum = sum + (1 / n);
	}
	cout << "The sum of all the ratios is: " << sum - 1 << endl;
}

void question_seven()
{
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
}

void question_seven_p2()
{
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
}


int main()
{
	/*short_sum();
	system("pause");
	long_sum();
	system("pause");
	factorial_product();
	system("pause");
	factorial_double_product();
	system("pause");
	question_six_p1();
	system("pause");
	question_six_p2();
	system("pause");*/
	question_seven();
	system("pause");
	question_seven_p2();
	system("pause");

}

