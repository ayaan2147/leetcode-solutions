#include<iostream>
#include<string>
using namespace std;

bool isanagram(string s,string t){
    if(s.length()!=t.length()){
        return false;
    }
    int count[26]={0};
    for(int i=0;i<s.length();i++){
        count[s[i]-'a']++;
        count[t[i]-'a']--;
    }

    for(int i=0;i<26;i++){
        if(count[i]!=0){
            return false;
        }

    }
    return true;
}

int main(){
    string s,t;
    cout<<"enter the string s:";
    cin>>s;
    cout<<"enter the string t:";
    cin>>t;

    if(isanagram(s,t)){
        cout<<"The strings are anagram"<<endl;
    }
    else{
        cout<<"The string are not anagram"<<endl;
    }
    return 0;
}
