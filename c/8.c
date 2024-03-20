/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int num;

    int plus=0;
    int multi=1;

    scanf("%d",&num);

    if(num==0)
    {
        printf("0\n");
        printf("1");
    }
    else
    {

        for(int i=1; i<=num;i++)
        {
            plus+=i;
        }
        for(int i=1;i<=num;i++)
        {
            multi=multi*i;
        }
        printf("%d\n",plus);
        printf("%d",multi);
   
    }

    return 0;
}