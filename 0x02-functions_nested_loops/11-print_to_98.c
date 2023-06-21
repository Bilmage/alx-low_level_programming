void print_number(int n) {
    if (n == 0) {
    putchar('0');
    return;
    }

    if (n < 0) {
    putchar('-');
    n = -n;
    }

    int reversed = 0;
    while (n > 0) {
    reversed = reversed * 10 + (n % 10);
    n /= 10;
    }

    while (reversed > 0) {
    putchar('0' + (reversed % 10));
    reversed /= 10;
    }
    }

    void print_to_98(int n) {
    if (n <= 98) {
    for (int i = n; i <= 98; i++) {
    print_number(i);
    if (i != 98) {
    putchar(',');
    putchar(' ');
    }
    }
    } 
    else
    {
    for (int i = n; i >= 98; i--) {
    print_number(i);
    if (i != 98) {
    putchar(',');
    putchar(' ');
    }
    }
    }
    putchar('\n');
    }
