// #include <stdio.h>
// int main(){
//     //lvalue rvalue 
//     // char str[] = "I love fishc.com!";
//     // char *p =str;
//     // int num = 0;
//     // while(*p++ != '\0'){//必须用指针，数组名不是可修改的左值
//     //     num++;
//     // }
//     // printf("%d\n",num);
//     //指针数组和数组指针
//     //指针数组：
//     //int *p1[5];//符号优先级，先定义数组在取值，数组元素非整型而是一个指针变量，存放地址的数组
//     //ep:
//     // int a=1,b=2,c=3,d=4,e=5;
//     // int *p[5]= {&a,&b,&c,&d,&e};
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     /* code */
//     //     printf("%d\n",*p[i]);
//     // }
//     //指向字符指针：
//     // char *p1[5]={
//     //     "One Tap",
//     //     "Just do it",
//     //     "One more thing",
//     //     "Never give up",
//     //     "Fight fight fight"
//     // };
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     /* code */
//     //     printf("%s\n",p1[i]);
//     //     //个人理解：p[i]是指针变量，打印时打印指针指向的值
//     //     //p1中的每一个元素指向每一个字符串数组的首地址，相当于打印一维字符串数组
//     // }
//     //数组指针：
//     //int (*p2)[5];//定义一个指针变量指向一个元素为5的数组，
//     //数组元素类型确定为int；
//     //初始化：int *p = arr;指向的是指针的第一个变量，这里指向的是整个数组，
//     //虽然他们的值相等，但是性质不同
//     //因此正确的定义是
//     //int temp = {}
//     //int (*p2)[5]=&temp;   
//     //printf("%d",*(*p2+i)); p2指向整个数组，*p2解析出元素地址让他递增，*(*p2)解析出元素具体的值
//     //引用文章：https://blog.csdn.net/m0_51946749/article/details/109300384
//     return 0;
// }