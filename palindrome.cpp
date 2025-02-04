#include<iostream>
#include<string>
using namespace std;

bool isalphanum(char str){
    
        if((str>= 'A' && str <= 'Z') || (str >= '1' && str <= '9') || (str>= 'a' && str <= 'z') ){
            return true;
        }
        else{
            return false;
        }
    }


char tolow(char str){
   
        if(str >= 'A' && str <= 'Z'){
            str = str - 'A' + 'a';
            return str;
        }
        else{
            return str;
        }
    }


bool ispalindrome(string & str){
    int s = 0;
    int e = str.length()-1;
    while(s<e){
        while(s<e && !isalphanum(str[s])){
            s++;
        }
        while(s<e && !isalphanum(str[e])){
            e--;
        }
        if(tolow(str[s]) != tolow(str[e])){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main(){
    string name;
    getline(cin,name);
    cout << "name is palindrome or not" << ispalindrome(name);
    
}