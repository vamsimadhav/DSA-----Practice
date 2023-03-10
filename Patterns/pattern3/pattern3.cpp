#include <iostream>
using namespace std;

int main() {

    cout << "Printing a Hollow * Pattern" << endl;
    cout << "Print no of rows and columns" << endl;
    int row;
    int column;
    cin >> row;
    cin >> column;

    for (int i=0; i<row; i++) {
        if(i == 0 || i == row -1) {
            for(int j=0; j<column; j++) {
                cout << "* ";
            }
        } else {
            cout << "* ";
            for(int spaces = 0; spaces<column-2; spaces++) {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }

    return 0;

}
