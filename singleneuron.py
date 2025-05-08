#implementation of single neuron
def artificial_neuron(input, weight, bias):
    # Initialize sum to 0
    sum = 0

    # Calculate the weighted sum
    for i in range(len(input)):
        sum += input[i] * weight[i]

    # Add bias to the sum
    sum += bias


    # Apply the activation function (step function)
    output = 1 if sum > 0 else 0

    return output

# Test the artificial neuron
input = [2, 3]
weight = [0.5, 0.8]
bias = -1
result = artificial_neuron(input, weight, bias)

print("Output:", result)
