// This is code of Hashmapping using map & unordred_map..Hash mapping basically it is <key,value> store
#include <bits/stdc++.h>
using namespace std;
"Decipline/Regreat"

int main()
{
    /*int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        char ch='a';
        map<char,int> ma;
        for(int i=1;i<=26;i++){
            ma.insert({ch,i});
            ch++;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+ma[s[i]];
        }
        int mini=0;
        if(n%2){
            mini=min(ma[s[n-1]],ma[s[0]]);
        }
        mini=mini+mini;
        int sub=sum-mini;
        if(n>1){ 
            cout<<"Alice"<<" "<<sub<<endl;
        }else{
            cout<<"Bob"<<" "<<ma[s[0]]<<endl;
        }
        
    }*/



    //Buket Array Means you having one array and you have to mapping the value with index..
    //thats's why we are used the --> 1) Hash code 2) compression Function
    /*Hash code kya karta hai  :- any kind of object ho like string,char ho  muze usko conversion kar 
                                karunga int mai taki mai usko mapping kar pau index ke sath

                                why:-1) object convesion into int 
                                     2) uniform distribution :- colision na ho iske liye
     */
    /** compression function kya karta hai:- jo bhi int mila hai hash code se usko range me leke Aana
                                             wo kam compression Function ka hai*/         

    /*collision :- collision ho sakta hai boss matlab diffrent string mapping with same value
     collision Handling :-1) Open hashing :- Same Placed par hi jao...:- open hashing mai kya hota hai
                                                Aapke block ke andar LinkedList ka head store hota hai
                                                value next nex head mai store ho jati hai usko hum 
                                                Seprate chainig kahte hai
                          2) Closed Addresing :-

    Linear Probing :- hum next index par jake check kar sakte hai aaur value dal sakte hai
    Qudratic probing :-closed addressing ki technique hai


    complexity analysis 
    */                            


/*Concept Of Hashing gfg
What is Hash Table?
A Hash table is defined as a data structure used to insert, look up, and remove key-value pairs quickly.
 It operates on the hashing concept, where each key is translated by a hash function into a distinct 
 index in an array. The index functions as a storage location for the matching value. In simple words, 
 it maps the keys with the value.

What is Load factor?
          A hash table’s load factor is determined by how many elements are kept there in relation to how
           big the table is. The table may be cluttered and have longer search times and collisions if the 
           load factor is high. An ideal load factor can be maintained with the use of a good hash function 
           and proper table resizing.



What is a Hash function?
A Function that translates keys to array indices is known as a hash function. The keys should be
evenly distributed across the array via a decent hash function to reduce collisions and ensure 
quick lookup speeds.

.
Collision resolution techniques:
Collisions happen when two or more keys point to the same array index. Chaining, open addressing, 
and double hashing are a few techniques for resolving collisions.

Open addressing: collisions are handled by looking for the following empty space in the table. If the
first slot is already taken, the hash function is applied to the subsequent slots until one is left
empty. There are various ways to use this approach, including double hashing, linear probing, and 
quadratic probing.


Separate Chaining: In separate chaining, a linked list of objects that hash to each slot in the hash 
table is present. Two keys are included in the linked list if they hash to the same slot. This method
 is rather simple to use and can manage several collisions.

Complexity Analysis of a Hash Table:
For lookup, insertion, and deletion operations, hash tables have an average-case time complexity of O(1).
Yet, these operations may, in the worst case, require O(n) time, where n is the number of elements 
in the table.
*/

    return 0;
}