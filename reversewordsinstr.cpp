#include<iostream>
#include<string>
#include<vector>
using namespace std;



    string reverseWords(string s) {
        vector<string> words;
        string word = "";
        for(int i = 0;i < s.length();i++){
            if(s[i] == ' '){
                if( !word.empty() ){
                    words.push_back(word);
                    word = "";
                }
            }
            else{
                word += s[i];
            }
        }
         if(!word.empty()){
            words.push_back(word);
            word = "";
         }  
         string str = "";
         for(int i = words.size()-1;i >= 0;i--){
            str += words[i];
            if(i != 0){
            str += " ";
         }}
         return str;
    }

int main(){
    string s = "hello this is himanshu";
    cout << reverseWords(s);
}