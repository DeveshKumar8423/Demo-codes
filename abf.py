# Get the list of numbers from the user
numbers = input("Enter a list of numbers : ").split()

# Create two empty lists to store the even and odd numbers
even_numbers = []
odd_numbers = []

# Iterate over the list of numbers and add each number to the appropriate list
for number in numbers:
    if int(number) % 2 == 0:
        even_numbers.append(int(number))
    else:
        odd_numbers.append(int(number))

# Print the even and odd numbers
print("Even numbers:", even_numbers)
print("Odd numbers:", odd_numbers)

# Add the elements of the even and odd lists
sum_of_even_numbers = sum(even_numbers)
sum_of_odd_numbers = sum(odd_numbers)

# Print the sum of the even and odd numbers
print("Sum of even numbers:", sum_of_even_numbers)
print("Sum of odd numbers:", sum_of_odd_numbers)