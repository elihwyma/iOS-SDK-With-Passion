/*
 Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct AVHapticPlayerFixedParameter {
    unsigned long long type;
    float value;
};

struct BorealisServerImpl {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    _Bool _field6;
    id _field7;
    id _field8;
    struct HALListener *_field9;
    struct HALListener *_field10;
    int _field11;
    char *_field12;
    int _field13;
    struct CAMutex *_field14;
    id _field15;
    _Bool _field16;
    _Bool _field17;
};

struct CAMutex;

struct ClientEntry;

struct HALListener;

struct HapticMutex {
    CDUnknownFunctionPointerType *_field1;
    char *_field2;
    struct _opaque_pthread_t *_field3;
    struct _opaque_pthread_mutex_t _field4;
};

struct HapticSession;

struct HapticSynth;

struct RTLocked<std::map, unsigned long, std::__1::shared_ptr<ClientEntry>> {
    struct map<unsigned long, std::__1::shared_ptr<ClientEntry>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<ClientEntry>>>> _field1;
    struct shared_mutex _field2;
    _Bool _field3;
    char *_field4;
};

struct STLMemAllocator<std::__1::__list_node<ServerManager::SynthCommand, void *>> {
    struct memory_resource *_field1;
};

struct ServerManager {
    struct RTLocked<std::map, unsigned long, std::__1::shared_ptr<ClientEntry>> _field1;
    struct list<ServerManager::SynthCommand, STLMemAllocator<ServerManager::SynthCommand>> _field2;
    struct HapticSynth *_field3;
    struct HapticMutex _field4;
    struct VibeConfiguration *_field5;
    double _field6;
    struct opaqueCMSession *_field7;
    int _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
    unsigned int _field15;
    id _field16;
    unsigned long long _field17;
};

struct VibeConfiguration;

struct WatchdogTimer {
    char *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    int _field3;
    unsigned long long _field4;
    id _field5;
    struct mutex _field6;
    double _field7;
    double _field8;
};

struct __list_node_base<ServerManager::SynthCommand, void *> {
    struct __list_node_base<ServerManager::SynthCommand, void *> *_field1;
    struct __list_node_base<ServerManager::SynthCommand, void *> *_field2;
};

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *_field1;
                    unsigned long long _field2;
                    unsigned long long _field3;
                } _field1;
                struct __short {
                    char _field1[23];
                    struct {
                        unsigned char _field1;
                    } _field2;
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct condition_variable {
    struct _opaque_pthread_cond_t {
        long long _field1;
        char _field2[40];
    } _field1;
};

struct list<ServerManager::SynthCommand, STLMemAllocator<ServerManager::SynthCommand>> {
    struct __list_node_base<ServerManager::SynthCommand, void *> _field1;
    struct __compressed_pair<unsigned long, STLMemAllocator<std::__1::__list_node<ServerManager::SynthCommand, void *>>> {
        unsigned long long _field1;
        struct STLMemAllocator<std::__1::__list_node<ServerManager::SynthCommand, void *>> _field2;
    } _field2;
};

struct map<int, std::__1::bitset<255>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::bitset<255>>>> {
    struct __tree<std::__1::__value_type<int, std::__1::bitset<255>>, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::bitset<255>>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::bitset<255>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::bitset<255>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::bitset<255>>, std::__1::less<int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, NSMutableArray<ServerWrapper *>*, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, NSMutableArray<ServerWrapper *>*>>> {
    struct __tree<std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *>*>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *>*>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *>*>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *>*>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *>*>, std::__1::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned long, std::__1::shared_ptr<ClientEntry>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<ClientEntry>>>> {
    struct __tree<std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry>>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry>>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry>>, std::__1::less<unsigned long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct memory_resource;

struct mutex {
    struct _opaque_pthread_mutex_t __m_;
};

struct opaqueCMSession;

struct shared_mutex {
    struct __shared_mutex_base {
        struct mutex _field1;
        struct condition_variable _field2;
        struct condition_variable _field3;
        unsigned int _field4;
    } _field1;
};

struct shared_ptr<ClientEntry> {
    struct ClientEntry *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<HapticSession> {
    struct HapticSession *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<opaqueCMSession> {
    struct opaqueCMSession *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

// Template types
typedef struct shared_ptr<ClientEntry> {
    struct ClientEntry *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_47fb3459;
