

#include <iostream>

using namespace std;
bool checkprime(int n);

int main()
{
        int n, i;
        bool flag = false;
        cout<<"enter a positive integer:";
        cin>>n;
        for( i = 2; i <= n/2; ++i)
        {
            if (checkprime(i))
            {
                if(checkprime(n - i))
                {
                    cout << n <<  " = " << i << " +  "<< n-i <<endl;
                    flag=true;
                }
            }
        }
        if (!flag)
        cout << n << "can't ne expressed as sum of the two prime numers.";
    

    return 0;
}


bool checkprime(int n)
{
    int i;
    bool isprime = true;
    if(n == 0 || n == 1)
    {
        isprime=false;
    }
    else
    {
        for( i = 2; i <= n/2; ++i)
        {
            if(n % i == 0)
            {
                isprime=false;
                break;
            }
        }
    }
    return isprime;

}
