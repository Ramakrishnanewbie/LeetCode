class Solution(object):
    def reverse(self, x):
        f=1
        if x<0:
            number=str(int(-1 * x))
            f=0
        else:
            number=str(x)

        number_rev=number[::-1]
        

        l= (-2)**31
        h= (2**31) - 1
        if(l <= int(number_rev) <=h):
            if(f==0):
                number_rev=int(number_rev)*(-1)
            else:
                number_rev=int(number_rev)
            return number_rev
        else:
            return 0

        