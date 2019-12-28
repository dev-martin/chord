/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: chord.proto */

#ifndef PROTOBUF_C_src_2fchord_2eproto__INCLUDED
#define PROTOBUF_C_src_2fchord_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Protocol__Node Protocol__Node;
typedef struct _Protocol__Call Protocol__Call;
typedef struct _Protocol__Return Protocol__Return;
typedef struct _Protocol__FindSuccessorArgs Protocol__FindSuccessorArgs;
typedef struct _Protocol__FindSuccessorRet Protocol__FindSuccessorRet;
typedef struct _Protocol__NotifyArgs Protocol__NotifyArgs;
typedef struct _Protocol__NotifyRet Protocol__NotifyRet;
typedef struct _Protocol__CheckPredecessorArgs Protocol__CheckPredecessorArgs;
typedef struct _Protocol__CheckPredecessorRet Protocol__CheckPredecessorRet;
typedef struct _Protocol__GetPredecessorArgs Protocol__GetPredecessorArgs;
typedef struct _Protocol__GetPredecessorRet Protocol__GetPredecessorRet;
typedef struct _Protocol__GetSuccessorListArgs Protocol__GetSuccessorListArgs;
typedef struct _Protocol__GetSuccessorListRet Protocol__GetSuccessorListRet;


/* --- enums --- */


/* --- messages --- */

struct  _Protocol__Node
{
  ProtobufCMessage base;
  ProtobufCBinaryData id;
  char *address;
  uint32_t port;
};
#define PROTOCOL__NODE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__node__descriptor) \
    , {0,NULL}, NULL, 0 }


struct  _Protocol__Call
{
  ProtobufCMessage base;
  char *name;
  ProtobufCBinaryData args;
};
#define PROTOCOL__CALL__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__call__descriptor) \
    , NULL, {0,NULL} }


struct  _Protocol__Return
{
  ProtobufCMessage base;
  protobuf_c_boolean success;
  protobuf_c_boolean has_value;
  ProtobufCBinaryData value;
};
#define PROTOCOL__RETURN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__return__descriptor) \
    , 0, 0, {0,NULL} }


struct  _Protocol__FindSuccessorArgs
{
  ProtobufCMessage base;
  ProtobufCBinaryData id;
};
#define PROTOCOL__FIND_SUCCESSOR_ARGS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__find_successor_args__descriptor) \
    , {0,NULL} }


struct  _Protocol__FindSuccessorRet
{
  ProtobufCMessage base;
  Protocol__Node *node;
};
#define PROTOCOL__FIND_SUCCESSOR_RET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__find_successor_ret__descriptor) \
    , NULL }


struct  _Protocol__NotifyArgs
{
  ProtobufCMessage base;
  Protocol__Node *node;
};
#define PROTOCOL__NOTIFY_ARGS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__notify_args__descriptor) \
    , NULL }


struct  _Protocol__NotifyRet
{
  ProtobufCMessage base;
};
#define PROTOCOL__NOTIFY_RET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__notify_ret__descriptor) \
     }


struct  _Protocol__CheckPredecessorArgs
{
  ProtobufCMessage base;
};
#define PROTOCOL__CHECK_PREDECESSOR_ARGS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__check_predecessor_args__descriptor) \
     }


struct  _Protocol__CheckPredecessorRet
{
  ProtobufCMessage base;
};
#define PROTOCOL__CHECK_PREDECESSOR_RET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__check_predecessor_ret__descriptor) \
     }


struct  _Protocol__GetPredecessorArgs
{
  ProtobufCMessage base;
};
#define PROTOCOL__GET_PREDECESSOR_ARGS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__get_predecessor_args__descriptor) \
     }


struct  _Protocol__GetPredecessorRet
{
  ProtobufCMessage base;
  Protocol__Node *node;
};
#define PROTOCOL__GET_PREDECESSOR_RET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__get_predecessor_ret__descriptor) \
    , NULL }


struct  _Protocol__GetSuccessorListArgs
{
  ProtobufCMessage base;
};
#define PROTOCOL__GET_SUCCESSOR_LIST_ARGS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__get_successor_list_args__descriptor) \
     }


