#!/usr/bin/env python
# coding: utf-8

# In[36]:


import numpy as np
import matplotlib.pyplot as plt


# In[37]:


x=np.array([1,10,20,40,60,71,80,95,120,125])
y=np.array([3,20,90,110,130,170,150,220,260,300])


# In[38]:


n = np.size(x)
meanx=np.mean(x)
meany=np.mean(y)
CDxy=np.sum(y*x)-n*meany*meanx
CDxx=np.sum(x*x)-n*meanx*meanx
a1=CDxy/CDxx
a0=meany-a1*meanx
print(a0)
print(a1)


# In[39]:


plt.xlabel('x')
plt.ylabel('y')
plt.scatter(x,y)
ypred = a0 + a1*x
plt.plot(x,ypred,color="red")
plt.show()


# In[ ]:




