#include<stdio.h>

#include<stdlib.h>

#include<Windows.h>

//定于数组的大小

#define N 10

void main(){

    //某些场合，我们可能不是要遍历数组，而是重复的遍历这个数组，我偶然学到了这个方法

    int a[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int index = 0;

    while (1){

        //确保数组不会越界

        if (index>N - 1)

        {

            index = 0;

            //每一次循环来个换行

            printf("\n");

            Sleep(2000);

        }

        //做自己想实现的操作

        printf("%5d",a[index]);

        index++;

    }

    system("pause");

}
