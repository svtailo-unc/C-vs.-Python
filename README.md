# C vs Python: Prime Number Benchmark

#### Presentation: https://canva.link/34hvcs1rv1z5zkf

## Overview

### Goal
Benchmark the performance of C vs. Python

### Method
- Create programs that iterates to a value N and print primes along the way 
- Use similar algorithm and same hardware. 
- Time the full run and inner loop of both across 5 different run 

### Results
#### Full Program

| Run #   | C (s)  | Python (s) |
|---------|--------|------------|
| Run 1   | 10.019 | 52.748     |
| Run 2   | 9.690  | 52.587     |
| Run 3   | 9.632  | 52.882     |
| Run 4   | 9.589  | 52.995     |
| Run 5   | 9.658  | 53.306     |
| **Average** | **9.718** | **52.904** |

#### Inner Loop Only

| Run #   | C (s)  | Python (s) |
|---------|--------|------------|
| Run 1   | 9.706  | 52.704     |
| Run 2   | 9.685  | 52.545     |
| Run 3   | 9.627  | 52.841     |
| Run 4   | 9.584  | 52.970     |
| Run 5   | 9.653  | 53.264     |
| **Average** | **9.651** | **52.865** |




## How to Use

### C

1. Compile the program:

   ```bash
   gcc -o primes primes.c int_vector.c
   ```

   This builds `primes.c` together with `int_vector.c` into an executable named `primes`.

2. Run it with `time` to measure the whole program:

   ```bash
   time ./primes
   ```

### Python

Python doesn't need compiling. Run the script with `time`:

```bash
time python3 primes.py
```

### Reading the output

The shell's `time` command prints three numbers:

- **real**: wall-clock time from start to finish (what you actually wait for)
- **user**: CPU time spent running the program's own code
- **sys**: CPU time spent in the operating system on the program's behalf (I/O, memory)

Each program also prints its own in-code timing, which measures **only the prime-finding loop**. The gap between `real` and the loop time is overhead: process startup, Python interpreter loading and output.

For reliable results, run each command several times (for example 10) and compare averages rather than a single run.