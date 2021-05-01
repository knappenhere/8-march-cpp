#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 

    int n = 5; 
  

    for (int i = 0; i <= 2 * n; i++) { 

        for (int j = 0; j <= 2 * n; j++) { 
  

            float center_dist = sqrt((i - n) * (i - n) +  
            (j - n) * (j - n)); 
  
            if (center_dist > n - 0.5 
                && center_dist < n + 0.5) 
                cout << "♥"; 
            else
                cout << " "; 
        } 
  
        
        if (i == n) 
            cout << " "
                 << "Поздравляю с 8-ым марта <3 ♥, урааа, слева типо цветошек";
        cout << endl; 
    } 
  

    for (int i = 0; i <= n; i++) { 
        if (i == (n / 2) + 1) { 
            for (int j = 0; j <= 2 * n; j++) 
                if (j >= (n - n / 2) && j <= (n + n / 2)) 
                    cout << "♥"; 
                else
                    cout << " "; 
        } 
        else { 
  
            for (int j = 0; j <= 2 * n; j++) { 
                if (j == n) 
                    cout << "♥"; 
                else
                    cout << " "; 
            } 
        } 
        cout << endl; 
    } 
} 