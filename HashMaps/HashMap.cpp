#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> mp;

    // Insertion

    // 1
    pair<string, int> p = make_pair("prajwal", 3);
    mp.insert(p);

    //2
    pair<string,int> p2("jelsinge",5);
    mp.insert(p2);

    //3
    mp["london"]=3;  // {"london",3}

    mp["london"]=4; // {"london",4} // gets updated when same key used


    // Search
    cout<<mp["london"] <<endl;
    cout<< mp.at("prajwal") <<endl;
    cout<<mp["unknown"] <<endl; // give 0 o/p and created a pair like { "unknown" : 0 }
    cout<< mp.at("unknown") <<endl; // gives err only if called before line 28

    //size
    cout<< mp.size()<<endl; //3

    // check presence
    cout<<mp.count("find")<<endl; // absent -> 0, present->1
    
    // erase
    mp.erase("unknown");

    //size
    cout<< mp.size()<<endl; // 2

    // Traverse through a map

    for(auto i:mp){
        cout<< i.first << " " << i.second << endl;
    }
    // traverse using iterator

    //

    return 0;
}