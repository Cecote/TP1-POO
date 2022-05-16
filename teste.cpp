#include <bits/stdc++.h>
using namespace std;

int main() {
    // Defining enum Gender
    enum Gender { Male, Female };

    // Creating Gender type variable
    Gender gender = Male;

    switch (gender) {
        case Male:
            cout << "Gender is Male" << endl;
            break;
        case Female:
            cout << "Gender is Female" << endl;
            break;
        default:
            cout << "Value can be Male or Female";
    }
    return 0;
}