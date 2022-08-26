#include <iostream>
#include <unordered_set>
using namespace std;

int findMinIndex(int arr[], int n)
{
    int minIndex = n;
 
    
    unordered_set<int> set;
 
   
    for (int i = n - 1; i >= 0; i--)
    {
        
        if (set.find(arr[i]) != set.end()) {
            minIndex = i;
        }
        
        else {
            set.insert(arr[i]);
        }
    }
 
   
    if (minIndex == n) {
        return -1;
    }
 
    return minIndex;
}
 
int main()
{
    int arr[100] ;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    int minIndex = findMinIndex(arr, n);
 
    if (minIndex != n) {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
    else {
        cout << "Invalid Input";
    }
 
    return 0;
}