import random
n= 0
while(1):
    name = "test"+str(n)
    c = 0
    n += 1
    f = open(name,'w+')
    while(c<100):
        k = random.random()
        f.write("number is %d \n" %(k))
        c += 1
    f.close()
