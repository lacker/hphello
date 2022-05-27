#!/bin/bash

HP=~/hashpipe/src

gcc -Wall -c hello_thread.c -I$HP -o build/hphello
