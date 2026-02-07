#include<iostream>
#include<vector>
using namespace std;

int main()
{
    pair<int,int>p={1,2};

    //FOR ACCESSING ELEMENTS
    cout<<"First element: "<<p.first<<"\nSecond element= "<<p.second;

    //NESTED PAIRS
    pair<int,pair<char,int>>p1={1,{'a',3}};

    //FOR ACCESSING ELEMENT
    cout<<"\nFirst element: "<<p1.first<<"\nSecond element 1st= "<<p1.second.first<<"\nSecond elements 2nd= "<<p1.second.second<<endl;

    //VECTOR IMPLEMENTATION OF PAIR
    vector<pair<int,int>>v={{1,2},{3,4},{5,6}};
    for(auto p: v)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

    //DIFFERENCE BETWEEN PUSH AND EMPLACE
    v.push_back({7,8});                    //It assume that we have already paired and it just pushes
    v.emplace_back(9,10);                  //It creates in-place objects
    cout<<"\nAfter insertion of new pairs:\n";
    for(auto p: v)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}
