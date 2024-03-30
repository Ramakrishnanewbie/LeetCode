class Solution(object):
    def reverse(self, x):
        f=0
        if(x<0):
          x=x*-1
          f=1
        num = str(x)
        result = int(num[::-1])
        if(-2**31 <= result <=2**31-1 and -2**31 <= x <=2**31-1):
          if(f==1):
            result=result*-1
          else:
            result=result
        else:
          result=0
        return result
