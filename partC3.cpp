#include <iostream>

int removeduplicate(int arr[], int  n){
    int j=0;
for(int i=0;i<n;i++){
    if(arr[i]!=arr[i+1]){
         arr[j]=arr[i];
        j++;  
        continue;   
}
}
return j;
}

int  main(){

    int n;
    std::cout<<"Hw many  number you  want  to  enter?:";
    std::cin>>n;
    int  array[n];
     std::cout<<"Enter those numbers:";
    for(int i=0;i<n;i++){
        std::cin>>array[i];
    }
   
    int result=removeduplicate(array, n);
    std::cout<<"New size:"<<result<<std::endl;
    std::cout<<"Those  are:";
for(int i=0;i<result;i++){
    std::cout<<array[i]<<" " ;
    
}
return 0;
}