// //指针
// #include <stdio.h>
// int main(){
// //指针变量存放指针，类型为指向数据的类型,指针都是四个字节
// //类型名 *变量名 %p打印地址类型的数据16进制，避免访问未初始化的野指针
//     // char a ='f';
//     // char *pa=&a;
//     // printf("%c",*pa);
//     // *pa+=1;
//     // printf("%c",*pa);
//     // printf("%c",a);
// //指针和数组
//     // int a;
//     // int *p = &a;
//     // scanf("%d",&a);
//     // printf("%d",a);
//     // scanf("%d",p);//p是地址，&p是指针的地址，所以不可加
//     // printf("%d",a);
//     // char str[128];
//     // printf("input");
//     // scanf("%s",str);
//     // printf("%s\n",str);
//     // printf("%p\n",str);
//     // printf("%p\n",&str[0]);//数组名就是第一个元素的地址，元素
//     //字节相差数为指向数组类型字节数
//     //字符串数组不能匹配空格？？
//     //p=a == p=&a[0]等值
//     /*当指针指向数组元素的时候，我们可以对指针变量进行加减运算，
//     这样做的意义相当于指向距离指针所在位置向前或向后的第n个元素*/
//     //simple code 
//     // char c[]="Fishc";
//     // char *p =c;
//     // printf("%c %c %c %c",*(p+1),*(p+2),*(p+3),*(p+4));
//     //p+1不是简单的将地址加1
//     //another：
//     // char *str ="I love Fishc.com!";
//     // int len;
//     // len = 17;
//     // for (int i = 0; i < len; i++)
//     // {
//     //     printf("%c",str[i]);
//     //     /* code */
//     // }
//     //指向了一个字符串常量
    
//     return 0;
// }