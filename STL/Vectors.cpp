#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<int>vec;
cout<<"Size of vector is: "<<vec.size();               //To check size i.e. How amny elements vector have [initially 0]
cout<<"\nCapacity of vector is: "<<vec.capacity();     //To check capacity i.e. How many elements it can store[initially 0]
vec.push_back(1);
vec.push_back(2);
vec.push_back(3);                                       //To add single element at last position of vector
vec.push_back(4);
vec.push_back(5);
cout<<"\nSize of vector is: "<<vec.size();             //Increase one by one with addition of element[5]
cout<<"\nCapacity of vector is: "<<vec.capacity();     //Doubles everytime vector gets full(1->2->4->8)[8]
vec.pop_back();                                        //Removes last element from vector
vec.emplace_back(5);                                   //Adds element at last
cout<<"Element in vector are\n";
for(int val:vec)
{
cout<<val<<"\t";                                   //Print element of vector
}
cout<<"\nFront element: "<<vec.front();                  //front points to first element
cout<<"\nLast element: "<<vec.back();                    //back points to last element
cout<<"\nElement at index 2: "<<vec.at(2)<<" or "<<vec[2];              //To access element from specific index
/vec.erase(vec.begin());                                 //Remove specific element or range of elements.complexity=O(n)
vec.erase(vec.begin(),vec.begin()+1);/
vec.insert(vec.begin(),100);                              //Inserts element at specific position vec.insert(pos,value)complexity=O(n)
//vec.clear();                                            //Empty vector or clear all elements
cout<<"is empty: "<<vec.empty();                          //Checks wheather vector is empty or not
return 0;
}
This is first which includes all basic functions I studied. I made all functions in one just to revise all in one go
