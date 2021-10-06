void process(){
    int n = 1e4;
    bool isPrime[n+1] = {};
    fill(isPrime+2, isPrime + n, true);
    for (int i = 2; i <= n; i++)
        if (isPrime[i])
            for (int j = 2; j*i <= n; j++)
                isPrime[j*i] = false;
}