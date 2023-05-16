#include<iostream>
#include<unordered_map>
using namespace std ;

unordered_map<int,int> parent ;
unordered_map<int,int> Size ;

int find(int x)
{
    if(parent[x] == x)
    return x ;

    return find(parent[x]) ;
}

void setValue(int x)
{
    if(parent[x] != 0)
    {
          parent[x] = x ;
          Size[x] = 1 ;
    }
  
}

void Union(int a, int b)
{
    if(parent[a] != parent[b])
    {
        if(Size[a] <= Size[b])
        {
        swap(parent[a], parent[b]) ;
          
        }

         Size[a] += Size[b] ;
        parent[b] = parent[a] ;
       


    }
}
int main()
{

    setValue(5) ;
    setValue(10) ;
    setValue(17) ;
    setValue(22) ;

    Union(10,17) ;
    Union(22, 17) ;

    // cout<<(find(10) == find(22) ?"Elements in same set" : "Different sets" ) ;
    int element ;
    cout<<"Enter elements to search : " ;
    cin>>element ;
    for(auto val : parent)
    {
        if(find(element) == find(val.first))
        cout<<val.first <<" " ;
    }

    cout<<endl;

}