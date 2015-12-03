#include <stdio.h>

// finding 0 + 1 + .... + (n-1) + n
// 0 + 1 + .... + n = n + (0 + 1 + ... + (n-1))
// therefore, sum(n) = n + sum(n-1) if n != 0
int sum1(int n) {
    // notice one thing: we are ignoring negative numbers for simplicity
    // recursive functions normally have base cases when they stop
    // here the base case is when n == 0, because we already know that sum(0) = 0
    if(n == 0) return 0;
    else return n + sum1(n - 1); // when n > 0, we know that 0 + .. + (n-1) + n = n + (0 + .. + (n-1))
    // just like we can call other functions in main, like printf, puts, pow, etc.. we can cal the function itself
    // recursion is a fancy term for calling itself.
    // we just calculate sum(n-1), then add n with it 
}
// the above code, when n = 100,000,000 approx. 900 mb(or MB, I'm not sure) maybe be used up.
// a faster recursive solution is using tail-call
// on mordern good compilers, this'll get optimised to use way less memory, when -O2 is set
int sum2(int n, int accumulator) {
    if(n == 0) return accumulator;
    else return sum2(n - 1, n + accumulator);
}
// when we call sum(10, 0), we get ->
//  sum(10, 0) -> sum(9, 10 + 0) -> sum(8, 10 + 9 + 0) -> sum(7, 10 + 9 + 8 + 0) -> sum(6, 10 + 9 + 8 + 7 + 0)
//->sum(5, 10+9+8+7+6)->....->sum(0,10+9+8+7+6+5+4+3+2+1) -> 10+9+8+7+6+5+4+3+2+1 -> 55
// since a+b = b+a, the order doesn't matter

// another important function that we code using recursion
// gcd(0, b) = b
// gcd(b, 0) = b
// gcd(a, b) = gcd(b % a, a)
// Euclid's Algorithm for the Greatest Common Divisor(or HCF, Highest Common Factor) of a and b
int gcd(int a, int b) {
    if(a == 0) return b;
    else return gcd(b % a, a);
}
// of-topic:
// in Python, gcd can be coded very nicely
// def gcd(a, b):
//    while a != 0: a, b = b % a, a
//    return b
// and, sum function can be(in C)
int sum3(int n) {
    return n*(n+1)/2;
}

typedef long long ll;
int odd(ll n) {
    return n & 1LL;
}
// recursion can be used to implement pow function(for positive integers)
// here, ^ means power
// b^p = (b^(p/2))^2
ll pow_ll(ll base, ll power) {
    if(power == 0) return 1;
    ll half_pow = pow_ll(base, power / 2);
    if(odd(power)) half_pow *= base;
    return half_pow;
}

int main() {
    
    return 0;
}
