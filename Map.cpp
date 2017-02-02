//
// Created by Nimer Abraham Ennabe on 1/23/17.
//

#include "Map.h"


Map::Map()
{

}

void Map::put(string key, int value)
{
    Node *node = new Node(key, value);
    buckets[hash(key)].push_front(node);
}

int Map::get(string key)
{

    if(buckets[hash(key)].empty())
        return -1;

    auto l_front = buckets[hash(key)].begin();
    for(int pos=0;pos<buckets[hash(key)].size();pos++)
    {
        if((*l_front)->Key == key)
        {
            return (*l_front)->value;
        }
        std::advance(l_front, 1);
    }
    return -1;
}

bool Map::exists(string key)
{
    return (get(key) != -1);
}

bool Map::remove(string key)
{
    list<Node*> List = buckets[hash(key)];

    if(List.empty())
        return false;

    auto l_front = List.begin();
    for(int pos=0;pos<List.size();pos++)
    {
        if((*l_front)->Key == key)
        {
            buckets[hash(key)].erase(l_front);
            return true;
        }
        std::advance(l_front, 1);
    }
    return false;
}

int Map::hash(string key)
{
    int suma =0;
    for(int i=0;i<key.size();i++){
        suma += key[i];
    }
    return suma%size;
}

void Map::print()
{
    for(int i=0;i<buckets.size();i++) {
        for (int pos = 0; pos < buckets[i].size(); pos++)
        {
            auto l_front = buckets[i].begin();
            std::advance(l_front, pos);
            cout<<"Key:"<<(*l_front)->Key<<" Value:"<<(*l_front)->value<<" + ";
        }
        if(!buckets[i].empty())
            cout<<endl;
    }
}
