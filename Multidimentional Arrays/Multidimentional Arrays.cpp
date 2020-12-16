#include <iostream>
#include <cstdlib>

using namespace std;

class MDArray {
private:


public:
    bool exitStatus=true;
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
    static void mDArray(int i, int j, int k) {
        int Arr1[i][j][k];
    }

    void getArraySize() {
        ///                                                               call mDArray
        int dimension;
        cout << "Enter the dimension of the array 1,2,3 or Enter 4 to exit process :";
        cin >> dimension;
        switch (dimension) {
            int i, j, k;
            ///                                                               Case 1
            case 1:
                cout << "Enter Array Length :";
                cin >> i;
                mDArray(i);
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
            case 4:exitStatus=false;
                break;
            default:
                cout << "\nOut of bound, Try again\n";
                break;

        }
    }
    bool exitProcess(){
        return true;
        }
    int giveRandom() {
        //srand((unsigned) time(NULL));
        int random = rand() % 10 + 1;
        return random;
    }
};


int main() {
    MDArray mdArray;
    while(mdArray.exitStatus)
    { mdArray.getArraySize();
       if(mdArray.exitStatus==true) system("pause");
        system("CLS");
    }

    return 0;
}
