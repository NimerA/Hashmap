//
// Created by Nimer Abraham Ennabe on 1/23/17.
//

#include "Test.h"
#include "Map.h"

void test()
{
    Map map;
    map.put("A",10);
    map.put("B",20);
    map.put("C",30);
    map.put("arroz",100);
    map.put("zorra",200);

    if(map.get("A")==10
       && map.get("B")==20
       && map.get("C")==30
       && map.get("arroz")==100
       && map.get("zorra")==200
       && map.exists("A")
       && !map.exists("D")
       && map.remove("A")
       && !map.exists("A")
            )
    {
        cout<<"Pass"<<endl;
    }else
    {
        cout<<"Fail"<<endl;
    }

    map.print();

}
