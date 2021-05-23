/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

@class NSString;

typedef void (^CDUnknownBlockType)(void);

struct CAMutex {
    CDUnknownFunctionPointerType *_field1;
    char *_field2;
    struct _opaque_pthread_t *_field3;
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field4;
};

struct Data {
    NSString *name;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *>*> *__next_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<AVHapticPlayerEventType, NSString *, std::__1::hash<AVHapticPlayerEventType>, std::__1::equal_to<AVHapticPlayerEventType>, std::__1::allocator<std::__1::pair<const AVHapticPlayerEventType, NSString *>>> {
    struct __hash_table<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::__1::__unordered_map_hasher<AVHapticPlayerEventType, std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::__1::hash<AVHapticPlayerEventType>, true>, std::__1::__unordered_map_equal<AVHapticPlayerEventType, std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::__1::equal_to<AVHapticPlayerEventType>, true>, std::__1::allocator<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<AVHapticPlayerEventType, std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::__1::hash<AVHapticPlayerEventType>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<AVHapticPlayerEventType, std::__1::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::__1::equal_to<AVHapticPlayerEventType>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};
