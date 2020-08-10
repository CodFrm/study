#include<stdio.h>

int main() {
    float sum=0.0f;
    for (int i=0;i<20000000;i++) {
        sum+=1.0f;
    }
    //16777216.000000
    printf("%f\n", sum);

    sum=0.0f;
    float c=0.0f;
    for (int i=0;i<20000000;i++) {
        float y=1.0f-c;
        float t=sum+y;
        c=(t-sum)-y;
        sum=t;
    }
    //20000000.000000
    printf("%f", sum);
}