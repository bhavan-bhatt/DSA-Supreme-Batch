#include<iostream>
using namespace std;

int main(){
    //Full Pyramid
    /*int rowcount,row,col;
    cout << "ENter number of Rows :";
    cin >> rowcount;
    for(row=0;row<rowcount;row++){
        for(col=0;col<rowcount - row -1;col++){
            cout << " ";
        }
        for(col=0;col<row+1;col++){
            cout << "* ";
        }
        cout << endl; */
    //Inverted Full Pyramid
    int rowcount,row,col;
    cout << "ENter number of Rows :";
    cin >> rowcount;
    for(row=0;row<rowcount;row++){
        for(col=0;col<rowcount - row -1;col++){
            cout << " ";
        }
        for(col=0;col<row+1;col++){
            cout << "* ";
        }
        cout << endl;
    }
}