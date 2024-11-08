#include <gmp.h>
#include <stdio.h>

void fibonacci(mpz_t term, mpz_t n);
    
int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Provide a number\n");
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    } else if (argc > 2) {
        printf("Provide only one number\n");
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    mpz_t n;
    int is_input_valid = mpz_init_set_str(n, argv[1], 10);

    if (is_input_valid != 0) {
        printf("Incorrect input. Type a valid integer\n");
        return 1;
    } else if (mpz_cmp_ui(n, 0) < 0) {
        printf("Only positive integers are valid\n");
        return 1;
    }

    mpz_t fibonacci_term;

    mpz_init(fibonacci_term);

    fibonacci(fibonacci_term, n);

    gmp_printf("%Zd\n", fibonacci_term);

    return 0;
}

void fibonacci(mpz_t term, mpz_t n) {
    mpz_t previous_1, previous_2, i;

    if (mpz_cmp_ui(n, 0) == 0) {
        mpz_set_ui(term, 0);
        return;
    } else if (mpz_cmp_ui(n, 1) == 0) {
        mpz_set_ui(term, 1);
        return;
    }

    mpz_init_set_ui(previous_1, 1); 
    mpz_init_set_ui(previous_2, 0);

    for (mpz_init_set_ui(i, 1); mpz_cmp(i, n) < 0; mpz_add_ui(i, i, 1)) {
        mpz_add(term, previous_1, previous_2);
        mpz_set(previous_2, previous_1);
        mpz_set(previous_1, term);
    }
}
