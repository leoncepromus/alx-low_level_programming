#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o libhack.so *.o
