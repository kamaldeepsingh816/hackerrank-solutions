#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
bool isPair(char open,char close)
    {
    if(open=='('&&close==')')
        return true;
    else if(open=='{'&&close=='}')
        return true;
    else if(open=='['&&close==']')
        return true;
    
    return false;
}
bool check(string s)
    {
      stack<char> st;
        for(int i=0;i<s.length();i++)
            {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                st.push(s[i]);
            if(s[i]==')'||s[i]=='}'||s[i]==']')
                {
                if(st.empty()||!(isPair(st.top(),s[i])))
                    {
                    return false;
                }
                
                else
                    {
                    st.pop();
                }
            }
        }
        
        if(st.empty())
          return true;
    else
        return false;
    }



int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        bool b=check(s);
        if(b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
      
    return 0;
}
