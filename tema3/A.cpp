#include <iostream>
#include <string>
#include <memory>
#include <random>
#include <functional>

using namespace std;


class Pokemon {
    public:
        int number;
        string name;

    public:
        Pokemon(int number, string name): number(number), name(name) { }

    // item 14 prohibit copy
    private: 
        Pokemon(const Pokemon& pokomon);

    public:
        Pokemon* createPikachu() {
            Pokemon *pikachu = new Pokemon(1, "Picachu");
            return pikachu;
        }

    public:
        bool fightPickachu() {
            std::auto_ptr<Pokemon> pokemon(createPikachu());
	        int random = rand() % 2;
            return random;
    }
};

int main() {
    srand((unsigned) time(NULL));

    Pokemon eevee(2, "Eevee");
    for (int i = 0; i < 10; i++) {
        cout << eevee.name;
        if (eevee.fightPickachu()) {
            cout << " won";
        } else {
            cout << " lost";
        }
        cout << " against Pikachu." << endl;
    }
    return 0;
}