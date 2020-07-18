#include "std_lib_facilities.h"

int main() {

	vector<double> temps;

    int no_of_temps = 0;
    double sum = 0; 
    double high_temp = 1000; 
    double low_temp = -1000;

    for (double temp; cin >> temp; ) {
       ++no_of_temps;
       sum += temp;
       if(temp > high_temp) high_temp = temp; 
       if(temp < low_temp) low_temp = temp; 
    }

    cout << "High temperature: " << high_temp<< '\n';
    cout << "Low temperature: " << low_temp << '\n';
    cout << "Average temperature: " << sum/no_of_temps << '\n';
}