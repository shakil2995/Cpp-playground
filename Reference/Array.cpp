#include <iostream>
#include <cstdlib>
using namespace std;
void populate_Ary(int A[], int size) {

    for(int i=0;i<size;i++){
        A[i]=rand() % 10;
    }
}

void printA(int A[],int size){
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
}
int find_Largest(int A[],int size){
    for(int i = 1;i < size; i++)
    {
        if(A[0] < A[i])
            A[0] = A[i];
    }
    cout << "Largest element = " << A[0];
    return A[0];
}

int find_Smallest(int A[],int size){
    for(int i = 1;i < size; i++)
    {
        if(A[0] > A[i])
            A[0] = A[i];
    }
    cout << "  Smallest Element = " << A[0];
    return A[0];
}
void SWAP(int Ar[],int LP,int SP){
    int Arr[1];
    Ar[1]=Ar[LP];
    Ar[LP]=Ar[SP];
}
void cumulativeSum(int A[],int size){
    cout<<"cumulative Sum : ";
    for(int i = 0;i < size; i++)
    {
        int sum;
        sum+=A[i];
        cout<<sum<<" ";
    }
}
int main() {
    int length;
    cout<<" Give Aay size : ";
    cin>>length;
    int A[length];
    populate_Ary(A,length);
    printA(A,length);
    int LP = find_Largest(A,length);
    int SP = find_Smallest(A,length);
    SWAP(A,LP,SP);
    cout<<endl;
    cumulativeSum(A,length);
}