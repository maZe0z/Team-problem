#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n,result_1,result_2,result_3,count=0;
    if (n<=0){
        return 0;
    }
    cin >> n;

    for (int i = 0; i<n;i++){
        cin >> result_1 >> result_2 >> result_3;
        if (result_1+result_2+result_3>1){
            ++count;
        }
    }
    cout << count;
    return 0;
}
