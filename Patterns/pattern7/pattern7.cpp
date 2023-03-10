#include <iostream>
using namespace std;

int main() {

    cout << "Printing a Inverted Numeric Half Pyramid * Pattern" << endl;
    cout << "Print no of rows" << endl;
    int row;
    cin >> row;

    for (int i=0; i < row; i++) {
        for(int j=row; j >i; j--){
            cout <<j-i;
        }
        cout << endl;
    }

    return 0;

}
