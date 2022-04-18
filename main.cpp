
#include <iostream>
#include <string>
using namespace std;

int main() {

    int fav_number[5] {};

    cout << fav_number[3] <<endl;


    return 0;
}

void cpp_strings() {

    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----

    string first;
    string second;

    journal_entry_1.erase(0,7);

    if (journal_entry_1 > journal_entry_2) {
        first=journal_entry_2;
        second= journal_entry_1;

        journal_entry_1=first;
        journal_entry_2=second;


    }

    journal_entry_1[0]= toupper(journal_entry_1[0]);

    journal_entry_2[0]= toupper(journal_entry_2[0]);







    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----

    cout << journal_entry_1 << "\n" << journal_entry_2;
}