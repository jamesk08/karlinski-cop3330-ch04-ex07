/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 James Karlinski
 */

#include "std_lib_facilities.h"

int convertToNumber(string numberInput, bool isFirstNumber)
{
	if(numberInput == "zero" || numberInput == "0") return 0;
	else if(numberInput == "one" || numberInput == "1") return 1;
	else if(numberInput == "two" || numberInput == "2") return 2;
	else if(numberInput == "three" || numberInput == "3") return 3;
	else if(numberInput == "four" || numberInput == "4") return 4;
	else if(numberInput == "five" || numberInput == "5") return 5;
	else if(numberInput == "six" || numberInput == "6") return 6;
	else if(numberInput == "seven" || numberInput == "7") return 7;
	else if(numberInput == "eight" || numberInput == "8") return 8;
	else if(numberInput == "nine" || numberInput == "9") return 9;
	else 
	{
		string invalidInputMessage = isFirstNumber ? "First number input" : "Second number input";
		cout << invalidInputMessage  + "is invalid." << endl;
		return 0;
	}
}

int main()
{
	int firstNumber;
	int secondNumber;
	int result = 0;
	string operation;
	string firstNumberInput;
	string secondNumberInput;
	string output = "";

  	string prompt = 
	  "Enter an operator (+,/,*,%) and two numbers that are single digit separated by spaces.\nExample '+ 9 7' or '+ nine four': ";
  	cout << prompt;

	cin >> operation >> firstNumberInput >> secondNumberInput;

	firstNumber = convertToNumber(firstNumberInput, true);
	secondNumber = convertToNumber(secondNumberInput, false);

	if(operation == "*" || operation == "mul")
	{
		output = "The multiplication of ";
		result = firstNumber * secondNumber;
	}
	else if(operation == "+" || operation == "plus")
	{
		output = "The sum of ";
		result = firstNumber + secondNumber;
	}
	else if(operation == "-" || operation == "minus")
	{
		output = "The difference of ";
		result = firstNumber - secondNumber;
	}
	else if(operation == "/" || operation == "div")
	{
		if(secondNumber == 0)
		{
			cout << "Cannot divided by 0" << endl;
			return 0;
		}
		output = "The dividened of ";
		result = firstNumber / secondNumber;
	}
	else if(operation == "%" || operation == "mod")
	{
		if(secondNumber == 0)
		{
			cout << "Cannot find modulus by 0" << endl;
			return 0;
		}
		output = "The modulus of ";
		result = firstNumber % secondNumber;
	}
	else
	{
		cout << "Invalid Operation"<< endl;
		return 0;
	}
	cout << output << firstNumber << " and " << secondNumber << " is " << result << "." << endl;  

	// wait so user can read the output and press any key to exit.
	system("pause");

	return 0;
}
