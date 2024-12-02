// #include <stdio.h>
// int main(){
//     int temp;
//     int arr[] = {2,3,1,7,56,45,897,5435,4444,54564,66};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     for(int i =0 ;i <len -1;i++){
//         for (int j = 0 ; j<len-1-i;j++){
//             if(arr[j] > arr[j+1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     for (int k =0;k <len;k++){
//         printf("%d\n",arr[k]);
//     }
//     return 0;
// }