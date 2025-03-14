#include<iostream>
using namespace std ;

void print( char path[][10], int m , int n ){

    for ( int i = 0 ; i < m ; i++ ){
        for ( int j = 0 ; j < n ; j++ ){
            cout << path[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
}
void f( char maze[][10], char path[][10], int m , int n , int i , int j ){
    // base case 
    if ( i == m || j == n ){
        // we are outside the matrix 
        return ;
    }
    if ( maze[i][j] == 'X'){
        return ;
    }
    if( i == m-1 and j == n-1 ){
        // we reach the destination 
        path[i][j] = '1' ;
        print(path,m,n);
        return ; 
    }

    // recursive case 
    path[i][j] = '1';
    f(maze,path,m,n,i,j+1);
    f(maze,path,m,n,i+1,j);
    path[i][j] = '0' ;

}
int main () {

    char maze[][10] = {
        "0000",
        "00X0",
        "000X",
        "0X00",
    };
    
    int m = 4 ;
    int n = 4 ;

    char path[][10] = {
        "0000",
        "0000",
        "0000",
        "0000",

    };

    f(maze,path,m,n,0,0) ;

    return 0 ; 
}