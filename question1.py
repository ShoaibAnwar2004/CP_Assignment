n=int(input())
arr=[]
for i in range(n):
    i=int(input())
    arr.append(i)
    from statistics import mode
    print(f'max,min,sum,average and mode after addtion of {i} is ',max(arr),' ,',min(arr),',',sum(arr),',',sum(arr)//len(arr),',',mode(arr),'.')