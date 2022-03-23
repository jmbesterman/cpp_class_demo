//Jeremy Besterman
// Created by jmbesterman on 3/23/22.
// main driver is main.cpp

#include <string>
#include <iostream>
using namespace std;
#include "Bird.h"

int main(){
    cout << "Tweet Tweet, chirp" << endl;

    Bird robin("Robin");
    cout << robin.get_seeds() << endl;
    return 0;
}

