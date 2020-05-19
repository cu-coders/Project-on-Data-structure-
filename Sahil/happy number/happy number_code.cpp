class Solution {
public:
    bool isHappy(int n) {
        if(n==4 || n==37)
        {
            return 0;
        }
        else if(n==1)
        {
            return 1;
        }
        else
        {
            int t=0;
            while(n!=0)
            {
                t+=(n%10)*(n%10);
                n/=10;
            }
            return isHappy(t);
        }
        
    }
};