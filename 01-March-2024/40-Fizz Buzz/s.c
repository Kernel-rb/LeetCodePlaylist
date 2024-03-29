char** fizzBuzz(int n, int* returnSize) {
    char** answer = (char**)malloc(sizeof(char*) * n);
    for (int i = 1; i <= n; i++) {
        if (i % 15 == 0) {
            result[i - 1] = "FizzBuzz";
        } else if (i % 3 == 0) {
            result[i - 1] = "Fizz";
        } else if (i % 5 == 0) {
            result[i - 1] = "Buzz";
        } else {
            result[i - 1] = (char*)malloc(sizeof(char) * 12);
            sprintf(result[i - 1], "%d", i);
        }
    }
    *returnSize = n;
    return result;
}