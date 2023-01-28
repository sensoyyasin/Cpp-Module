#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie();

    Zombie(std::string name);

    ~Zombie();

    void announce( void );

    //Private degiskenimi her yerden cagirabilmemi saglar.
    void setName(std::string name)
    {
        this->name = name;
    };
};

Zombie*    zombieHorde( int N, std::string name );

#endif