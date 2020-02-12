#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;

/*
Summary of class Inventory:
Keeps track of an inventory item by name, including price and stock.

String m_name: Name of the inventory item
Float m_price: Price of the inventory item
Int m_in_stock: Quantity of the inventory item

Void sell() subtracts one from the stock quantity
The item price can be be printed from outside of this class using <<InventoryInstance
*/

class Inventory
{
  private:
    string m_name;
    float m_price;
    int m_in_stock;

  public:
    Inventory(string,float,int);
    void sell();
    friend ostream& operator<<(ostream&, const Inventory&);
};

#endif