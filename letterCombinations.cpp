// https://leetcode.com/problems/letter-combinations-of-a-phone-number/
#include<bits/stdc++.h>
using namespace std;

void dfs(string &digits, int idx,vector<string>&res, string &path,unordered_map<int,string>&mp){
    if(idx==digits.length()){
        res.push_back(path);
        return;
    }
    for(auto ele : mp[digits[idx]-'0']){
        path.push_back(ele);
        dfs(digits,idx+1,res,path,mp);
        path.pop_back();
    }
}
vector<string> letterCombinations(string &digits){
    unordered_map<int,string>mp;
    vector<string>res;
     if(digits.length()==0)return res;
    mp[1]="";
    mp[2]="abc";
    mp[3]="def";
    mp[4]="ghi";
    mp[5]="jkl";
    mp[6]="mno";
    mp[7]="pqrs";
    mp[8]="tuv";
    mp[9]="wxyz";
    string path="";
    dfs(digits,0,res,path,mp);
    return res;
}
int main(){
    string digits="23";
    vector<string> ans = letterCombinations(digits);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].length(); j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}