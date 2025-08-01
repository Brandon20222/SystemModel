#ifndef SWORD_H
#define SWORD_H
#include "Weapon.h"
#include <iostream>
using namespace std;

class Sword :
    public Weapon
{
private:
    const string weaponType = "Sword";
public:
    //Constructors
    Sword();
    Sword(double doesDamage,string level);
    //Getters and setters
    // Redefined virtual functions 
    string swingType()const override;
    string finisherMove()const override;
    std::ostream& attack(std::ostream& strm)const override;
    std::ostream& weaponLevelDesc(std::ostream& strm)const override;


};

#endif

