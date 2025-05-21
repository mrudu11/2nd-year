import numpy as np
from scipy.stats import mode
array =np.array([1,2,2,3,3,3,4,4,4,4])
print(np.bincount(array).argmax())