
#include <iostream>
using namespace std;

void printResult(float result)
{
	cout << " Result : " << result << "\n";
}
int main()
{
	std::cout << "Hello World!\n";

	while (true)
	{
		float Number1, Number2;
		char Operator;
		float Result;

		cout << "\n Enter First Number ";
		cin >> Number1;
		cout << "\n Enter Operator ";
		cin >> Operator;
		cout << "\n Enter Second Number ";
		cin >> Number2;

		if (cin.fail() == false)
		{
			switch (Operator)
			{
			case '+':
				Result = Number1 + Number2;
				printResult(Result);
				break;
			case '-':
				Result = Number1 - Number2;
				printResult(Result);
				break;
			case '*':
				Result = Number1 * Number2;
				printResult(Result);
				break;
			case '/':
				Result = Number1 / Number2;
				printResult(Result);
				break;
			default:
				cout << " Bad Operator \n";
				break;
			}
		}
		else 
		{
			cin.clear();
			cin.ignore();
			cout << "\n Bad Int \n";
		}
	}
}
