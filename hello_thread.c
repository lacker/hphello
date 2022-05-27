#include "hashpipe.h"

static void *run(hashpipe_thread_args_t * args) {
  printf("hello world!\n");
  return THREAD_OK;
}

static hashpipe_thread_desc_t hello_thread = {
 name: "hello_thread",
 skey: "HELLO",
 init: NULL,
 run:  run,
 ibuf_desc: {NULL},
 obuf_desc: {NULL}
};

static __attribute__((constructor)) void ctor()
{
  register_hashpipe_thread(&hello_thread);
}
