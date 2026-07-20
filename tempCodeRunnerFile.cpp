#include <iostream>
using namespace std;

struct Pokemon {

    string name = "onix";
    string type = "rock/ground";
    int health = 35;
    int attack = 45;
    int defense = 160;
    int sp_attack = 30;
    int sp_defense = 45;
    int speed = 70;


};


int main()
{

    Pokemon onix;
    cout << "Name: " << onix.name << endl;
    cout << "Type: " << onix.type << endl;
    cout << "Health: " << onix.health << endl;
    cout << "Attack: " << onix.attack << endl;
    cout << "Defense: " << onix.defense << endl;
    cout << "Special Attack: " << onix.sp_attack << endl;
    cout << "Special Defense: " << onix.sp_defense << endl;
    cout << "Speed: " << onix.speed << endl;

    return 0;
};