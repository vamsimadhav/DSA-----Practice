#include <iostream>
using namespace std;

int main() {

    cout << "Printing a Half Pyramid * Pattern" << endl;
    cout << "Print no of rows" << endl;
    int row;
    cin >> row;

    for (int i=0; i<row; i++) {
        for(int j=0; j<i+1; j++){
            cout <<"* ";
        }
        cout << endl;
    }

    return 0;

}
