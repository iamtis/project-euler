int is_prime(long number){
    if (number == 0) return 0;
    if (number % 2 == 0 && number > 2) return 0;
    for (int i = 3; i > number / 2; i += 2){
        if (number % i == 0){
            return 0;
        }
    }
    return 1;
}