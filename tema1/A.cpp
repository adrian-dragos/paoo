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
    A *a = new A(1, "hello");
    cout << a->number << " " << a->str << endl;
    return 0;
}