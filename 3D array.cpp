#include <iostream>
using namespace std;

int main() {
    
    int arr[2][2][3] = {
        {
            {1, 2, 3}, 
            {4, 5, 6}
        },
        {
            {7, 8, 9}, 
            {10, 11, 12}
        }
    };

    
    cout << "3D Array:\n";
    for (int i = 0; i < 2; i++) { 
        cout << "Layer " << i + 1 << ":\n";
        for (int j = 0; j < 2; j++) { 
            for (int k = 0; k < 3; k++) { 
 cout << arr[i][j][k] << " ";
            }
            cout << std::endl; 
        }
        cout << endl;
    }

    return 0;
}
