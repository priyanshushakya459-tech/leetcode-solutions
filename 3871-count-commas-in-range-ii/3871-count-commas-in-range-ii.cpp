class Solution {
public:
    long long cc(long long n) {
        if (n < 1000) return 0;
        if (n >= 1000000000000000LL)
    return cc(1000000000000000LL - 1) + 5 * (n - 1000000000000000LL + 1);
    
        if (n >= 1000000000000LL)
            return cc(1000000000000LL - 1) + 4 * (n - 1000000000000LL + 1);

        if (n >= 1000000000LL)
            return cc(1000000000LL - 1) + 3 * (n - 1000000000LL + 1);

        if (n >= 1000000LL)
            return cc(1000000LL - 1) + 2 * (n - 1000000LL + 1);

        // 1000 to 999999
        return (n - 1000 + 1);
    }

    long long countCommas(long long n) {
        return cc(n);
    }
};