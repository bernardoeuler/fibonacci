# Fibonacci
This program calculates the term at a given position in the fibonacci sequence. It can be **any** number (like the fibonacci of 1.000.000), without limitations other than you patience to wait for the result. This is because of the use of the GMP library (GNU Multiple Precision Arithmetic), which makes it possible to go beyond the limits of C in terms of integers representation.
The program runs very fast. Calculating in terms of **miliseconds** the fibonacci of 1, 2, 100, 500 or even 100.000! It can go beyond and calculate the fibonacci of bigger numbers, despite taking a bit longer to do that.

## How to download
Download the [linux binary](https://github.com/bernardoeuler/fibonacci/releases/tag/v1.0.0) in the releases page and run it.
The binaries for Windows and MacOS aren't avaliable yet.

## How to compile
1. First, you have to download the [GMP library](https://gmplib.org/).
2. Clone this repository or download the file.
3. After that, just compile the source code linking to the GMP library.
    ```bash
    gcc -o fibonacci fibonacci.c -lgmp
    ```

## How to use
So, let's calculate some numbers. To run the program, you must provide a positive integer number as argument:

1. In Linux/Mac OS:
    ```bash
    ./fibonacci <number>
    ```
    For example:
    ```bash
    ./fibonacci 5
    # 5
    ```

    ```bash
    ./fibonacci 10
    # 55
    ```

2. In Windows:
    ```bash
    .\fibonacci.exe <number>
    ```
    For example:
    ```bash
    .\fibonacci.exe 5
    # 5
    ```

    ```bash
    .\fibonacci.exe 10
    # 55
    ```
 ## Inspiration
 This project was inspired by a video of the channel Softwave, titled "Computers are fast". You can watch it [here](https://www.youtube.com/watch?v=MbIiAr5dt24) and access the source code [here](https://gist.github.com/Softwave/f61091aed8c8d8249014b5056447a698). Thanks for this video, it helped me to learn new concepts and become a better programmer.
