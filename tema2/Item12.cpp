#include <iostream>
#include <string> 
using namespace std;

class Item12 {       
  public:             
    int page;        
    std::string content; 

     public:
        Item12() { }
        Item12(int page, std::string content): page(page), content(content) { }

    public: 
      Item12(const Item12& item) {
          cout << "\tenters in copy consturctor" << endl;
          copy(item);
      }

    public:
        Item12& operator=(const Item12& item) {
          cout << "\tenters copy operator" << endl;
          copy(item);
          return *this;
        }

    private:
      void copy(const Item12& item) {
          page = item.page;
          content = item.content;
      }
};

int main() {
    Item12 item12(1, "content");

    cout << "COPYING WITH CONSTRUCTOR" << endl;
    Item12 copy_of_item12_constructor(item12);
    cout << "\t" << copy_of_item12_constructor.content << endl;

    cout << "COPYING WITH OPERATOR" << endl;
    Item12 copy_of_item12_operator;
    copy_of_item12_operator = item12;
    cout << "\t" << copy_of_item12_operator.content << endl;

    cout << "CHANGE CONTENT AFTER COPYING" << endl;

    copy_of_item12_constructor.content = "modified for opy_of_item12_constructor";
    copy_of_item12_operator.content = "modified by copy_of_item12_operator";

    cout << "\t" <<  item12.content << endl;
    cout << "\t" << copy_of_item12_constructor.content << endl;
    cout << "\t" << copy_of_item12_operator.content << endl;
    return 0;
}