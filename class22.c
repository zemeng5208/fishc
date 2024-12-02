// #include <stdio.h>
// int main()
// {
//     // //指向指针的指针
//     // int num =520;
//     // int *p = &num;
//     // int **pp = &p;
//     // //星号决定解引用几次可以获取类型值
//     // printf("%d\n",num);
//     // printf("%d\n",*p);
//     // printf("%d\n",**pp);
//     // printf("%p\n",*pp);printf("%p\n",&num);
//     // printf("%p\n",&p);printf("%p\n",pp);
//     // printf("%p\n",**pp);printf("%p\n",*p);
//     // 指针数组和指向指针的指针
//     //      char *p[] = {
//     //          "1vxzvxzv",
//     //          "2vcxvxvxvxvxvxvxv",
//     //          "你好",
//     //          "4",
//     //          "5",
//     //          "6vxcvvcvcvxv"
//     //      };
//     //      char **fishc;
//     //      fishc = &p[5];
//     //  char **jia[3];
//     //  jia[0]=&p[0];
//     //  jia[1]=&p[1];
//     //  jia[2]=&p[2];
//     //  printf("%s\n",*fishc);
//     //  for (int i = 0; i < 3; i++)
//     //  {
//     //      /* code */
//     //      printf("%s\n",*jia[i]);
//     //  }
//     // 数组指针和二维数组
//     //  int arr[3][4]={
//     //      {1,2,3,4},
//     //      {5,6,7,8},
//     //      {9,10,11,12}
//     //  };
//     //  //int **p =arr;
//     //  for (int i = 0; i <3; i++)
//     //  {
//     //      /* code */
//     //      for (int j = 0; j < 4; j++)
//     //      {
//     //          printf("%2d",*(*(arr+i)+j));//p保错
//     //          /* code */
//     //      }
//     //      printf("\n");
//     //      //编译器无法判断指针指向二维数组加减运算的字节增加数
//     //  }
    //int (*p)[4] = arr     等效于int (*p)[3][4]=&arr;
    //指向二维数组的第一个元素的地址
//     return 0;
// }