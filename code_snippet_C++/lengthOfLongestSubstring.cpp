#include <iostream>
#include <vector>
#include <string>
using namespace std;
int lengthOfLongestSubstring(string s)
{
    vector<int>mpp(256,-1);
    int l=0,r=0;
    int len=0;
    int n=s.length();
    while(r<n)
    {
         if(mpp[s[r]]!=-1)
         {
              l=max(mpp[s[r]]+1,l);
          }
          mpp[s[r]]=r;
          len=max(len, (r-l+1));
          /*cout<<len<<endl;*/
          r++;
     }
     return len;

}
int main(){
     string s;
     cin>>s;
     cout<<lengthOfLongestSubstring(s);
     return 0;

}