#include<bits/stdc++.h>

using namespace std;


bool pallindrome(string s){
    int start=0;
    int end=s.size()-1;

    while(start<=end){
        if(s[start]!=s[end])
        return false;
        else
        {
            start++;
            end--;
        }
    }
    return true;
}

int main(){
    string str;
    cout<<"enter string:-";
    getline(cin,str);

    if (pallindrome(str))
    cout << "Palindrome" << endl;
else
    cout << "Not Palindrome" << endl;

return 0;

}




// Leetcode solutions 


class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "";

        
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 65 && s[i] <= 90) || 
                (s[i] >= 97 && s[i] <= 122) || 
                (s[i] >= 48 && s[i] <= 57)) 
            {
                s1.push_back(s[i]);
            }
        }

        
       for (int i = 0; i < s1.size(); i++) {
    s1[i] = tolower(s1[i]);
}

        int start = 0;
        int end = s1.size() - 1;

        while (start <= end) {
            if (s1[start] != s1[end]) 
                return false;
            else {
                start++;
                end--;
            }
        }
        return true;
    }
};
