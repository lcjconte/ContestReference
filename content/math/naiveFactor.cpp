map<ll, int> factor(ll n) {
    map<ll, int> factors;
    for (ll i = 2; i * i <= n; i++) {
        int c = 0;
        while (n % i == 0) {
            c++;
            n /= i;
        }
        if (c > 0) factors[i] = c;
    }
    if (n > 1) factors[n]++;
    return factors;
}