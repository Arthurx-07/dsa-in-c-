#include<iostream>
using namespace std ;

int main ( ){

    int x = 10 ;

    int* xptr = &x ;
    int** xxptr = &xptr;
    int*** xxxptr = &xxptr ;

    cout << "x = " << x << endl;
    cout << "*xptr = " << *xptr << endl ;
    cout << "**xptr = " << **xxptr << endl;
    cout << "***xptr = " << ***xxxptr << endl;
     
 
    return 0 ;
}