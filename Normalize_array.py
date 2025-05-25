#6 Normalize array(scaling values between 0 to 1)
import numpy as np
scores = np.array([50, 80, 90, 60, 75, 85])

min_score = np.min(scores)
max_score = np.max(scores)
normalized_scores = (scores - min_score) / (max_score - min_score)

print("Original scores:", scores)
print("Normalized scores:", normalized_scores)
