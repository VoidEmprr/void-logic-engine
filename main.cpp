#include <iostream>
using namespace std;

int main()
{

    bool gameloop = true;
    while (gameloop)
    {
        cout << "Welcome tu de Logic Game!" << endl;
        // ini apa yak, ininya jangan di iniin gitu nah
        int choice = 0;
        cout << "menu: " << flush;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Informatics" << endl;
        }
        else if (choice == 2)
        {
            cout << "Logic" << endl;
        }
        else if (choice == 3)
        {
            cout << "Math" << endl;
        }
        else if (choice == 4)
        {
            gameloop = false;
        }
        else
        {
            cout << "coming soon" << endl;
        }
    }

    return 0;
}
