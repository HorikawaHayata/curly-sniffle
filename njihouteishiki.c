#include<stdio.h>
#include<math.h>

int kaimotome(){
    double a,b,c,d;
    
    printf("係数a、b、c、を入力してください。\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    
    if(a==0){
    printf("aには0以外を入力してください。\n");
    return 1;
    }
    else{
    d = b * b - 4 * a * c;
    
    if(d<0){
        printf("実数解なしです。\n");
    }
    else if(d == 0){
            printf("重解となり答えは%gです。\n",-b/(2*a));
        }
    else{
            printf("解は%gと%gです。\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
        }
    }
    return 0;
}

int main(){
    printf("二次方程式を解きます。\n");
    kaimotome();
    printf("求めることができました。次はaに0を入力してください。\n");
    kaimotome();
}
