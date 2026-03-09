#include <iostream>

using namespace std;

int main()
{
    int a, b;
    while(cin >> a >> b){
        cout << a << " " << b;
        if(a>b){
            swap(a,b);
        }
        int max_x = 0;
        int x = 1;
        for (int i = a; i < b+1; i++)
        {
            int a=i,x=1;
            while (a != 1)
            {
                if (a % 2 == 0)
                {
                    a /= 2;
                }
                else
                {
                    a = 3 * a + 1;
                }
                x++;
            }
            if(x>max_x){
                max_x = x;
            }
        
    }
    cout << " " << max_x << endl;
    }
}