#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "Press Enter 3 times to reveal your future." << endl;
    
    string input;
    int count = 0;
    while(count < 3) {
        getline(cin, input);
        count++;
    }
    
    srand(time(0));
    int gradeIndex = rand() % 9;

    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};

    cout << "You will get " << grades[gradeIndex] << " in this 261102." << endl;

    return 0;
}
