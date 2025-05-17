#3 total revenue form product sold
import numpy as np
quantities = np.array([10,15,7,20])
prices = np.array([50,40,100,30])
revenue = prices*quantities
total_revenue = np.sum(revenue)
print(revenue)
print(total_revenue)

