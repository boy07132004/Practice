"""
Best case   : O( NlogN )
Worst case  : O( N^2 )
Average case: O( NlogN )
"""

def sort(IN):
    LEFT = []
    RIGHT = []
    if len(IN)<2:return IN
    for i in range(1,len(IN)):
        if IN[i]<=IN[0]:LEFT.append(IN[i])
        else:RIGHT.append(IN[i])
    return (sort(LEFT)+[IN[0]]+sort(RIGHT))

if __name__ == "__main__":
    _IN = [8,7,4,3,2,7,1,2,9]
    print(f"Unsort  :{_IN}")
    print(f"Sorted  :{sort(_IN)}")