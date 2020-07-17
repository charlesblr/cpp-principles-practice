// Number conversion with for loop

#include "std_lib_facilities.h"

int main() {

	for(int i = 65; i < 123; i++) {
		if(i < 91 || i > 96) {
		    cout << char(i) << "\t" << i << "\n";
		}
	}
}