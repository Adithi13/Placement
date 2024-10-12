## Python: `bytes` and `bytearray`

In Python, both `bytes` and `bytearray` are used to represent sequences of bytes. They are immutable and mutable types, respectively, and provide a way to work with binary data.

### Differences:

| **Aspect**            | **bytes**                                 | **bytearray**                                  |
|-----------------------|-------------------------------------------|------------------------------------------------|
| **Type**              | Immutable sequence of bytes               | Mutable sequence of bytes                      |
| **Definition Syntax** | Defined using the `b''` syntax            | Defined using the `bytearray()` constructor    |
| **Elements**          | Integers in the range 0 to 255            | Integers in the range 0 to 255                 |
| **Mutability**        | Immutable; elements cannot be modified    | Mutable; elements can be modified after creation|

### Example: Demonstrating the use of `bytes` and `bytearray`

```python
# bytes
my_bytes = b'Hello'
print("bytes:", my_bytes)

# bytearray
my_bytearray = bytearray(b'Python')
print("bytearray:", my_bytearray)

# Modifying bytearray
my_bytearray[0] = 80
print("Modified bytearray:", my_bytearray)

# Output:
# bytes: b'Hello'
# bytearray: bytearray(b'Python')
# Modified bytearray: bytearray(b'Python')
