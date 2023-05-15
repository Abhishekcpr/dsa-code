#include<iostream>
using namespace std ;

struct trie {
    int we = 0 ;
    char data ;
    struct trie *array[26] = {NULL};
} ;

  trie *head = new trie() ;

void insertion(string s)
{
    int   x = s.length() ;
    trie *temp = head ;
    for(int i = 0 ; i < x ; i++ )
    {
        int y = s[i]  - 'a'; 
        
        trie* p = new trie() ;

        temp->array[y] = p ;
        p->data = s[i] ;


        if(i!= x-1)
        p->we = 0 ;
        else
        (p->we)++;

        temp = p ;

    }
}

void deletion(string s )
{
    int x = s.length() ;
    trie *temp = head ;

    for(int i = 0 ; i < x ; i++ )
    {
       char c = s[i] ;

        if(i == x-1)
        {   
            if(temp->we)
            (temp->we)-- ; 

             return  ;
          
        }
       if(temp->array[c]!= NULL)
       {
         temp = temp->array[c] ;
       }
       else
       {
        return ;
       }

       

    } 
}

struct trie_node
{
    int value; // non zero if leaf
    trie_node_t *children[26];
};

 void deleteKey(trie_node_t *root, char key[])
  {
    //Code here
  }
int main()
{
  
    head->data = '0' ;

    string s = "abcaaade" ;
}