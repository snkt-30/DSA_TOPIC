#include "bits/stdc++.h"
using namespace std;

// this fucntion will find all the permutation of string but will not handle the case the there is duplicate in string
void permu(string s, string ans)
{
    if (s.size() == 0)
    {
        cout << ans << endl;
        return;
    }

    for(int i=0;i<s.size();i++)
    {
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permu(ros,ans+ch);
    }
}

// the function to handle the duplicate char case in string 

void permutation(string str,string ans)
{
    if(str.size()==0)
    {
        cout<<ans<<endl;
        return;
    }
    unordered_set<char> s;
    for(int i=0;i<str.size();i++)
    {
        char ch=str[i];
        if(s.count(ch)==0)
        {
            string ros=str.substr(0,i)+str.substr(i+1);
            s.insert(ch);
            permutation(ros,ans+ch);
        }
    }
}

int main()
{

    // permu("ABC", "");
    permutation("AACB","");
}