/*
 Image: /System/Library/PrivateFrameworks/IPTelephony.framework/Support/libIPTelephony.dylib
 */

typedef void (^CDUnknownBlockType)(void);

struct AVCRTPAudioSession {
    CDUnknownFunctionPointerType *_field1;
    struct MediaSessionDelegate *_field2;
    unsigned long long _field3;
    struct RTPManager *_field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field5;
    _Bool _field6;
    CDUnknownFunctionPointerType *_field7;
    int _field8;
    _Bool _field9;
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _field10;
    struct LoggableString _field11;
    struct ImsBlockQueue *_field12;
    struct ImsMutex _field13;
    int _field14;
    struct map<unsigned int, __CFRunLoopTimer *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, __CFRunLoopTimer *>>> _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned short _field19;
    unsigned short _field20;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field21;
    unsigned char _field22;
    unsigned char _field23;
    unsigned int _field24;
    _Bool _field25;
    _Bool _field26;
    _Bool _field27;
    _Bool _field28;
    _Bool _field29;
    id _field30;
    id _field31;
    struct AVCRTPStackController *_field32;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field33;
    _Bool _field34;
};

struct AVCRTPRTTSession {
    CDUnknownFunctionPointerType *_field1;
    struct MediaSessionDelegate *_field2;
    unsigned long long _field3;
    struct RTPManager *_field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field5;
    _Bool _field6;
    CDUnknownFunctionPointerType *_field7;
    int _field8;
    _Bool _field9;
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _field10;
    struct LoggableString _field11;
    struct ImsBlockQueue *_field12;
    struct ImsMutex _field13;
    int _field14;
    struct map<unsigned int, __CFRunLoopTimer *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, __CFRunLoopTimer *>>> _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned short _field19;
    unsigned short _field20;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field21;
    unsigned char _field22;
    unsigned char _field23;
    unsigned int _field24;
    _Bool _field25;
    _Bool _field26;
    _Bool _field27;
    _Bool _field28;
    _Bool _field29;
    id _field30;
    id _field31;
    struct AVCRTPStackController *_field32;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field33;
    _Bool _field34;
};

struct AVCRTPStackController {
    CDUnknownFunctionPointerType *_field1;
    struct RTPStackControllerDelegate *_field2;
    int _field3;
    struct RTPManager *_field4;
    int _field5;
    struct map<std::__1::basic_string<char>, std::__1::map<unsigned long long, SipTypedTerminationLock<SipLockable>*, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SipTypedTerminationLock<SipLockable>*>>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::map<unsigned long long, SipTypedTerminationLock<SipLockable>*, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SipTypedTerminationLock<SipLockable>*>>>>>> _field6;
    struct map<std::__1::basic_string<char>, std::__1::map<unsigned long long, SipTypedTerminationLock<SipLockable>*, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SipTypedTerminationLock<SipLockable>*>>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::map<unsigned long long, SipTypedTerminationLock<SipLockable>*, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SipTypedTerminationLock<SipLockable>*>>>>>> _field7;
};

struct ImsBlockQueue;

struct ImsMutex {
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field1;
};

struct LoggableString {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
};

struct MediaSessionDelegate;

struct RTPManager;

struct RTPStackControllerDelegate;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
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

struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, int>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, int>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, int>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, int>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::__1::basic_string<char>, std::__1::map<unsigned long long, SipTypedTerminationLock<SipLockable>*, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SipTypedTerminationLock<SipLockable>*>>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::map<unsigned long long, SipTypedTerminationLock<SipLockable>*, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SipTypedTerminationLock<SipLockable>*>>>>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::map<unsigned long long, SipTypedTerminationLock<SipLockable>*, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SipTypedTerminationLock<SipLockable>*>>>>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::map<unsigned long long, SipTypedTerminationLock<SipLockable>*, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SipTypedTerminationLock<SipLockable>*>>>>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::map<unsigned long long, SipTypedTerminationLock<SipLockable>*, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SipTypedTerminationLock<SipLockable>*>>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::map<unsigned long long, SipTypedTerminationLock<SipLockable>*, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SipTypedTerminationLock<SipLockable>*>>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::map<unsigned long long, SipTypedTerminationLock<SipLockable>*, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SipTypedTerminationLock<SipLockable>*>>>>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<unsigned int, __CFRunLoopTimer *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, __CFRunLoopTimer *>>> {
    struct __tree<std::__1::__value_type<unsigned int, __CFRunLoopTimer *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, __CFRunLoopTimer *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, __CFRunLoopTimer *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, __CFRunLoopTimer *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, __CFRunLoopTimer *>, std::__1::less<unsigned int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};
