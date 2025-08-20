#include <iostream>
void shoted (int arr[], int  n){
    
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
       if(arr[j]<arr[min]){
        min=j;}
       }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
         
       }
    } 




int  main(){
    int n;
    std::cout<<"How many number you want to  input?:";
    std::cin>>n;
    int  arr[n];
    std::cout<<"Enter those numbers:";
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
shoted(arr, n);
std::cout<<"shorted array:";
for(int i=0;i<n;i++){
    std::cout<<arr[i]<<" ";
}
return 0;
}