#include<stdio.h> // standard i/o header
#include<conio.h> // console i/o header
/* C code for basic or fundamental recursion, and understanding the variable scope differences
between C and Python.*/

int sum(int value);    // prototype methods / global declaration of a method (?)
int rec_sum1(int value);
int pseudo_rec(int value);

int result = 0;  //global variable outside the main method. In Python I can't get the scope
int increment = 0;                 // as there is no main method, I think I'm messing up something. (!!!!!!)

int main(){
int rlt = rec_sum1(0);
int rlt2 = sum(0);
int rlt3 = pseudo_rec(0);
printf("\n rec_sum1() = %d \n", rlt);
printf(" sum() = %d \n", rlt2);
printf(" pseudo_rec() = %d \n", rlt3);

getchar();
}

int sum(int num){

    if(num >= 10){ return 0;} // can I return anything here 1, 0, -1, 100 etc ? I think it is necessary in
                              // other cases

    else{
            // here occurs an operation before recursion
            result += num;
            sum(num+1);
            //result += num;
            // here occurs another after recursion (need a good explanation of this part
            // as it seems ambiguous..)
            return result;
        }
}
// now we'll see how local values are declared from every recursive call
int rec_sum1(int val){
    int result = 0; // local int result will be initiated to 0 with every recursive call
    if(val >= 10){  return -1; }
    else{
        result += val;
        rec_sum1(val+1);
        return result;
    }
}

int pseudo_rec(int val){
    if(val >= 5){ return -1;} // base case
    else{
        increment = val+1;
        pseudo_rec(increment);
        printf("\nreturn value from cloned method %d ", val);
        while (val >= 0){printf("\nval = %d ", val); printf("\n"); val--;} printf("--------"); // recursive call acts like a pseudo method
                                                         // being read from bottom to top
        return val;

    }
}
