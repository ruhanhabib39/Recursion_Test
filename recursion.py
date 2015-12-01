__author__ = 'Phoenix'
"""
first we'll see how a simple function works with loops/ return etc.
We know every line of a function is read by the compiler from up -> down and left -> right.
We'll take sum of first 10 numbers in a nubes'  way..... These are very basic and from the scratch
ideas to clarify BASICS... before intermediate stage !!!!
"""


def basic_sum(num):
    result = 0  # a local integer for storing sum of first ten numbers
    while num <= 10:
        result += num
        num += 1
    return result
# rst = basic_sum(0)
# print rst
"""
now  we'll increase num value using recursion instead of a loop.
Notice here we can't use result outside rec_sum() method like C.
It refers result as 'Unresolved reference'
on the other hand a list data type worked well in the second example. in this regard
.......... need detailed clarification of
variable/ data type scopes in Python Language. A very Basic and damn Important issue I think
"""
result = 0 # how to use result as a global value for rec_sum() ? need explanation

def rec_sum(num):
    ''' this method need polishing regarding the issues'''
    if num > 10:
        return 1    # we can return as we wish 1, 0, -1, string or none
    else:
        # result += num
        rec_sum(num+1)
        # lst.append(num)
        return num


"""
-----------------------------------------------------------------------------------------------
Abdul Mazid's adventures to unearth the mystery of an attractive and illusive lady named
Recursive Function. She loves him, she loves someone else. But none can prove !!!!!!!!!!
Let's Trace it !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
-----------------------------------------------------------------------------------------------
Now we'll attempt to a query/ trace that the mystery of a recursive is divided into two parts
1. some works before recursive calls (She loves Mazid everyone can see)
2. some works after recursive calls (She has affair with another guy under the veil)
While debugging, Mazid found the recursive calls act like a pseudo function along with
return statement. As if there were many copies of the function and the 'return' statement returns the
values of those methods.
Or simply we can say the pseudo function block works like a function being read by the compiler from
bottom to top. let's go to code,
Simply we'll count from 0 to 10................. :D
"""


def rec_count(val):
    if val > 10:    # our base case
        print 'Move your ass safe! else stack will be overflowed!\n'
        return 'Ok Packup buddy stack is over!'
    else:
        print val  # Yes how much Miss Recursion Loves Mazid you can see.
        rec_count(val+1)
        return "We're yet to see the secret in the next method\n"
# ans = rec_count(0)
# print ans
hacker = []


def rec_count1(val):
    if val > 10:    # our base case
        return 1  # we can ignore base case for now. we'll use him to prevent stack overflow
    else:
        # print val,  # Yes how much Miss Recursion Loves Mazid you can see.
        rec_count1(val+1)
        hacker.append(val) # append return values from the previous copies
        # print hacker,        # now we'll see how the previous values returned from past 'copies' /
                               #  of the same method. we've hired a hacker to capture what Ms Recursive shares with others
        return hacker

# rlt = rec_count1(5)
# print 'see the previous return values: ', hacker

'''
Now we'll see how the recursive method acts like pseudo method, from bottom to top, after
recursive calls..........
'''


def rec_count2(val):
    if val > 10:
        return 0
    else:
        #  here some works go on
        rec_count2(val+1)
        if val >= 0:  # or we can use any expressions regarding the values
            print 'return value from cloned method: %d  is  %d' % (val, val)
        return 1
        '''
        this block acts like an individual function being read from bottom to top
        rec_count2(val+1)
        if val >= 0:  
            print 'return value from cloned method: %d  is  %d' % (val, val)
        return 1
        '''


# rec_count2(0)
