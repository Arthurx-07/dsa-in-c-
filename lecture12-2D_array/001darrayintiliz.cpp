#include<iostream>
using namespace std ;

int main () {

    int arr[3][4] = { 
        {10,15,20,25},
        {30,35,40,45},     
        {50,50,60,65}
    };
    int m = 3 ;
    int n = 4 ;

    for ( int i = 0 ; i <= m-1; i++) {

        for ( int j = 0 ; j<= n-1; j++ ){

            cout << arr[i][j] << " " ;

        }
        cout << endl;
    }


    return 0; 
}