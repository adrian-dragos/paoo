#include <iostream>
#include <string> 
using namespace std;

class Individual {

public:             
    int page;        
    std::string content; 

public:
    Individual(int page, std::string content): page(page), content(content) { }

public:
	Individual& operator= (Individual &target) {
        return *this;
    };
};


int main() 
{
    return 0;
}