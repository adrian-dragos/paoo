#include <iostream>
#include <string> 
using namespace std;

class A {       
  public:             
    int number;        
    std::string str; 

    public:
        A(int number, std::string str): number(number), str(str) { }

    public:
        A(const A& a) {
            number = a.number;
            str = a.str;
        }

    private: 
        A(A && obj);

    private:
        A& operator=(A&&);
};

int main() {
    A a(1, "hello");
    cout << a.number << " " << a.str << endl;
    A copy_of_a(a);
    cout << copy_of_a.number << " " << copy_of_a.str << endl;

    a.number = 5;
    a.str = "ceva";
    cout << a.number << " " << a.str << endl;
    cout << copy_of_a.number << " " << copy_of_a.str << endl;

    return 0;
}