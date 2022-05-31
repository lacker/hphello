#!/bin/bash

HP=~/hashpipe/src

gcc -Wall hello_thread.c -I$HP -shared -o build/hello_thread.so
