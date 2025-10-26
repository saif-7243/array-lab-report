#include<stdio.h>

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], i, target, check = 0;
    printf("Enter elements of Array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter target number: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++){
        if(arr[i] == target){
            check = 1;
            break;
        }
    }

    if(check == 1)
        printf("Found at index %d", i + 1);
    else
        printf("Not found");

    return 0;
 }
