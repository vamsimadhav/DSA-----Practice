#include <iostream>
using namespace std;

int main() {

    cout << "Printing a Rectangle * Pattern" << endl;
    cout << "Print no of rows and columns" << endl;
    int row;
    int column;
    cin >> row;
    cin >> column;

    if (!(column > row)) {
        cout << "Colum should be greater than row";
        return 0;
    }

    for (int i=0; i<row; i++) {
        for(int j=0; j<column; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;

}
