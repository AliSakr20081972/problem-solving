#include <iostream>
# include <vector>
using namespace std;

void ThreeWaysPartitioning(vector<int> &arr ,int minimumNumber, int maximumNumber){
  int end = arr.size() - 1;
  int iterator = 0;
  int start = 0;
  while(iterator < end){
        if(arr[iterator] < minimumNumber){
             swap(arr[iterator], arr[start]);
             start++;
             iterator++;
        }
        else if(arr[iterator] > maximumNumber){
             swap(arr[iterator], arr[end]);
             end--;
        }
        else{
             iterator++;
        }
 }
}
int main(){
   vector<int> arr = {1,4,3,6,2,1};
   ThreeWaysPartitioning(arr, 2, 5);
   for(int i = 0; i < arr.size(); i++){
       cout << arr[i] << " ";
   }
   return 0;
}