//
// Created by 王琦 on 31/1/23.
//

#include<iostream>
#include<vector>
using namespace std;

class Permutation {
    vector<int>  numbers = {1,2,3,4,5,6};
    vector<int> target = {4, 2, 5, 1, 6, 3};
    vector<int> num_results;
    int calls;
    bool ture;


public:
    Permutation() {
        calls = 0;
        randomization();
    }

    void randomization() {
        for(int k = 1; k<= 100; k++){
            for (int i = 5; i > 0; i--) {
                int j = rand() % (i + 1);
                int temp  = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }

            for (auto num: numbers) {
                cout << num << " ";
            }
            cout << endl;


            if(equal(numbers.begin(), numbers.end(),target.begin())){
                cout<< "???????????????????????????????????????????????????????????  " << endl;
                break;

            }

        }

//
//        for(int i = 1; i <= 6; i++){
//            numbers.push_back(i);
//        }

    }
};

int main() {
    srand(time(0));
    Permutation p;
//    p.randomization();
    return 0;
}