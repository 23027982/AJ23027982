#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string interest;
    char personality;

    // Taking input from the user
    cout << "Welcome! Let's find you a partner.\n";
    cout << "Please answer the following questions:\n";

    cout << "How old are you? ";
    cin >> age;

    cout << "What are your interests? ";
    cin >> interest;

    cout << "Describe your personality using a single letter (E for extroverted, I for introverted): ";
    cin >> personality;

    // Choosing a partner based on criteria
    if (age >= 18) {
        if (interest == "christianity" || interest == "wealth") {
            if (personality == 'I') {
                cout << "You should consider someone who shares your interests in chrstianity or wealth, and who is also introverted.\n";
            } else {
                cout << "You should consider someone who shares your interests in christianity or wealth.\n";
            }
        } else if (interest == "sports" || interest == "gaming") {
            if (personality == 'E') {
                cout << "You should consider someone who shares your interests in sports or gaming, and who is also extroverted.\n";
            } else {
                cout << "You should consider someone who shares your interests in sports or gaming.\n";
            }
        } else {
            cout << "You have unique interests! You should look for someone who appreciates them.\n";
        }
    } else {
        cout << "Sorry, you must be at least 18 years old to use this service.\n";
    }

    return 0;
}
