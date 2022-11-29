#include <iostream>
#include <string> 
using namespace std;

class Item10 {       
  public:             
    int page;        
    std::string content; 

     public:
        Item10(int page, std::string content): page(page), content(content) { }

    Item10& operator=(const Item10& rhs)
    {
        return *this;
    }
};

int main() {
    Item10 item10_a(52, "int x, y, z; \nx = y = z = 15; // chain of assignments");
    cout << "-----------------------start--------------------------------\n";
    cout << "ITEM10_A\n";
    cout << "Page: " << item10_a.page << "\nContent:\n" << item10_a.content << endl;
    cout << "------------------------end----------------------------------\n\n";


    cout << "-----------------------start--------------------------------\n";
    cout << "ITEM10_B COPY of A\n";
    Item10 item10_b(item10_a);
    cout << "Page: " << item10_b.page << "\nContent:\n" << item10_b.content << endl;
    cout << "------------------------end----------------------------------\n\n";

    item10_b.page = 53;
    item10_b.content = "class Widget { \n    public:\n    ...\n    Widget& operator+=(const Widget& rhs)\n    {\n        ...  \n        return *this; \n    }\n\n    Widget& operator=(int rhs) \n    { \n        ...    \n        return *this;    \n    }\n}"; 

    
    cout << "-----------------------start--------------------------------\n";
    cout << "ITEM10_A AFTER COPY\n";
    cout << "Page: " << item10_a.page << "\nContent:\n" << item10_a.content << endl;
    cout << "------------------------end----------------------------------\n\n";
    cout << "-----------------------start--------------------------------\n";
    cout << "ITEM10_B AFTER COPY\n";
    cout << "Page: " << item10_b.page << "\nContent:\n" << item10_b.content << endl;
    cout << "------------------------end----------------------------------\n\n";
    return 0;
}