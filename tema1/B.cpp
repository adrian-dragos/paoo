#include <iostream>
#include <string> 
using namespace std;

class B {       
    public:             
        string str; 

    B(int number, std::string str) {
        this->str = str;
    }

    private: B(const B& b);


    B(B && b) {
        cout << "Calling move constructor\n";
        this->str = b.str;
        b.str = "";
    } 

    private:
        B& operator=(const B&);

};

int main() {
    cout << "hello";
    return 0;
}