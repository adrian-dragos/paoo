#include <iostream>
#include <string> 
using namespace std;

class A {       
  private:             
    int number;        
    std::string str; 

    A(int number, std::string str) {
        this->number = number;
        this->str = str;
    }

    A(const A& a) {
        cout << "Calling copy constructor\n";
        this->number = a.number;
        this->str = a.str;
    }

    private: 
        A(A && obj);

    private:
        A& operator=(A&&);


};

int main() {
    cout << "hello";
    return 0;
}