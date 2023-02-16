#include<iostream>
using namespace std;

int main(){
    // Half Pyramid
    /*int rowcount,row,col;
    cout << "Enter number of rows: ";
    cin >> rowcount;
    for(row=0;row<rowcount;row++){
        for(col=0;col<row+1;col++){
            cout << " * ";
        }
        cout << endl;
    } */
    // Inverted Half Pyramid
    int rowcount,row,col;
    cout << "Enter number of rows: ";
    cin >> rowcount;
    for(row=0;row<rowcount;row++){
        for(col=0;col<rowcount - row;col++){
            cout << " * ";
        }
        cout << endl;
    }

}