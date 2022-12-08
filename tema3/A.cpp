#include <iostream>
#include <string>
#include <memory>

using namespace std;


class Pokemon {
    public:
        int number;
        string str;

    public:
        Pokemon(int number, string str): number(number), str(str) { }

    // item 14 prohibit copy
    private: 
        Pokemon(const Pokemon& pokomon);

    public:
        Pokemon* createObjectA(int number, string str) {
            Pokemon *pokemon = new Pokemon(number, str);
            return pokemon;
        }

    public:
        void fightPickachu() {
            std::auto_ptr<Pokemon> pokemon(createObjectA(0, "Pikachu"));
    }
};

int main() {
    Pokemon pokemon(1, "Eevee");
    pokemon.fightPickachu();
    return 0;
}