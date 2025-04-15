#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int f,N;
    printf("Enter the no of bits for the sequence no.:");
    scanf("%d",&N);
    f=pow(2,N-1);
    for(int j=0;j<f;j++){
        printf("\n SENDER : Frame %d is sent",j);
    }
    for(int i=0;i<f;i++){
        printf("\n");
        int flag=rand()%2;
        if(!flag){
            printf("RECEIVER : Frame %d received correctly\n(acknowledgement %d received)\n",i,i);
        }
        else{
            printf("RECEIVER : Frame %d received correctly\n(acknowledgement %d lost)\n",i,i);
            printf("(sender timeouts-->Resend the frame)\n");
        }
    }
    printf("\n want to continue");
    return 0;
}