//
// Created by jdaehn on 12/27/2022.
//

#include "VectorBag.h"

template<typename ItemType>
int VectorBag<ItemType>::getCurrentSize() const
{
    return items.size();
}

template<typename ItemType>
bool VectorBag<ItemType>::isEmpty() const
{
    return items.empty();
}

template<typename ItemType>
bool VectorBag<ItemType>::add(const ItemType& item )
{
    items.push_back(item);
    return true;
}

template<typename ItemType>
bool VectorBag<ItemType>::remove(const ItemType& item )
{
    typename std::vector<ItemType>::iterator firstOccurrence;
    bool removed{ false };
    for (auto it = items.begin(); it != items.end(); ++it)
    {
        if (*it == item)
        {
            firstOccurrence = it;
            removed = true;
            break;
        }
    }
    items.erase(firstOccurrence);
    return removed;
}

template<typename ItemType>
void VectorBag<ItemType>::clear()
{
    items.clear();
}

template<typename ItemType>
int VectorBag<ItemType>::getFrequencyOf(const ItemType& item ) const
{
    return std::count(items.cbegin(), items.cend(), item);
}

template<typename ItemType>
bool VectorBag<ItemType>::contains(const ItemType& item ) const
{
    for ( auto currentItem : items )
    {
        if (currentItem == item)
            return true;
    }
    return false;
}

template<typename ItemType>
std::vector<ItemType> VectorBag<ItemType>::toVector() const
{
    return std::vector<ItemType>();
}
