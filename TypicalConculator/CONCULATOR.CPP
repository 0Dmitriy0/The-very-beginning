#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) 
{
    int num_1, num_2, result;
    
    cin >> num_1;
    cin >> num_2;
    result = num_1 + num_2;
    cout << num_1 << " + " << num_2 << " = " << result << endl;

    if (result > 23){
    result++;
    cout << result << endl;
    } else if(result > 15){
        cout << "Result is bigger than 15 and lower than 23" << endl;
    } else if(result > 10 && result < 13){
        cout << "Result is bigger than 10 and lower than 13" << endl;
    } else if(result == 5 || result == 7){
        result == 5 ? cout << "Result is equal 5" << endl : cout << "Result is equal 7" << endl;
    } else 
        cout << "Result is lower than 23" << endl;
    
    switch (result){
        case 1:
            cout << "Result is equal 1" << endl;
            break;
        case 10:
            cout << "Result is equal 10" << endl;
            break;
        default:
            cout << "Result is unknown" << endl;
    }


    cin.get();
    return 0;
}