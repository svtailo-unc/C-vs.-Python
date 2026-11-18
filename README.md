# C vs Python: Prime Number Benchmark

## Overview

<!-- Introduce your topic, explain what you explored, and summarize your most interesting discoveries. -->

_Write your overview here._

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