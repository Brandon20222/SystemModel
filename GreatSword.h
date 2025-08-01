#ifndef GREATSWORD_H
#define GREATSWORD_H
#include "Sword.h"

class GreatSword :
    public Sword
{
private:
    const string weaponType = "GreatSword";
public:
    // Constructors
    GreatSword();
    GreatSword(double doesDamage, string level);
    // Redefined virtual Functions
    string swingType()const override;
    string finisherMove()const override;
    std::ostream& attack(std::ostream& strm)const override;
    std::ostream& weaponLevelDesc(std::ostream& strm)const override;
    string specialClassMove()override;
};

#endif
