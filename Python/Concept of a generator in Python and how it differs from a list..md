In Python, a generator is a special type of iterable, allowing you to iterate over a potentially large sequence of data without loading the entire sequence into memory. It generates values on-the-fly and is defined using a function with the ***yield*** keyword.
| **Aspect**       | **List**                                      | **Generator**                                          |
|------------------|-----------------------------------------------|--------------------------------------------------|
| **Memory Usage**     | Stores all values in memory, potentially consuming more memory | Yields values one at a time, conserving memory|
| **Lazy Evaluation**   | tores all values in memory, leading to immediate creation.                     | Generates values on demand, using the yield statement                |
| **Iteration**   | Supports direct access by index, allowing random access to elements.| Uses a loop to iterate over values generated on each yield call.|

### Example:

```python
# Generator function
def square_numbers(n):
    for i in range(n):
        yield i ** 2
# Using the generator in a loop
for num in square_numbers(5):
    print("Generated:", num)

# Output:
# Generated: 0
# Generated: 1
# Generated: 4
# Generated: 9
# Generated: 16

```

n this example, the square_numbers function is a generator that yields square numbers. The generator is used in a loop, and values are generated on each iteration, conserving memory and allowing lazy evaluation.
