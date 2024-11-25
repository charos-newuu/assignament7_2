int presses(int *x) {
    int digit = *x % 10;
    int length = 0;
    int temp = *x;

    while (temp > 0) {
        length++;
        temp /= 10;
    }

    int total_presses = 0;
    for (int i = 1; i < digit; i++) {
        total_presses += i * length;
    }
    total_presses += length;

    return total_presses;
}
