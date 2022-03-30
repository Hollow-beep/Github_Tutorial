#include <iostream>
using namespace std;

class A
{
private:
    
public:
    A(){
        cout << "A";
    }
    ~A(){
        cout << "B";
    }
};

class B
{
private:
    
public:
    B(){
        cout << "C";
    }
    ~B(){
        cout  << "D";
    }
};

void arg(B &b){}

int main(){
    B b;
    arg(b);
    return 0;
}
