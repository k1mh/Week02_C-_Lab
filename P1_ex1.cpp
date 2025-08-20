#include <iostream>
int findmax(int  arr[], int  size){
    int max = arr[0];
    for(int i=0;i<size;i++){
            if(max<arr[i]){
                max=arr[i];
       }
    }
    return max;
}

int  main(){
    int n;
    std::cout<<"How  many number  you  want to enter?:";
    std::cin>>n;
int array[n];
std::cout<<"Enter  your  number:";
for(int i=0;i<n;i++){
std::cin>>array[i];}

    int maximum=findmax(array ,n);
    std::cout<<maximum<<std::endl;
    return 0;
}