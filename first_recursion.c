#include<stdio.h>
#include<conio.h>
int main(){
    int result = 0;
    int sub_prob = 0;
    int sum(int num){
    if(num == 5){
            return 0;
    }
    else{
            sum(num+1);
            //result += num;
            return result += num;
        }
    }
int k = sum(0);
printf("result %d", k);
return 0;
}
