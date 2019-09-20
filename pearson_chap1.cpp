#include <iostream> 
using namespace std; 

 int main()
 {
	 
	int quarters = .25;
	int amtQuart = 2;
	int dimes = .1; 
	int amtDimes = 3;
	int nickels = .05;
	int amtNickels = 1;
	int total = (amtQuart * quarters) + (amtDimes * dimes) + (amtNickels * nickels);
	 
	 
	cout << "Enter the number of quarters.";
	cin >> amtQuart; 
	 
	cout << "Enter the amount of dimes.";
	cin >> amtDimes; 
	 
	cout << "Enter the amount of nickels.";
	cin >> amtNickels; 
	 
	cout << endl; 
	 
	cout << "Coins are worth " << total << " cents" << endl;
	 
	 
	 
 	return 0;
 }