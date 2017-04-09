"""
this program works by graphing a bunch of points of one
"""
## setup
# defaults
s = 1000 # number of samples
d = 20 # diameter
print("samples: " + str(s))
print("diameter: " + str(d))
# input
if (input("defaults? y/n \n :") == "n"):
    s = float(int(input("samples: "))) # number of samples
    d = float(input("diameter: ")) # diameter
# setup variables
r = d / 2 # radius
res = d / s # resolution per unit
rs = r ** 2 # radius squared
c = 0 # circumference

# start calculations
x = 0
while(x <= r):
    ## calculate points
    p = [] # points array for storage
    p.append(x)
    # calculate first y value
    p.append((rs - (x ** 2)) ** 0.5)
    # x step
    x += res
    p.append(x)
    # calculate second y value
    p.append((rs - (x ** 2)) ** 0.5)
    # x step
    x += res
    #print(p)
    ## calculate distance
    d = ((((p[0] - p[2]) ** 2) + ((p[1] - p[3]) ** 2)) ** 0.5)
    #print(d)
    c += d

# deal with offsets
c *= 4
print(c)
# the magic
print(c / r)
