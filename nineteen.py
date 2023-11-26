import numpy as np
import matplotlib.pyplot as plt
import math

L = 20
N = [10,100]
x = np.arange(0,40,0.01)
fig, a = plt.subplots(2,1)
i = 0
for value in N:
    sum = 0 
    for n in (1, value):
        term = ((((-1)**((n-1)/2))/n**2)*np.sin((n*math.pi*x)/L))
        sum = sum + term
    y = (8/((math.pi)**2))*sum
    a[i].plot(x,y)
    a[i].set_title('fourier series')
    i += 1
fig.tight_layout()
plt.show()
