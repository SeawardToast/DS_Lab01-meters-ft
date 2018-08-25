#include <iostream>    // Provides cout    
#include <string>      //provides string
using namespace std;  

//the ratio is 1 foot to .3048 meters
double feet_to_meters(double foot_val){
	return foot_val*.3048;
} 

double conversion_program(){
	string header1 = "Feet ";
	string header2 = "Meters ";
	string symbol1 = "ft ";
	string symbol2 = "m ";
	double startValue = 0.0;
	double endValue = 100.0;
	double increment = 10.0;
	cout << "Conversions from " << startValue << symbol1 << "to " << endValue << symbol1 << endl;
	cout << header1 << "         " << header2 << endl;
	for (double i = startValue; i <= endValue; i+=increment){
		cout << i << "             " << feet_to_meters(i) << endl;
	}
}
/*
 * Big O Analysis for the summation
 * Declaring and assigning sum and declaring input, two operations
 * cout is another operation to add
 * cin retrieves input from the user, plus one operation
 * the loop has a cout operation and a sum operation that will each occur "n" times
 * plus one last cout after the loop
 * Big O is 4+2n+1 === O(n)
 * 
*/
double summation(){
	int sum = 0, input;
	cout << "Enter an integer" <<endl;
	cin >> input;
	for(int i = 1; i <= input; i++){
		cout << i << endl;
		sum += i;
	}
	cout << "sum is " << sum << endl;
}

int main(){
	conversion_program();
	summation();
}
