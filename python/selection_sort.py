"""
Best case   : O( N^2 )
Worst case  : O( N^2 )
Average case: O( N^2 )
"""

def sort(IN):
    for i in range(1,len(IN)):
        now = i-1
        for j in range(i,len(IN)):
            if IN[j] < IN[now] : now=j
        IN[i-1] , IN[now] = IN[now],IN[i-1]
        print(f"Cycle {i} , LIST: {IN}")
    #return IN

if __name__ == "__main__":
    _IN  = [1,3,4,20,7,8,4,32,0,5]
    print(f"Unsort  , LIST: {_IN}")
    sort(_IN)