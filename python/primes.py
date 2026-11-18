LIMIT = 1000000

primes = []

def is_prime(n: int):
    for p in primes:
        if n%p == 0:
            return False
    return True


for i in range(LIMIT)[2:]:
    #print(i)
    if(is_prime(i)):
        primes.append(i)
        print(i)