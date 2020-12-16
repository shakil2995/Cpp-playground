#include <iostream>
#include <math.h>
#include <time.h>
#include <cstdlib>
using namespace std;
class MDArray{
private:



public:
    void mDArray(int size){
    int Arr[size];
    /////////////////////////////////////////////////////////////////populate
    for(int i=0;i<size;i++){
        Arr[i]=giveRandom();
        cout<<Arr[i]+1<<" , ";
    }
    for(int i=0;i<size;i++)
    {
        //cout<<Arr[i]+1<<" , ";
    }
    /////////////////////////////////////////////////////////////////printout

        }
    void mDArray(int Arr1[],int Arr[],int size1,int size2){

        }
    void mDArray(int Arr1[],int Arr[],int Arr3[],int size1,int size2,int size3){

        }
    void getArraySize(){
    //////////////////////////////////////////////////////// call mDArray
    int dimension;
    cout<<"Enter the dimension of the array : ";
    cin >> dimension;
        switch (dimension) {
            int length,row1,row2,row3,column1,column2,column3;
            case 1:cout<<"Enter array length : ";
                    cin>>length;
                    mDArray(length);
                    break;

            case 2:cout<<"Enter array length : ";
                cin>>length;
                break;

            case 3:cout<<"Enter Row number : ";
                cin>>row1;
                cout<<"Enter Column number : ";
                cin>>column1;
                break;

            default:cout<<"Out of bound, Try again";
                    break;

        }
}
    void printArray(){

}
int giveRandom(){
    //srand((unsigned) time(NULL));
    int random = rand()% 10+1;
    return random;
}
};


int main() {
    MDArray mdArray;
    mdArray.getArraySize();
//    for(int i =0 ;i<=10;i++){
//        mdArray.giveRandom();
//    }

  //cout << "\nHello, World!" << endl;
    return 0;
}
