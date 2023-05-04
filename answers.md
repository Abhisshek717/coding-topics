# Basic array operations
- Initializing an array of integers:  `C`
```
  void initializeIntArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        array[i] = i + 1;
    }
  } 
```

- Initializing an array of characters: `C`
```
  void initializeCharArray(char array[], int length) {
    char startChar = 'A';
    for (int i = 0; i < length; i++) {
        array[i] = startChar + i;
    }
  }
```

- Calculating the sum of elements in an array of integers: `C`
```
  int sumIntArray(int array[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    return sum;
  }
```

- Calculating the average of elements in an array of doubles: `C`
```
  double averageDoubleArray(double array[], int length) {
      double sum = 0;
      for (int i = 0; i < length; i++) {
          sum += array[i];
      }
      return sum / length;
  }
```

- Finding the maximum element in an array of integers: `C`
```
  int maxIntArray(int array[], int length) {
    int max = array[0];
    for (int i = 1; i < length; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
  }
```

- Finding the minimum element in an array of integers: `C`
```
  int minIntArray(int array[], int length) {
    int min = array[0];
    for (int i = 1; i < length; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
  }
```
- Copying the elements of one array into another array: `C`
```
  void copyIntArray(int source[], int destination[], int length) {
    for (int i = 0; i < length; i++) {
        destination[i] = source[i];
    }
  }
```
- Comparing two arrays to determine if they are equal: `C`
```
  bool compareIntArrays(int array1[], int array2[], int length) {
    for (int i = 0; i < length; i++) {
        if (array1[i] != array2[i]) {
            return false;
        }
    }
    return true;
  }
```
- Reversing the elements of an array: `C`
```
  void reverseIntArray(int array[], int length) {
    for (int i = 0; i < length / 2; i++) {
        int temp = array[i];
        array[i] = array[length - 1 - i];
        array[length - 1 - i] = temp;
    }
  }
```
- Rotating the elements of an array to the right by one position: `C`
```
  void rotateIntArray(int array[], int length) {
    int last = array[length - 1];
    for (int i = length - 1; i > 0; i--) {
        array[i] = array[i - 1];
    }
    array[0] = last;
  }
```
