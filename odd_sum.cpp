#include <iostream>
using namespace std;
int main (){
    int n = 100 ;
    int odd_sum = 0;
    for (int i = 1; i <=n; i++)
    {
        if (i%2 !=0)
        {
            odd_sum+=i;

        }
        
    }
    cout << "odd_sum" <<" " << odd_sum << endl ;
    return 0;
    
}