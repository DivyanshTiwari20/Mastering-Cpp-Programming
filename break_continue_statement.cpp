#include <iostream>
using namespace std;

int main() {
    cout << "This is the example of break statement:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
        if (i == 4) {
            break;
        }
    }

    cout << endl;
    cout << "This is the example of continue statement:" << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue; // Skip the iteration when i is 4
        }
        cout << i << endl; // This line will now execute for all other values of i
    }

    return 0;
}