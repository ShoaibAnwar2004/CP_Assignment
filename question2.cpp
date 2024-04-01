#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> prime;
    bool is_prime[n*n + 1];

    for(int i = 0; i <= n * n; i++)
    {
        is_prime[i] = true;
    }

    for(int i = 2; i <= n*n; i++)
    {
        if(is_prime[i] == true)
        {
            prime.push_back(i);
            for(int j = i*i; j <= n*n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    for(int i = 0; i < prime.size(); i += 2)
    {
        cout << prime[i] << ' ';
    }

    return 0;
}
