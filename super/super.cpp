#include <iostream>
using namespace std;

class Ability {
public:
    virtual void useAbility() const = 0;
};

class FlyingAbility : public Ability {
public:
    void useAbility() const {
        cout << "Fly\n";
    }
};

class SuperStrengthAbility : public Ability {
public:
    void useAbility() const {
        cout << "Strength\n";
    }
};

class ImmortalAbility : public Ability {
public:
    void useAbility() const {
        cout << "Immortal\n";
    }
};

class Race {
public:
    virtual void printRace() const = 0;
};

class HumanoidTree : public Race {
public:
    virtual void printRace() const {
        cout << "Humanoid Tree\n";
    }
};

class Kiborg : public Race {
public:
    virtual void printRace() const {
        cout << "Kiborg\n";
    }
};

class Animal : public Race {
public:
    virtual void printRace() const {
        cout << "Animal\n";
    }
};

class TitanianEternals : public Race {
public:
    virtual void printRace() const {
        cout << "Titan\n";
    }
};

class Centaurian : public Race {
public:
    virtual void printRace() const {
        cout << "Centaurian\n";
    }
};

class Good {
public:
    virtual void printLigment() const {
        cout << "Good\n";
    }
};

class Evil {
public:
    virtual void printLigment() const {
        cout << "Evil\n";
    }
};

class SuperHero {
public:
    virtual void printAbilities() const = 0;
    virtual void printRace() const = 0;
    virtual void printLigment() const = 0;
};

class Thanos : public SuperHero, public SuperStrengthAbility, public Evil, public TitanianEternals {
public:
    void printAbilities() const {
        cout << "Thanos: \n";
        SuperStrengthAbility::useAbility();
    }

    void printRace() const {
        TitanianEternals::printRace();
    }

    void printLigment() const {
        Evil::printLigment();
    }
};

class Rocket : public SuperHero, public SuperStrengthAbility, public Good, public Animal {
public:
    void printAbilities() const {
        cout << "Rocket: \n";
        SuperStrengthAbility::useAbility();
    }

    void printRace() const {
        Animal::printRace();
    }

    void printLigment() const {
        Good::printLigment();
    }
};

class Groot : public SuperHero, public SuperStrengthAbility, public Good, public HumanoidTree {
public:
    void printAbilities() const {
        cout << "Groot: \n";
        SuperStrengthAbility::useAbility();
    }

    void printRace() const {
        HumanoidTree::printRace();
    }

    void printLigment() const {
        Good::printLigment();
    }
};

class Nebula : public SuperHero, public ImmortalAbility, public Evil, public Kiborg {
public:
    void printAbilities() const {
        cout << "Nebula: \n";
        ImmortalAbility::useAbility();
    }

    void printRace() const {
        Kiborg::printRace();
    }

    void printLigment() const {
        Evil::printLigment();
    }
};

class Yondu : public SuperHero, public FlyingAbility, public Good, public Centaurian {
public:
    void printAbilities() const {
        cout << "Yondu: \n";
        FlyingAbility::useAbility();
    }

    void printRace() const {
        Centaurian::printRace();
    }

    void printLigment() const {
        Good::printLigment();
    }
};

int main() {
    setlocale(LC_ALL, "");

    Thanos thanos;
    thanos.printAbilities();
    thanos.printRace();
    thanos.printLigment();

    Rocket rocket;
    rocket.printAbilities();
    rocket.printRace();
    rocket.printLigment();

    Groot groot;
    groot.printAbilities();
    groot.printRace();
    groot.printLigment();

    Nebula nebula;
    nebula.printAbilities();
    nebula.printRace();
    nebula.printLigment();

    Yondu yondu;
    yondu.printAbilities();
    yondu.printRace();
    yondu.printLigment();
}
