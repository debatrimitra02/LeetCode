/*
Count the number of prime numbers less than a non-negative number, n.
*/

class Solution {
public:
    int countPrimes(int n) 
    {
        bool* non_prime=new bool[n];
        int count=0;
        for(int i=2;i*i<=n;i++)
        {
            if(non_prime[i]==false)
            {
                count++;
                for(int j=i*i;j<n;j=j+i)
                {
                    non_prime[j]=true;
                }
            }
        }
        
        for(int i=(int)sqrt(n)+1;i<n;i++)
        {
            if(non_prime[i]==false)
                count++;
        }
        return count;
    }
};
