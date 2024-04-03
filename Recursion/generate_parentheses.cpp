#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        string s;
        int opening = n, closing = n;
        helper(opening, closing, ans, s);
        return ans;
    }
    void helper(int opening, int closing, vector<string> &ans, string s)
    {

        if (opening == 0 && closing == 0)
        {

            ans.push_back(s);

            return;
        }
        if (opening)
        {
            s.push_back('(');
            helper(opening - 1, closing, ans, s);
            s.pop_back(); // backtracking
        }
        if (closing && closing > opening)
        {
            s.push_back(')');
            helper(opening, closing - 1, ans, s);
            s.pop_back(); // backtracking
        }
    }

};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    freopen("errors.txt", "w", stderr);

#endif
    Solution *ob;
    for (string i : ob->generateParenthesis(3))
    {
        cout << i << endl;
    }

    return 0;
}