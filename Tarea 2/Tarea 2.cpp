#include <iostream>
#include <vector>
using namespace std;
int main() {
    int size = 10;
    float number;
    double sum=0;
    vector<float> numbers;

    for (int i = 0; i < size; ++i) {
        cout << "Enter the number "<<(i + 1)<<": ";
        cin >> number;
        numbers.push_back(number);
    }
    for (int num:numbers) {
        sum+=num;
    }
    double average= (sum)/size;

    cout << "The average of the numbers entered is: " << average <<endl;

    int above_average= 0;
    for (int num : numbers) {
        if (num > average) {
            above_average++;
        }
    }

    cout << "There´s " << above_average << " numbers above the average." <<endl;

    return 0;
}

