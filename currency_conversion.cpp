#include "std_lib_facilities.h"

int main() {

	constexpr double euros_per_one_dollar = 0.88; 
	constexpr double euros_per_one_yen = 0.0082;
	constexpr double euros_per_one_yuan = 0.13;
	double amount = 1;
	string target_currency = " ";

	cout << "Please enter an amount of money in euro:\n"
	     << "Please enter the target currency (d/ye/yu):\n"; 

	cin >> amount 
	    >> target_currency;

	cout << amount << " e == ";

	if (target_currency == "d")
	    cout << amount / euros_per_one_dollar << " d\n";
	else if (target_currency == "ye")
	    cout << amount / euros_per_one_yen << " ye\n";
	else if (target_currency == "yu")
		cout << amount / euros_per_one_yuan << " yu\n";
	else
	    cout << "error : I don't know a currency called '" << target_currency << "'\n";
}