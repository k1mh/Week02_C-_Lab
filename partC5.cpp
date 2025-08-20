#include <iostream>

int searchnumber(int n, int arr[],int num){
    for(int i=0;i<n;i++){
        if(num==arr[i]){
          return i;

        }
    }
    return -1;
}

int  main(){
    int n;
    std::cout<<"How many number you want to enter?:";
    std::cin>>n;
    int array[n];
    std::cout<<"Enter those  number:";
    for(int i=0;i<n;i++){
        std::cin>>array[i];
    }
    int num;
    std::cout<<"Search  for  numer:";
    std::cin>>num;
    int result=searchnumber(n, array, num);
    if(result==-1){
           std::cout<<"Element  not  found.";
    }else {
       std::cout<<"Element found  at  index:"<<result;
    }

    return 0;
}