struct  _Protocol__GetSuccessorListRet
{
  ProtobufCMessage base;
  size_t n_successors;
  Protocol__Node **successors;
};
#define PROTOCOL__GET_SUCCESSOR_LIST_RET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&protocol__get_successor_list_ret__descriptor) \
    , 0,NULL }


/* Protocol__Node methods */
void   protocol__node__init
                     (Protocol__Node         *message);
size_t protocol__node__get_packed_size
                     (const Protocol__Node   *message);
size_t protocol__node__pack
                     (const Protocol__Node   *message,
                      uint8_t             *out);
size_t protocol__node__pack_to_buffer
                     (const Protocol__Node   *message,
                      ProtobufCBuffer     *buffer);
Protocol__Node *
       protocol__node__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__node__free_unpacked
                     (Protocol__Node *message,
                      ProtobufCAllocator *allocator);
/* Protocol__Call methods */
void   protocol__call__init
                     (Protocol__Call         *message);
size_t protocol__call__get_packed_size
                     (const Protocol__Call   *message);
size_t protocol__call__pack
                     (const Protocol__Call   *message,
                      uint8_t             *out);
size_t protocol__call__pack_to_buffer
                     (const Protocol__Call   *message,
                      ProtobufCBuffer     *buffer);
Protocol__Call *
       protocol__call__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__call__free_unpacked
                     (Protocol__Call *message,
                      ProtobufCAllocator *allocator);
/* Protocol__Return methods */
void   protocol__return__init
                     (Protocol__Return         *message);
size_t protocol__return__get_packed_size
                     (const Protocol__Return   *message);
size_t protocol__return__pack
                     (const Protocol__Return   *message,
                      uint8_t             *out);
size_t protocol__return__pack_to_buffer
                     (const Protocol__Return   *message,
                      ProtobufCBuffer     *buffer);
Protocol__Return *
       protocol__return__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__return__free_unpacked
                     (Protocol__Return *message,
                      ProtobufCAllocator *allocator);
/* Protocol__FindSuccessorArgs methods */
void   protocol__find_successor_args__init
                     (Protocol__FindSuccessorArgs         *message);
size_t protocol__find_successor_args__get_packed_size
                     (const Protocol__FindSuccessorArgs   *message);
size_t protocol__find_successor_args__pack
                     (const Protocol__FindSuccessorArgs   *message,
                      uint8_t             *out);
size_t protocol__find_successor_args__pack_to_buffer
                     (const Protocol__FindSuccessorArgs   *message,
                      ProtobufCBuffer     *buffer);
Protocol__FindSuccessorArgs *
       protocol__find_successor_args__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__find_successor_args__free_unpacked
                     (Protocol__FindSuccessorArgs *message,
                      ProtobufCAllocator *allocator);
/* Protocol__FindSuccessorRet methods */
void   protocol__find_successor_ret__init
                     (Protocol__FindSuccessorRet         *message);
size_t protocol__find_successor_ret__get_packed_size
                     (const Protocol__FindSuccessorRet   *message);
size_t protocol__find_successor_ret__pack
                     (const Protocol__FindSuccessorRet   *message,
                      uint8_t             *out);
size_t protocol__find_successor_ret__pack_to_buffer
                     (const Protocol__FindSuccessorRet   *message,
                      ProtobufCBuffer     *buffer);
Protocol__FindSuccessorRet *
       protocol__find_successor_ret__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__find_successor_ret__free_unpacked
                     (Protocol__FindSuccessorRet *message,
                      ProtobufCAllocator *allocator);
/* Protocol__NotifyArgs methods */
void   protocol__notify_args__init
                     (Protocol__NotifyArgs         *message);
size_t protocol__notify_args__get_packed_size
                     (const Protocol__NotifyArgs   *message);
size_t protocol__notify_args__pack
                     (const Protocol__NotifyArgs   *message,
                      uint8_t             *out);
size_t protocol__notify_args__pack_to_buffer
                     (const Protocol__NotifyArgs   *message,
                      ProtobufCBuffer     *buffer);
Protocol__NotifyArgs *
       protocol__notify_args__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__notify_args__free_unpacked
                     (Protocol__NotifyArgs *message,
                      ProtobufCAllocator *allocator);
