#include <iostream>
#include <cstdlib>
using namespace std;

void populateArray(int Arr[],int size);
void printArr(int Arr[],int size);
int findLargest(int Arr[],int size);
int findSmallest(int Arr[],int size);
int giveRandom();
void SWAP(int Arr[],int &LP,int &SP);
void cumulativeSum(int Arr[],int size);
int main() {
    int asize;
    cout<<" Give array size : ";
    cin>>asize;
    int A[asize];
    populateArray(A,asize);
    printArr(A,asize);
    int LP = findLargest(A,asize);
    int SP = findSmallest(A,asize);
    //SWAP(A,LP,SP);
    cumulativeSum(A,asize);
}

void printArr(int Arr[],int size){
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<Arr[i]<<" ";
    }
}
void populateArray(int Arr[],int size){

    for(int i=0;i<size;i++){
        Arr[i]=giveRandom();
    }
}
int findLargest(int Arr[],int size){
    for(int i = 1;i < size; i++)
    {
        // Change < to > if you want to find the smallest element
        if(Arr[0] < Arr[i])
            Arr[0] = Arr[i];
    }
    cout << "Largest element = " << Arr[0];
    return Arr[0];
}

int findSmallest(int Arr[],int size){
    for(int i = 1;i < size; i++)
    {
        // Change < to > if you want to find the smallest element
        if(Arr[0] > Arr[i])
            Arr[0] = Arr[i];
    }
    cout << "  Smallest Element = " << Arr[0];
    return Arr[0];
}
int giveRandom() {
    int random = rand() % 100 + 1;
    return random;
}
void SWAP(int Arr[],int &LP,int &SP){
    int A[1];
    A[1]=Arr[LP];
    Arr[LP]=Arr[SP];
}
void cumulativeSum(int Arr[],int size){
    cout<<"\ncumulative Sum : ";
    int sum=0;
    for(int i = 0;i < size; i++)
    {

        sum=sum+Arr[i];
        //cout<<i<<" ";

        cout<<sum<<" ";
    }
   // cout<<sum;
}