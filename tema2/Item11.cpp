#include <iostream>
#include <string> 
using namespace std;

class Item11 {       
  public:             
    int page;        
    std::string content; 

     public:
        Item11(int page, std::string content): page(page), content(content) { }


    Item11& operator=(const Item11& item) {
        if (this == &item) 
        {
            cout << "Self assigment" << endl;
            return *this;
        }
        cout << "Not self assigmnet" << endl;
        content.erase();
        content = item.content;
        return *this;
    }
};

int main() {
    Item11 item11_a(53, "Widget& Widget::operator=(const Widget& rhs) \n{ \n    Bitmap *pOrig = pb;       // remember original pb \n    pb = new Bitmap(*rhs.pb); // point pb to a copy of rhs’s bitmap \n    delete pOrig;             // delete the original pb \n    return *this; \n}");
    Item11 item11_b(56, "An alternative to manually ordering statements in operator= to make sure the implementation is both exception- and self-assignment-safeis to use the technique known as \ncopy and swap.\"\n");
    Item11 item11_c(56, "The traditional way to prevent this error is to check for assignment to self via an identity test at the top of operator=:");

    item11_a = item11_a;
    item11_a = item11_b;
    item11_a = item11_c;
    item11_a = item11_a;
    return 0;
}