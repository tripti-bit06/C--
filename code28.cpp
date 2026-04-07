#include <iostream>
using namespace std;

// void printing(int num){
//     if (num == 6){
//         return;
//     }
//     cout<<num*10<<endl;
//     printing(num+1);
// }

// void printArr(int arr[], int index, int size)
// {
//     if (index == size)
//     {
//         return;
//     }

//     // cout << arr[index] << endl;
//     printArr(arr, index + 1, size);
//       cout << arr[index] << endl;
// }


void printind(int arr[], int size, int index ){

    if (index == size){
        return;
    }
    if(arr[index]== 40){
        cout<<index<<endl;
        return;
    }

    printind(arr , size, index + 1);

}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    printind(arr, size , 0);

    // printArr(arr, 0, size);

    // int num = 1;
    // printing(num);

    return 0;
}