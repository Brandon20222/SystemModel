#ifndef SPEAR_H
#define SPEAR_H
#include "Weapon.h"
class Spear :
    public Weapon
{
private:
    const string weaponType = "Spear";

public:
    //Constructors
    Spear();
    Spear(double doesDamage,string level);
    // Redefined virtual functions 
    string swingType()const override;
    string finisherMove()const override;
    std::ostream& attack(std::ostream& strm)const override;
    std::ostream& weaponLevelDesc(std::ostream& strm)const override;


};

#endif

