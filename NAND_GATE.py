#implentation of NAND GATE
def artificial_NAND(input,weight,bias):
    #initialise sum to 0
    weighted_sum =0
    #calculate the weighted sum
    for i in range(len(input)):
      weighted_sum+=input[i] * weight[i]

    #apply the activation function (step function)
    output = 1 if weighted_sum > 0 else 0

    return output

    # Test the artificial neuron
input =[1,1] #[0,1],[0,0],[1,1],[0, 0]
weight = [-1,-1]
bias = 1
result = artificial_NAND(input, weight, bias)

print("Output:", result)
