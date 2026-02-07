#include<iostream>
#include<list>
#include<iterator>
//It is a sequential container
//Internally implemented as doubly linked list
using namespace std;

int main()
{
    list<int>l={1,2,3};
    l.push_back(4);                //l={1,2,3,4}
    l.push_back(5);                //l={1,2,3,4,5}
    l.push_front(0);               //l={0,1,2,3,4,5}

   for(int val: l)
   {
        cout<<val<<" ";            //0 1 2 3 4 5 
   }
   cout<<endl;
   l.pop_front();                 //1 2 3 4 5    pop_front removes element from front
   l.pop_back();                  //1 2 3 4      pop_back removes element from end
   for(int val: l)
   {
        cout<<val<<" ";            //1 2 3 4  
   }
   cout<<"\nsize= "<<l.size();       //4
   cout<<endl;
   l.insert(next(l.begin(),2),6);                //next is iteratior function to go to specific position of list
   for(int val: l)
   {
        cout<<val<<" ";            // 1 2 6 3 4  
   }
   cout<<"\nFirst element= "<<l.front();       //1
   cout<<"\nLast element= "<<l.back();         //4
   l.erase(l.begin());
   cout<<"\nFirst element= "<<l.front()<<endl;          //2
   for(auto it=l.rbegin();it!=l.rend();++it)
   {
     cout<<*it<<"\t";                                //4 3 6 2 
   }
   cout<<endl;
   for(auto it=l.begin();it!=l.end();++it)
   {
     cout<<*it<<"\t";                                //2 6 3 4
   }
    return 0;
}
