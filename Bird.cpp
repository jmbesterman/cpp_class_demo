// Jeremy Besterman
// Created by jmbesterman on 3/23/22.
// Bird class file Bird.cpp

#include "Bird.h"
using namespace std;
#include <iostream>

Bird::Bird(string species)
: bird_type{species}
{}

int Bird::get_seeds(){
    return this->seeds;
}