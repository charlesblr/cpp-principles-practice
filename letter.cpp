// read name and age (2nd version)

#include "std_lib_facilities.h"

int main() {

    string first_name = "???"; 
    string friend_name = "???";
    char friend_sex = 0;
    int age = 0;

    cout << "Enter the name of the person you want to write to\n"
    	 << "Enter the name of another friend\n"
    	 << "Enter the sex of your other friend (m/f)\n"
    	 << "Enter the age of the person you write to\n";

    cin >> first_name
        >> friend_name
        >> friend_sex
        >> age;

    cout << "Dear " << first_name << ",\n"
         << "\tHow are you? "
         << "I wish you were here. "
         << "Have you heard of " << friend_name << " lately? ";

    if (friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me. ";
    else 
    	cout << "If you see " << friend_name << " please ask her to call me. ";

    cout << "I heard it was just your birthday and you are " << age << " years old. ";

    if (age >= 110 || age <= 0)
    	simple_error("you're kidding!");


    if (age <= 12)
    	cout << "Next year you will be " << age + 1 << ".\n";

    if (age == 17)
    	cout << "Next year you will be allowed to vote.\n";

    if (age >= 70)
    	cout << "I hope you are enjoying retirement.\n";

    cout << "Yours sincerely" 
         << "\n"
         << "\n"
         << "Charles";
}
