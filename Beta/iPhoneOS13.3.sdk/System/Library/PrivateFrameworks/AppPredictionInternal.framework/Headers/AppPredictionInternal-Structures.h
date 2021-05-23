/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@class NSMutableDictionary, NSMutableIndexSet, NSObject, NSString;

typedef void (^CDUnknownBlockType)(void);

struct ATXPredictionItem {
    NSString *key;
    unsigned long long actionHash;
    float inputSignals[437];
    float score;
};

struct ATXScoredPrediction {
    Class _field1;
};

struct HDGuardedData {
    struct SimdVector<float __attribute__((ext_vector_type(8))), float> scores;
    struct SimdVector<int __attribute__((ext_vector_type(8))), unsigned int> abs;
    _Bool enumerationInProgress;
};

struct HTGuardedData {
    NSMutableDictionary *dict;
    NSMutableIndexSet *usedIds;
    NSObject *prevKey;
    unsigned short prevEventId;
};

struct NSDictionary {
    Class _field1;
};

struct SimdVector<float __attribute__((ext_vector_type(8))), float> {
    struct vector<float __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<float __attribute__((ext_vector_type(8)))>> chunks;
    unsigned long long count;
};

struct SimdVector<int __attribute__((ext_vector_type(8))), unsigned int> {
    struct vector<int __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<int __attribute__((ext_vector_type(8)))>> chunks;
    unsigned long long count;
};

struct SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex>;

struct SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex>;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _PASDBIterAction_ {
    _Bool _field1;
};

struct _PASTuple2 {
    Class _field1;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *>*> *_field1;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>*> *_field1;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct _opaque_pthread_rwlock_t {
    long long __sig;
    char __opaque[192];
};

struct fixpt_meta_s {
    float base;
    float incr;
};

struct header_s {
    unsigned int nvectors;
    unsigned int length;
    struct fixpt_meta_s fixinfo;
};

struct unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex>, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex>>> {
    struct __compressed_pair<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex>*, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex>>> {
        struct SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> *__value_;
    } __ptr_;
};

struct unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex>, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex>>> {
    struct __compressed_pair<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex>*, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex>>> {
        struct SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> *__value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_map<ATXAction *, int, ATXActionHash, ATXActionEqual, std::__1::allocator<std::__1::pair<ATXAction *const, int>>> {
    struct __hash_table<std::__1::__hash_value_type<ATXAction *, int>, std::__1::__unordered_map_hasher<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionHash, true>, std::__1::__unordered_map_equal<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionEqual, true>, std::__1::allocator<std::__1::__hash_value_type<ATXAction *, int>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionHash, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionEqual, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<NSString *, ATXPredictionItem, ATXNSStringHash, ATXNSStringEqual, std::__1::allocator<std::__1::pair<NSString *const, ATXPredictionItem>>> {
    struct __hash_table<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringHash, true>, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringEqual, true>, std::__1::allocator<std::__1::__hash_value_type<NSString *, ATXPredictionItem>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringHash, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringEqual, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct unordered_map<NSString *, const ATXPredictionItem *, ATXNSStringHash, ATXNSStringEqual, std::__1::allocator<std::__1::pair<NSString *const, const ATXPredictionItem *>>> {
    struct __hash_table<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, ATXNSStringHash, true>, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, ATXNSStringEqual, true>, std::__1::allocator<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, ATXNSStringHash, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, ATXNSStringEqual, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem>> {
    struct ATXPredictionItem *__begin_;
    struct ATXPredictionItem *__end_;
    struct __compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem>> {
        struct ATXPredictionItem *__value_;
    } __end_cap_;
};

struct vector<float __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<float __attribute__((ext_vector_type(8)))>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<float * __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<float __attribute__((ext_vector_type(8)))>> {
        void *__value_;
    } __end_cap_;
};

struct vector<int __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<int __attribute__((ext_vector_type(8)))>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<int * __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<int __attribute__((ext_vector_type(8)))>> {
        void *__value_;
    } __end_cap_;
};

typedef struct {
    double _field1[437];
    double _field2;
} CDStruct_d8fa4ea4;

typedef struct {
    int *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_95bda58d;

// Ambiguous groups
typedef struct {
    unsigned int suppActions:1;
    unsigned int timezone:1;
} CDStruct_65e6390a;

typedef struct {
    unsigned int anchor:1;
} CDStruct_c0e14264;

typedef struct {
    unsigned int timestamp:1;
} CDStruct_b5306035;

typedef struct unordered_map<ATXAction *, int, ATXActionHash, ATXActionEqual, std::__1::allocator<std::__1::pair<ATXAction *const, int>>> {
    struct __hash_table<std::__1::__hash_value_type<ATXAction *, int>, std::__1::__unordered_map_hasher<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionHash, true>, std::__1::__unordered_map_equal<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionEqual, true>, std::__1::allocator<std::__1::__hash_value_type<ATXAction *, int>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<ATXAction *, int>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionHash, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<ATXAction *, std::__1::__hash_value_type<ATXAction *, int>, ATXActionEqual, true>> {
            float __value_;
        } __p3_;
    } __table_;
} unordered_map_7f1dd58d;

typedef struct unordered_map<NSString *, ATXPredictionItem, ATXNSStringHash, ATXNSStringEqual, std::__1::allocator<std::__1::pair<NSString *const, ATXPredictionItem>>> {
    struct __hash_table<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringHash, true>, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringEqual, true>, std::__1::allocator<std::__1::__hash_value_type<NSString *, ATXPredictionItem>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, ATXPredictionItem>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringHash, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringEqual, true>> {
            float _field1;
        } _field4;
    } _field1;
} unordered_map_c647d171;

typedef struct unordered_map<NSString *, const ATXPredictionItem *, ATXNSStringHash, ATXNSStringEqual, std::__1::allocator<std::__1::pair<NSString *const, const ATXPredictionItem *>>> {
    struct __hash_table<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, ATXNSStringHash, true>, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, ATXNSStringEqual, true>, std::__1::allocator<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NSString *, std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, ATXNSStringHash, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<NSString *, std::__1::__hash_value_type<NSString *, const ATXPredictionItem *>, ATXNSStringEqual, true>> {
            float _field1;
        } _field4;
    } _field1;
} unordered_map_bb3acf07;

typedef struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem>> {
    struct ATXPredictionItem *__begin_;
    struct ATXPredictionItem *__end_;
    struct __compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem>> {
        struct ATXPredictionItem *__value_;
    } __end_cap_;
} vector_5be31511;
