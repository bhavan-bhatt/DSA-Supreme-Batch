#include<iostream>
using namespace std;

int main(){
    // Numeric Half Pyramid
    /*int rowcount,row,col;
    cout << "Enter number of rows: ";
    cin >> rowcount;
    for(row=0;row<rowcount;row++){
        for(col=0;col<row+1;col++){
            cout << col + 1;
        }
        cout << endl;
    } */
     // Inverted Numeric Half Pyramid
    int rowcount,row,col;
    cout << "Enter number of rows: ";
    cin >> rowcount;
    for(row=0;row<rowcount;row++){
        for(col=0;col<rowcount - row;col++){
            cout << col + 1;
        }
        cout << endl;
    }
}