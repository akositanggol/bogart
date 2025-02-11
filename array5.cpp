#include <iostream>
using namespace std;

int main() {
    char x[100]; // Increased size to handle larger names
    char y;
    int z;

    cout << "Enter a name: ";
    cin >> x;
    cout << "You entered " << x << endl;

    cout << "Enter letter to search: ";
    cin >> y;

    for (z = 0; x[z] != '\0'; z++) 
    {
        if (y == x[z]) 
        {
            cout << y << " is located at array[" << z << "]" << endl;
        }
    }

    return 0;
}