/* Protocol__NotifyRet methods */
void   protocol__notify_ret__init
                     (Protocol__NotifyRet         *message);
size_t protocol__notify_ret__get_packed_size
                     (const Protocol__NotifyRet   *message);
size_t protocol__notify_ret__pack
                     (const Protocol__NotifyRet   *message,
                      uint8_t             *out);
size_t protocol__notify_ret__pack_to_buffer
                     (const Protocol__NotifyRet   *message,
                      ProtobufCBuffer     *buffer);
Protocol__NotifyRet *
       protocol__notify_ret__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__notify_ret__free_unpacked
                     (Protocol__NotifyRet *message,
                      ProtobufCAllocator *allocator);
/* Protocol__CheckPredecessorArgs methods */
void   protocol__check_predecessor_args__init
                     (Protocol__CheckPredecessorArgs         *message);
size_t protocol__check_predecessor_args__get_packed_size
                     (const Protocol__CheckPredecessorArgs   *message);
size_t protocol__check_predecessor_args__pack
                     (const Protocol__CheckPredecessorArgs   *message,
                      uint8_t             *out);
size_t protocol__check_predecessor_args__pack_to_buffer
                     (const Protocol__CheckPredecessorArgs   *message,
                      ProtobufCBuffer     *buffer);
Protocol__CheckPredecessorArgs *
       protocol__check_predecessor_args__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__check_predecessor_args__free_unpacked
                     (Protocol__CheckPredecessorArgs *message,
                      ProtobufCAllocator *allocator);
/* Protocol__CheckPredecessorRet methods */
void   protocol__check_predecessor_ret__init
                     (Protocol__CheckPredecessorRet         *message);
size_t protocol__check_predecessor_ret__get_packed_size
                     (const Protocol__CheckPredecessorRet   *message);
size_t protocol__check_predecessor_ret__pack
                     (const Protocol__CheckPredecessorRet   *message,
                      uint8_t             *out);
size_t protocol__check_predecessor_ret__pack_to_buffer
                     (const Protocol__CheckPredecessorRet   *message,
                      ProtobufCBuffer     *buffer);
Protocol__CheckPredecessorRet *
       protocol__check_predecessor_ret__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__check_predecessor_ret__free_unpacked
                     (Protocol__CheckPredecessorRet *message,
                      ProtobufCAllocator *allocator);
/* Protocol__GetPredecessorArgs methods */
void   protocol__get_predecessor_args__init
                     (Protocol__GetPredecessorArgs         *message);
size_t protocol__get_predecessor_args__get_packed_size
                     (const Protocol__GetPredecessorArgs   *message);
size_t protocol__get_predecessor_args__pack
                     (const Protocol__GetPredecessorArgs   *message,
                      uint8_t             *out);
size_t protocol__get_predecessor_args__pack_to_buffer
                     (const Protocol__GetPredecessorArgs   *message,
                      ProtobufCBuffer     *buffer);
Protocol__GetPredecessorArgs *
       protocol__get_predecessor_args__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__get_predecessor_args__free_unpacked
                     (Protocol__GetPredecessorArgs *message,
                      ProtobufCAllocator *allocator);
/* Protocol__GetPredecessorRet methods */
void   protocol__get_predecessor_ret__init
                     (Protocol__GetPredecessorRet         *message);
size_t protocol__get_predecessor_ret__get_packed_size
                     (const Protocol__GetPredecessorRet   *message);
size_t protocol__get_predecessor_ret__pack
                     (const Protocol__GetPredecessorRet   *message,
                      uint8_t             *out);
size_t protocol__get_predecessor_ret__pack_to_buffer
                     (const Protocol__GetPredecessorRet   *message,
                      ProtobufCBuffer     *buffer);
Protocol__GetPredecessorRet *
       protocol__get_predecessor_ret__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__get_predecessor_ret__free_unpacked
                     (Protocol__GetPredecessorRet *message,
                      ProtobufCAllocator *allocator);
/* Protocol__GetSuccessorListArgs methods */
void   protocol__get_successor_list_args__init
                     (Protocol__GetSuccessorListArgs         *message);
size_t protocol__get_successor_list_args__get_packed_size
                     (const Protocol__GetSuccessorListArgs   *message);
