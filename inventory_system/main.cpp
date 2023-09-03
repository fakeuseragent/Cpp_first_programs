#include "main.hpp"


#define MAX_WEIGHT 100
#define MAX_COUNT 100

void Inventory::addItem() 
{
    string name;
    int weight;
    cout << "Enter the name of the item: ";
    cin >> name;
    cout << "Enter the weight of the item: ";
    cin >> weight;
    if (weight > MAX_WEIGHT){cout << "The weight of the item is too high." << endl; return;}
    else if (weight < 1){cout << "The weight of the item is negative." << endl; return;}
    else if (inv.size() >= MAX_COUNT){cout << "The inventory is full." << endl; return;}
    else {inv.push_back(make_pair(name, weight));}
}

void Inventory::removeItem()
{
    string name;
    cout << "Enter the name of the item: ";
    cin >> name;
    for (int i = 0; i < inv.size(); i++)
    {
        if (inv[i].first == name)
        {
            inv.erase(inv.begin() + i);
            break;
        }
    }
}

void Inventory::showInventory()
{
    for (int i = 0; i < inv.size(); i++)
    {
        cout <<i+1<<" "<< inv[i].first << " " << inv[i].second << endl;
    }
}

int main()
{
    Inventory *inv = new Inventory;

    while (true)
    {
        
        cout << "1. Add item" << endl;
        cout << "2. Remove item" << endl;
        cout << "3. Show inventory" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            inv->addItem();
            system("clear");
            
            break;
        case 2:
            inv->removeItem();
            system("clear");
            
            break;
        case 3:
            inv->showInventory();
            usleep(3000000);
            system("clear");
            break;
        case 4:
            delete inv;
            system("clear");
            return 0;
        default:
            cout << "Invalid choice." << endl;
        }
    }


    return 0;
}