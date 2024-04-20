#include "array.h"

/* Compare */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Search value */
int sequentialSearch(int *arr, int len, int key)
{

    for(int i=0;i<len;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int binarySearch(int *arr,int len,int key){

    int left=0,right=len-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==arr[key]){
            return mid;
        }else if(arr[mid]<key){
            left=mid+1;
        }else if(arr[mid]>key){
            right=mid-1;
        }
    }
    return -1;

}

/* Find with condition */
int findExtreme(int *arr,int len,bool (*compare)(int a,int b)){
    int bestIndex=0;
    for(int i=0;i<len;i++){
        if (compare(arr[i],arr[bestIndex])){
            bestIndex=i;
        }
    }
    return bestIndex;
}





/* Sort */
void selectionSort(int *arr,int len,bool (*compare)(int a,int b)){

    for(int i=0;i<len-1;i++){
        int betterIndex=i;
        for(int j=i+1;j<len;j++){
            if(compare(arr[j],arr[i])){
                betterIndex=j;
            }
            if(betterIndex!=i){
                swap(arr[betterIndex],arr[i]);
            }
        }
    }
}

void insertionSort(int *arr,int len,bool (*compare)(int a,int b)){
   
   for(int i=1;i<len;i++){
        int pos=i;
        int temp=arr[i];

        while(pos>0 && compare(arr[pos-1],temp)){
            if(pos!=i){
                swap(arr[i],arr[pos]);
            }

        }

   }
}

void selectionSort(int *arr,int len,bool (*compare)(int a,int b)){
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(compare(arr[i],arr[j])){
                swap(arr[i],arr[j]);
            }
        }
    }
}

/* Count */






