#include <iostream>

using namespace std;

int main() {
    
    int numbers [2][4] = {{1, 3, 5, 7}, {2, 4, 6, 8}};
    
    for(int i = 0; i < 2; i++) {
        cout << "List " << i + 1 << "\n------"  << endl;

        for(int j = 0; j < 4; j++) {
            cout << numbers[i][j] << endl;
        }
    }
    return 0;
}