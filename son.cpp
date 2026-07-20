#include <iostream>
#include <unordered_map>
#include <string>
#include <fstream>

using namespace std;

struct Pokemon {

    string name;
    string type;
    int health;
    int attack;
    int defense;
    int sp_attack;
    int sp_defense;
    int speed;


};

Pokemon createPokemon(string nameph , string typeph , int healthph , int attackph , int defenseph , int sp_attackph , int sp_defenseph , int speedph)
    {
        Pokemon temp;
        temp.name = nameph;
        temp.type = typeph;      
        temp.health = healthph;
        temp.attack = attackph;
        temp.defense = defenseph;
        temp.sp_attack = sp_attackph;
        temp.sp_defense = sp_defenseph;
        temp.speed = speedph;

        return temp;
    };

int main()
{
    unordered_map <string , Pokemon> Pokedex;

    string n;
    string t;
    int h;
    int a;
    int d;
    int sa;
    int sd;
    int s;
    int count = 1;
    int l;

    // 1. Create the file reader object and target the file
    ifstream myFile("pokemon.csv");

    // 2. Security check: Did it open successfully?
    if (myFile.is_open()) {
        cout << "File opened successfully!" << endl;
    
    // We will put the reading logic here!
    
    } 
    else {
        cout << "ERROR: Could not find or open the file." << endl;
    }


    return 0;
};