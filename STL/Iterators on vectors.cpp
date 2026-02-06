#include<iostream>
#include<vector>
using namespace std;

int main()
{
//ITERATORS  used to implement loop on vectors
//Two iterators: 1.vec.begin()->points to first element       2.vec.end()->points to index next to last element
vector<int>vec={1,2,3,4,5};
//TWO WAYS OF MAKING ITERATORS FROM SCRATCH
vector<int>::iterator it;                               //initialsing iterator
for(it = vec.begin(); it != vec.end(); it++)
{
cout << *it << "\t";                            //Forward loop
}
cout<<endl;
for(auto i=vec.rbegin();i!=vec.rend();i++)           //auto automatically decides datatype
{
cout<<*i<<"\t";                      //Backward loop rbegin(means start from end)      rend(means start from begin)
}
}
