# hphello
"hello world" for the hashpipe framework.

## Instructions

Git clone [this version of
hashpipe](https://github.com/lacker/hashpipe). These instructions
assume you cloned it into your home directory.

```
sudo apt-get install autoconf
cd ~/hashpipe/src
autoreconf -is
./configure
make
```

I've been able to get this to work with gcc 11. I haven't been able to
get it to compile with gcc 7.
