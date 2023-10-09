t=int(input(""))


while t>0:
    sum1=0
    sum2=0
    n=input("")
    for i in range(3):
        x=int(n[i])
        sum1=sum1+x
    for j in range(3,6):
        y=int(n[j])
        sum2=sum2+y

    if(sum1==sum2):
        print("YES")
    else:
        print("NO")
    t=t-1