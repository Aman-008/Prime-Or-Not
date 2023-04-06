#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0 || n % 3 == 0)
    {
        cout << "Not prime";
    }
    // else if (n % 3 == 0)
    // {
    //     cout << "Not prime";
    // }
    else
    {
        cout << "Prime";
    }

    cout << endl;

    return 0;
}


// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 2; i < n; i++)
//     {
//         if (n%i==0)
//         {
//             cout << "Not prime";
//             return 0;

//         }

        
        
//     }
//     cout << "prime";
    
    
// }















