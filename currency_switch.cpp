#include "std_lib_facilities.h"

int main() {

	constexpr double euros_per_one_dollar = 0.88; 
	constexpr double euros_per_one_yen = 0.0082;
	constexpr double euros_per_one_yuan = 0.13;
	double amount = 1;
	char target_currency = ' ';

	cout << "Please enter an amount of money in euro:\n"
	     << "Please enter the target currency (d/j/c):\n"; 

	cin >> amount 
	    >> target_currency;

	cout << amount << " e == ";

	switch (target_currency) {
	case 'd':
	    cout << amount / euros_per_one_dollar << " d\n";
	    break;
	case 'j':
	    cout << amount / euros_per_one_yen << " j\n";
	    break;
	case 'c':
		cout << amount / euros_per_one_yuan << " c\n";
		break;
	default:
	    cout << "error : I don't know a currency called '" << target_currency << "'\n";
	    break;
	}
}