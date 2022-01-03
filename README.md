# String In Phone Number
```
|      |     |      |
|   1  |  2  |  3   |
|      | abc | def  |
|      |     |      |
|   4  |  5  |  6   |
|  ghi | jkl | mno  |
|      |     |      |
|   7  |  8  |  9   |
| pqrs | tuv | wxyz |
|      |     |      |
|      |  0  |      |
|      |     |      |
```
Given a string of numbers and a list of words. Determine whether the words, when converted using the image above, are expressed in the string of numbers. Output a list of words that were expressed in the given phone number.

## Example:

### Input:

```phoneNumber = "3662277"```

```words = ["foo", "bar", "baz", "foobar", "emo", "cap", "car", "cat"]```

### Output:

```output = ["foo", "bar", "foobar", "emo", "cap", "car"]```

### Explanation:

```"foo"``` becomes ```"366"``` when converted to a number based on the image above. The string ```"366"``` is located in ```phoneNumber = "3662277"```.

```"baz"``` becomes ```"229"``` when converted to a number based on the image above. The string ```"229"``` is not located in ```phoneNumber = "3662277"```.