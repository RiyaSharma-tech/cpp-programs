#include<iostream>
#include<deque>
//PUSH,POP,TOP FUNCTIONS HAVE O(1) COMPLEXITY

using namespace std;

int main()
{
    deque<int>dq={1,2,3};
    dq.push_back(4);                //l={1,2,3,4}
    dq.push_back(5);                //l={1,2,3,4,5}
    dq.push_front(0);               //l={0,1,2,3,4,5}

   for(int val: dq)
   {
        cout<<val<<" ";            //0 1 2 3 4 5 
   }
   cout<<endl;
   dq.pop_front();                 //1 2 3 4 5    pop_front removes element from front
   dq.pop_back();                  //1 2 3 4      pop_back removes element from end
   for(int val: dq)
   {
        cout<<val<<" ";            //1 2 3 4  
   }
   cout<<"\nsize= "<<dq.size();       //4
   cout<<endl;
   dq.insert(next(dq.begin(),2),6);     //next is iteratior function to go to specific position of list
   dq.insert(dq.begin()+1,0);           //Random access is allowed    
   for(int val: dq)
   {
        cout<<val<<" ";            // 1 0 2 6 3 4  
   }
   cout<<"\nFirst element= "<<dq.front();       //1
   cout<<"\nLast element= "<<dq.back();         //4
   dq.erase(dq.begin());
   cout<<"\nFirst element= "<<dq.front()<<endl;          //0
   for(auto it=dq.rbegin();it!=dq.rend();++it)
   {
     cout<<*it<<"\t";                                //4 3 6 2 0
   }
   cout<<endl;
   for(auto it=dq.begin();it!=dq.end();++it)
   {
     cout<<*it<<"\t";                                //0 2 6 3 4
   }
   cout<<"\nRandom access: "<<dq[2];                     //6
    return 0;
}
