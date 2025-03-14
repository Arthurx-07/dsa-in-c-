#include<iostream>
#include<deque>

using namespace std ;

template <typename T > 
class stack {

    deque<T> d ;

    public : 

    void push( T val ) {
        d.push_front(val) ;

    }

    void pop() {
        if ( empty() ){
            return ;
        }
        d.pop_front();

    }

    int size() {
        return d.size();
    }

    int empty() {
       return  d.empty();
    }
    T top() {
       return d.front();
    }
};
int main () {

    stack<int> s ;

    cout << " size : " << s.size() << endl;
    cout << "isempty ? " << s.empty() << endl;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "size : " << s.size() << endl;
    cout << "top : " << s.top() << endl;
    cout << " isempty ? " << s.empty() << endl;

    s.pop(); 
    cout << " size : " << s.size() << endl;
    cout << " top " << s.top() << endl;

    s.pop() ;
    cout << " size : " << s.size() << endl;
    cout << " top " << s.top() << endl;

    return 0 ; 
}