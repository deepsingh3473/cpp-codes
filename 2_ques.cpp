#include<iostream>
#include<math.h>
using namespace std;

bool isEven(int n){
    if(n&1){
        return false;
    }
    return true;
}

int factorial(int n){
    int ans = 1;
    for(int i=1; i<=n; i++){
        ans = ans*i;
    }
    return ans;
}

int countSetBits(int n){
    int count = 0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    return count;
}

int fibNthTerm(int n){
    int x=0, y=1;
    int z = 0;
    for(int i=0; i<n-2; i++){
        z = x + y;
        x = y;
        y = z;
    }
    return z;
}

int getMax(int arr[], int size){
    int maxi = INT_MIN;
    for(int i=0; i<size; i++){
        maxi = max(arr[i], maxi);
    }
    return maxi;
}

int getMin(int arr[], int size){
    int mini = INT_MAX;
    for(int i=0; i<size; i++){
        mini = min(arr[i], mini);
    }
    return mini;
}

int getSum(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

void swapAlternates(int arr[], int n){
    for(int i=0; i<n; i++){
        if(i!=n-1){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            i++;
        }
    }
}

void printingArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    // int n;
    // cin >> n;

    // Decimal to Binary

    // int binary = 0;
    // int i=0;
    // while(n!=0){
    //     int bit = n&1;
    //     binary = (bit * pow(10,i)) + binary;
    //     i++;
    //     n = n>>1;
    // }
    // cout << "Binary num: " << binary << endl;

    // Binary to Decimal

    // int decimal = 0;
    // int i=0;
    // while(n!=0){
    //     int digit = n%10;
    //     if(digit){
    //         decimal = decimal + pow(2,i);
    //     }
    //     i++;
    //     n = n/10;
    // }
    // cout << "Decimal num: " << decimal << endl;

    // Switch Case

    // int n;
    // cin >> n;

    // int h=0, f=0, t=0, o=0;

    // switch(1){
    //     case 1:
    //         h = n/100;
    //         n=n%100;
        
    //     case 2:
    //         f = n/50;
    //         n = n%50;

    //     case 3:
    //         t = n/20;
    //         n = n%20;
        
    //     case 4:
    //         o = n;
    // }

    // cout << (h+f+t+o) << endl;

    // int n;
    // cin >> n;
    // cout << n << " is even -> " << isEven(n) << endl;

    // int n, r;
    // cin >> n >> r;
    // int nCr = (factorial(n))/(factorial(r)*factorial(n-r));
    // cout << "nCr ==> " << nCr << endl; 

    // int a, b;
    // cin >> a >> b;
    // cout << "No. of set bits in a and b -> " << countSetBits(a) + countSetBits(b) << endl;


    // int n;
    // cin >> n;
    // cout << fibNthTerm(n) << endl;

    // int arr[10];
    // fill_n(arr, 10, 1);
    // for(int i=0; i<10; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // int n;
    // cin >> n;

    // int arr[100];
    // for(int i=0; i<n; i++){
    //     cin >> arr[i];
    // }
    // cout << "Maximum nmber is: " << getMax(arr, n) << endl;
    // cout << "Minimum nmber is: " << getMin(arr, n) << endl;
    // cout << "Sum of all the elements: " << getSum(arr, n) << endl;


    // int arr[8] = {19, 8, 9, 7 , 7 , -9, 2, 1};
    // int key;
    // cin >> key;
    // bool found = false;
    // int index = -1;
    // for(int i=0; i<8; i++){
    //     if(key == arr[i]){
    //         found = true;
    //         index = i;
    //         break;
    //     }
    // }
    // if(found){
    //     cout << "Element is present at " << index << " index" << endl;
    // }
    // else{
    //     cout << "Element is not present" << endl;
    // }



    // Reverse an array

    // int arr[10] = {19, 8, 9, 7 , 7 , -9, 2, 1, 4, 5};
    // int i=0;
    // int j=9;
    // while(i<=j){
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    //     i++;
    //     j--;
    // }
    // for(int i=0; i<10; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;


    // int n;
    // cin >> n;
    // int count = 0;
    // while(n!=0){
    //     if(n&1){
    //         count++;
    //     }
    //     if(count > 1) break;
    //     n = n>>1;
    // }
    // if(count == 1) cout << "Power of 2" << endl;
    // else cout << "Not a power of 2" << endl;



    // Swap Alternates

    int arr[5] = {10, 4, 2, 4, 7};
    swapAlternates(arr, 5);
    printingArray(arr, 5);


    return 0;
}