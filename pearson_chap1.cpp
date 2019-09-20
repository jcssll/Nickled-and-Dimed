// Header File

#include <iostream> 
using namespace std; 

//Main Function 
 int main()
 {
//Decalare my variables

 	int number_of_quarters, number_of_dimes, number_of_nickels, total;
	int quarters = .25;
	int dimes = 10;
	int nickels = 5;
	//removing variables I created with values.
	/*
	int amtQuart = 2;
	int amtDimes = 3;
	int amtNickels = 1;
*/
	 
//Prompt and read input from the keyboard	 
	cout << "Enter the number of quarters, ";
	cin >> number_of_quarters; 
	 
	cout << "Enter the amount of dimes ";
	cin >> number_of_dimes; 
	 
	cout << "Enter the amount of nickels:";
	cin >> number_of_nickels; 

	total = (number_of_quarters * quarters) + (number_of_dimes * dimes) + (number_of_nickels * nickels);
	 //result
	cout << total;

 	return 0;
 }