#include<iostream>
#include<vector>
#include<string>
using namespace std;

int compress(vector<char>& chars) {
        int i = 0;
        int ansindex = 0;
        int n = chars.size();
        int count = 1;
        while(i < n){
            int j = i+1;
            count = 1;
            while(j < n && chars[i] == chars[j]){
                count ++;
                j++;
            }
            chars[ansindex++] = chars[i];
            i = j;
            if(count >1){
                string str = to_string(count);
                for(char ch:str){
                    chars[ansindex++] = ch;
                }
            }
        }
        return ansindex;
    }

int main(){
    vector<char> a = {'a','b','b','c','c','c','c','d','d','e','e'};
    cout << compress(a);
    return 0;
}