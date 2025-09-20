#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(unsigned(time(0)));

	//1)

	/*int arr[10];
	int arr2[5];
	int arr3[5];

	for (size_t i = 0; i < 10; i++)
	{
		arr[i] = rand() % 21 - 10;
		cout << arr[i] << "\t";
	}
	cout << endl;
	int x = 0;
	for (size_t i = 0; i < 5; i++)
	{
		arr2[i] = arr[x++];
	}
	for (size_t i = 0; i < 5; i++)
	{
		arr3[i] = arr[x++];
	}

	for (size_t i = 0; i < 5; i++)
	{
		cout << arr2[i] << "\t";
	}
	cout << endl;
	for (size_t i = 0; i < 5; i++)
	{
		cout << arr3[i] << "\t";
	}*/

	//2

	/*int arr[10];
	int arr2[10];
	int arr3[10];

	for (size_t i = 0; i < 10; i++)
	{
		arr[i] = rand() % 21 - 10;
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (size_t i = 0; i < 10; i++)
	{
		arr2[i] = rand() % 21 - 10;
		cout << arr2[i] << "\t";
	}
	cout << endl;
	for (size_t i = 0; i < 10; i++)
	{
		arr3[i] = arr[i] + arr2[i];
	}
	for (size_t i = 0; i < 10; i++)
	{
		cout << arr3[i] << "\t";
	}*/

	//3

	/*int arr[7];

	for (size_t i = 0; i < 7; i++)
	{
		cout << "Enter data on your expenses for the " << i + 1 << " day:" << endl;
		cin >> arr[i];
	}
	for (size_t i = 0; i < 7; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	double average = 0;
	double sum = 0;
	int count = 0;
	for (size_t i = 0; i < 7; i++)
	{
		sum += arr[i];

		if (arr[i] > 100)
		{
			count++;
		}
	}
	average = sum / 7;
	cout << "The total amount spent by the user per week: " << sum << endl;
	cout << "Average (weekly) amount spent: " << average << endl;
	cout << "Quantity of days when the amount of expenses (per day) exceeded 100 dollars: " << count << endl;
	cout << "Days with expenses over $100: " << endl;
	for (size_t i = 0; i < 7; i++)
	{
		if (arr[i] > 100)
		{
			switch (i)
			{
			case 0:
				cout << "Monday";
				break;
			case 1:
				cout << "Tuesday";
				break;
			case 2:
				cout << "Wensday";
				break;
			case 3:
				cout << "Thursday";
				break;
			case 4:
				cout << "Friday";
				break;
			case 5:
				cout << "Saturday";
				break;
			case 6:
				cout << "Sunday";
				break;
			}
			cout << " ";
		}
	}*/

	//4

	double exchangeRate[12];
	double accruedInterestEUR[12];
	int month;

	for (size_t i = 0; i < 12; i++)
	{
		cout << "Enter the exchange rate for the " << i + 1 << " month" << endl;
		cin >> exchangeRate[i];
	}
	for (size_t i = 0; i < 12; i++)
	{
		cout << "Enter the accrued iterest for the " << i + 1 << " month" << endl;
		cin >> accruedInterestEUR[i];
	}
	cout << "Enter the month(1 - 12): " << endl;
	cin >> month;
	if (month < 1 || month > 12)
	{
		cout << "Error" << endl;
	}
	int index = month - 1;
	double accruedInterestUSD = accruedInterestEUR[index] * exchangeRate[index];
	double availableSum = 0;
	if (accruedInterestUSD >= 500)
	{
		availableSum = accruedInterestUSD * 0.5;
	}
	else
	{
		availableSum = 0;
	}
	cout << "Your available sum: " << availableSum << endl;
}