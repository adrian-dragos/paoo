#include <iostream>
#include <string> 
using namespace std;

class B {       
    public:             
        std::string str; 

    public:
        B(std::string str) : str(str) {}

    private: B(const B& b);

    public:
        B(B && b) {
            cout << "Calling move constructor\n";
            this->str = b.str;
            b.str = "";
        } 

    private:
        B& operator=(const B&);
};

int main() {
    B *b = new B("hello");
    cout << b->str << endl;

    B move_b((B&&)*b);
    cout << b->str << endl;
    cout << move_b.str << endl;
    return 0;
}