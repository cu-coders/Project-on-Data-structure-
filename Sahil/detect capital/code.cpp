class Solution {
public:
    bool detectCapitalUse(string word) {
     int a=0,b=0;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]>='a' && word[i]<='z')
                a+=1;
            else if(word[i]>='A' && word[i]<='Z')
                b+=1;
        }
        if(a==word.size() && b==0 )
            return 1;
        else if(b==word.size() && a==0)
            return 1;
        else if((word[0]>='A' && word[0]<='Z') && a==word.size()-1)
            return 1;
        return 0;
    }
};