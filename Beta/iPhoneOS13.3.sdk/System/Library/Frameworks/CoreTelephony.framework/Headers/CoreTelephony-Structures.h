/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

typedef void (^CDUnknownBlockType)(void);

struct EmergencyMode {
    int _field1;
    int _field2;
    int _field3;
    _Bool _field4;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct dispatch_object_s;

struct map<__weak id, (anonymous namespace)::DelegateContext, std::__1::less<__weak id>, std::__1::allocator<std::__1::pair<const __weak id, (anonymous namespace)::DelegateContext>>> {
    struct __tree<std::__1::__value_type<__weak id, (anonymous namespace)::DelegateContext>, std::__1::__map_value_compare<__weak id, std::__1::__value_type<__weak id, (anonymous namespace)::DelegateContext>, std::__1::less<__weak id>, true>, std::__1::allocator<std::__1::__value_type<__weak id, (anonymous namespace)::DelegateContext>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<__weak id, (anonymous namespace)::DelegateContext>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<__weak id, std::__1::__value_type<__weak id, (anonymous namespace)::DelegateContext>, std::__1::less<__weak id>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct object {
    struct dispatch_object_s *fObj;
};

struct queue {
    struct object fObj;
};

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;
