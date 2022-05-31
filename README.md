# hphello
"hello world" for the hashpipe framework.

## Instructions

Git clone [this version of
hashpipe](https://github.com/lacker/hashpipe). These instructions
assume you cloned it into your home directory.

First compile hashpipe.

```
sudo apt-get install autoconf
cd ~/hashpipe/src
autoreconf -is
./configure
make
```

Then compile hphello.

```
cd ~/hphello
./make.sh
./run.sh
```
