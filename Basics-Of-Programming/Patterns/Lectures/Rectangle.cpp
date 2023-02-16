#include<iostream>
using namespace std;

int main(){
    //solid rectangle
    /*int rowcount,colcount;
    cout << "Enter number of rows" ;
    cin >> rowcount ;
    cout << "Enter number of columns" ;
    cin >> colcount ;
    int row,col;
    for(row=0;row<rowcount;row++){
        for(col=0;col<colcount;col++){
            cout << " * ";
        }
        cout << endl;
    }*/

    //Hollow Rectangle
    int rowcount,colcount;
    cout << "Enter number of rows: ";
    cin >> rowcount;
    cout << "Enter number of columns: ";
    cin >> colcount;
    int row,col;
    for(row=0;row<rowcount;row++){
        if(row==0 || row == rowcount-1){
            for(col=0;col<colcount;col++){
                cout << " * ";
            }
        }
        else{
            cout << " * ";
            for (col=0;col<colcount-2;col++){
                cout<< "   ";
            }
            cout << " * ";
        }
        cout << endl;
    }
}