#include <iostream>
#include <math.h>
#include <time.h>
#include <cstdlib>

using namespace std;

class MDArray {
private:


public:
    ///                                                               Case 1
    void mDArray(int i) {
        int Arr[i];
        ///                                 populate & Print
        for (int k = 0; k < i; k++) {
            Arr[k] = giveRandom();
            cout << Arr[k] + 1 << " ";
        }
    }

    ///                                                               Case 2
    void mDArray(int i, int j) {
        int Arr1[i][j];
        for (int a = 0; a < i; a++) {
            for (int b = 0; b < j; b++) {
                Arr1[a][b] = giveRandom();
                cout << Arr1[a][b] << " ";
            }
            cout << endl;
        }
    }

    ///                                                               Case 3
    void mDArray(int i, int j, int k) {
        int Arr1[i][j][k];
    }

    void getArraySize() {
        ///                                                               call mDArray
        int dimension;
        cout << "Enter the dimension of the array :";
        cin >> dimension;
        switch (dimension) {
            int length, i, j, k;
            ///                                                               Case 1
            case 1:
                cout << "Enter Array Length :";
                cin >> length;
                break;
                ///                                                           Case 2
            case 2:
                cout << "Enter Row number :";
                cin >> i;
                cout << "Enter Column number :";
                cin >> j;
                mDArray(i, j);
                break;
                ///                                                           Case 3
            case 3:
                cout << "Enter Row number :";
                cin >> i;
                cout << "Enter Column number :";
                cin >> j;
                cout << "Enter z number :";
                cin >> k;
                mDArray(i, j, k);
                break;

            default:
                cout << "Out of bound, Try again";
                break;

        }
    }

    void printArray() {

    }

    int giveRandom() {
        //srand((unsigned) time(NULL));
        int random = rand() % 10 + 1;
        return random;
    }
};


int main() {
    MDArray mdArray;
    mdArray.getArraySize();
    return 0;
}
