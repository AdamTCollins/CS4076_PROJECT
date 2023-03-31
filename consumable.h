#ifndef CONSUMABLE_H
#define CONSUMABLE_H
#include <string>

using namespace std;

// Abstract Consumable Class
class consumable
{

public:
    // Friendship
    friend class emptytitle;

    consumable(){
        name = new string();
    }


    // Pure Virtual Function
    virtual void getName() = 0;

    // Copy Constructor
    consumable(const consumable& copy){
        name = new string();
        *(this->name) = *(copy.name);
    }
    // Destructor
    ~consumable(){
        delete name;
    }

protected:
    string* name; // inhertiable instance variable
};


#endif // CONSUMABLE_H
