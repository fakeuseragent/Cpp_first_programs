#pragma once

#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

class Inventory
{
    private:
      vector<pair<string, int> > inv;
    public:
    void addItem();
    void removeItem();
    void showInventory();

};