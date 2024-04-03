#include<bits/stdc++.h>


using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>direc ;
        vector<string>ans ;
        int j ;
        for(char start = '2',letter ='a'; start <= '9' ; start++){
            j = 3 ;
            if(start == '9' || start == '7'){
                j = 4 ;
            }
            for(int k = 0 ; k < j ; k++){
                direc[start].push_back(letter++);
            }
        }
        if(digits.length()==0){
            return {};
        }
        string combination ;
        recursor(combination,digits,direc,ans);
        return ans ;


    }
    void recursor(string combination , string digits , unordered_map<char,string>&direc,vector<string>&ans,int ind = 0 ){
        if( ind == digits.size()){
            ans.push_back(combination);
        }
        char c = digits[ind];
        for(char ch : direc[c]){
            recursor(combination+ch,digits,direc,ans,ind+1);
        }
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    //#ifndef ONLINE_JUDGE

        //freopen("input.txt","r", stdin);

        //freopen("output.txt","w", stdout);

        //freopen("errors.txt","w",stderr);

    //#endif
    

    Solution* bo ;
    for(string i : bo->letterCombinations("23")){
        cout << i << ' ' ;

    }


    return 0;
}