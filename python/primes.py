import time

LIMIT = 1000000

primes = []

def is_prime(n: int):
    for p in primes:
        if n%p == 0:
            return False
    return True

start = time.perf_counter()

for i in range(LIMIT)[2:]:
    #print(i)
    if(is_prime(i)):
        primes.append(i)
        print(i)

end = time.perf_counter()

elapsed_s = end - start
print(f"Loop time: {elapsed_s:.6f} s")