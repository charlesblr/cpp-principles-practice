// Converter of units 

#include "std_lib_facilities.h"

double conversion_into_m(double number, string unit){
	double cm_into_m = 0.01;
	double in_into_m = 2.54 * cm_into_m;
	double ft_into_m = 12 * in_into_m;

	if(unit == "m") {
	}
	else if(unit == "cm") {
		number *= cm_into_m;
	}
	else if(unit == "in") {
		number *= in_into_m;
	}
	else if(unit == "ft") {
		number *= ft_into_m;
	}
	else {
		cout << "not a valid unit \n" 
		     << "enter a valid unit (m, cm, in, ft): \n";

		cin >> unit;

		number = conversion_into_m(number, unit);
	}
	return number;
}

int main() {
    double smallest;
	double largest;
	double number;
	string unit; 
	double sum = 0;
	vector<double> numbers_list;

	cin >> number >> unit;

	number = conversion_into_m(number, unit);
	numbers_list.push_back(number);
	sum += number;
	smallest = number;
	largest = number;

	while(cin >> number >> unit) {
		number = conversion_into_m(number, unit);
		numbers_list.push_back(number);
		sum += number;

		if(number < smallest) {
			smallest = number;
		}
		else if(number > largest) {
			largest = number;
		}
	}
	cout << "the number of values is: " << numbers_list.size() << "\n"
		 << "the smallest is: " << smallest << " m\n"
	     << "the largest is: " << largest << " m\n"
	     << "the sum of all values is: " << sum << " m\n"
	     << "all the values are: ";

	sort(numbers_list);
	for(double number : numbers_list) {
		cout << number << " ";
	}
}