size_t protocol__get_successor_list_args__pack
                     (const Protocol__GetSuccessorListArgs   *message,
                      uint8_t             *out);
size_t protocol__get_successor_list_args__pack_to_buffer
                     (const Protocol__GetSuccessorListArgs   *message,
                      ProtobufCBuffer     *buffer);
Protocol__GetSuccessorListArgs *
       protocol__get_successor_list_args__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__get_successor_list_args__free_unpacked
                     (Protocol__GetSuccessorListArgs *message,
                      ProtobufCAllocator *allocator);
/* Protocol__GetSuccessorListRet methods */
void   protocol__get_successor_list_ret__init
                     (Protocol__GetSuccessorListRet         *message);
size_t protocol__get_successor_list_ret__get_packed_size
                     (const Protocol__GetSuccessorListRet   *message);
size_t protocol__get_successor_list_ret__pack
                     (const Protocol__GetSuccessorListRet   *message,
                      uint8_t             *out);
size_t protocol__get_successor_list_ret__pack_to_buffer
                     (const Protocol__GetSuccessorListRet   *message,
                      ProtobufCBuffer     *buffer);
Protocol__GetSuccessorListRet *
       protocol__get_successor_list_ret__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   protocol__get_successor_list_ret__free_unpacked
                     (Protocol__GetSuccessorListRet *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Protocol__Node_Closure)
                 (const Protocol__Node *message,
                  void *closure_data);
typedef void (*Protocol__Call_Closure)
                 (const Protocol__Call *message,
                  void *closure_data);
typedef void (*Protocol__Return_Closure)
                 (const Protocol__Return *message,
                  void *closure_data);
typedef void (*Protocol__FindSuccessorArgs_Closure)
                 (const Protocol__FindSuccessorArgs *message,
                  void *closure_data);
typedef void (*Protocol__FindSuccessorRet_Closure)
                 (const Protocol__FindSuccessorRet *message,
                  void *closure_data);
typedef void (*Protocol__NotifyArgs_Closure)
                 (const Protocol__NotifyArgs *message,
                  void *closure_data);
typedef void (*Protocol__NotifyRet_Closure)
                 (const Protocol__NotifyRet *message,
                  void *closure_data);
typedef void (*Protocol__CheckPredecessorArgs_Closure)
                 (const Protocol__CheckPredecessorArgs *message,
                  void *closure_data);
typedef void (*Protocol__CheckPredecessorRet_Closure)
                 (const Protocol__CheckPredecessorRet *message,
                  void *closure_data);
typedef void (*Protocol__GetPredecessorArgs_Closure)
                 (const Protocol__GetPredecessorArgs *message,
                  void *closure_data);
typedef void (*Protocol__GetPredecessorRet_Closure)
                 (const Protocol__GetPredecessorRet *message,
                  void *closure_data);
typedef void (*Protocol__GetSuccessorListArgs_Closure)
                 (const Protocol__GetSuccessorListArgs *message,
                  void *closure_data);
typedef void (*Protocol__GetSuccessorListRet_Closure)
                 (const Protocol__GetSuccessorListRet *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor protocol__node__descriptor;
extern const ProtobufCMessageDescriptor protocol__call__descriptor;
extern const ProtobufCMessageDescriptor protocol__return__descriptor;
extern const ProtobufCMessageDescriptor protocol__find_successor_args__descriptor;
extern const ProtobufCMessageDescriptor protocol__find_successor_ret__descriptor;
extern const ProtobufCMessageDescriptor protocol__notify_args__descriptor;
extern const ProtobufCMessageDescriptor protocol__notify_ret__descriptor;
extern const ProtobufCMessageDescriptor protocol__check_predecessor_args__descriptor;
extern const ProtobufCMessageDescriptor protocol__check_predecessor_ret__descriptor;
extern const ProtobufCMessageDescriptor protocol__get_predecessor_args__descriptor;
extern const ProtobufCMessageDescriptor protocol__get_predecessor_ret__descriptor;
extern const ProtobufCMessageDescriptor protocol__get_successor_list_args__descriptor;
extern const ProtobufCMessageDescriptor protocol__get_successor_list_ret__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_src_2fchord_2eproto__INCLUDED */
