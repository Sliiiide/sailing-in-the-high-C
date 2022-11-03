#include <iostream>

using namespace std;

int x, y;
int sum;
char next_sum;

int main() {

    while(1) {

        cout << "Type a Number: ";
        cin >> x;
        cout << "Type another Number!: ";
        cin >> y;

        sum = x + y;

        cout << "The total is: " << sum; 
        cout << "\nDo you want to calculate anything else?: ";
        
        cin >> next_sum;

        if(next_sum == 1) {
            continue;
        }
        else {
            break;
        }
    }
    
}