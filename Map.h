//
// Created by Nimer Abraham Ennabe on 1/23/17.
//

#ifndef MAP_H
#define MAP_H

#include <map>
#include <iostream>
#include <list>
#include <iterator>
#include <array>

using namespace std;

class Node
{
public:
    string Key;
    int value;
    Node(string key, int value)
    {
        this->Key = key;
        this->value = value;
    }
};


class Map
{

public:
    Map();

    const static int size = 10000;
    std::array<std::list<Node*>,size> buckets;


    void put(string key, int value);
    int get(string key);
    bool exists(string key);
    bool remove(string key);
    int hash(string key);
    void print();
};


#endif // MAP_H
