#include <iostream>
#include <string>

//init vars
using namespace std;
int reps;
string phrase;

int main() {

    cout << "This program will take your input as a string and then output it the amount of times you request. Please input the text you want repeated." << endl;
    getline(cin, phrase);
    cout << "Now please enter the amount of times this should be repeated (number form)" << endl;
    cin >> reps;
    for(int i = 0; i <= reps; i++) {
        cout << phrase << endl;
    }
}