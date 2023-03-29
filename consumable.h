#ifndef CONSUMABLE_H
#define CONSUMABLE_H
#include <string>

using namespace std;

// Consumable Class
class consumable
{

public:
    consumable();
    consumable(string name);

    // Pure Virtual Function
    virtual void getName() = 0;

private:
    string name;
};


#endif // CONSUMABLE_H
