#include <iostream>
using namespace std;

int main() {
    cout << "Welcome tu de Logic Game!" << endl;
    // ini apa yak, ininya jangan di iniin gitu nah
    int input = 0;
    cout << "jawab: " << flush;
    cin >> input;
    if (input == 1) {
        cout << "Informatics" << endl;
    } else if (input == 2) {
        cout << "Logic" << endl;
    } else {
        cout << "coming soon" << endl;
    }    return 0;
}
