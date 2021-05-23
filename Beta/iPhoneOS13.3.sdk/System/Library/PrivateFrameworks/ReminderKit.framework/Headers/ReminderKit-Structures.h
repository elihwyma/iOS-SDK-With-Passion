/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

typedef void (^CDUnknownBlockType)(void);

struct Array;

struct CRDocument {
    Class _field1;
};

struct Dictionary;

struct Document_CustomObject {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    struct RepeatedPtrField<CRDT::Document_CustomObject_MapEntry> _field5;
    int _field6;
};

struct Document_DocObject {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    union ContentsUnion {
        struct RegisterLatest *_field1;
        struct RegisterLatest *_field2;
        struct RegisterLatest *_field3;
        struct Dictionary *_field4;
        struct Dictionary *_field5;
        struct Dictionary *_field6;
        struct Timestamp *_field7;
        struct VectorTimestamp *_field8;
        struct Index *_field9;
        struct String *_field10;
        unsigned long long _field11;
        struct OneOf *_field12;
        struct Document_CustomObject *_field13;
        struct StringArray *_field14;
        struct Array *_field15;
        struct OrderedSet *_field16;
    } _field5;
    unsigned int _field6[1];
};

struct Font {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    basic_string_7c0a1c0b *_field5;
    float _field6;
    unsigned int _field7;
};

struct Index;

struct ObjectID {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    union ContentsUnion {
        long long _field1;
        unsigned long long _field2;
        double _field3;
        basic_string_7c0a1c0b *_field4;
        basic_string_7c0a1c0b *_field5;
        unsigned int _field6;
    } _field5;
    unsigned int _field6[1];
};

struct OneOf;

struct OrderedSet;

struct ParagraphStyle {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    unsigned int _field5;
    int _field6;
    int _field7;
    int _field8;
    struct Todo *_field9;
    unsigned int _field10;
    unsigned int _field11;
};

struct RegisterLatest {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    struct Timestamp *_field5;
    struct ObjectID *_field6;
};

struct RepeatedPtrField<CRDT::Document_CustomObject_MapEntry> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<CRDT::Document_DocObject> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<replica_manager::ReplicaEntry> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<replica_manager::VectorTimestampElement> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<std::__1::basic_string<char>> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<topotext::Selection_Range> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<versioned_document::Version> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct ReplicaEntry {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    unsigned int _field5;
    unsigned int _field6;
    struct RepeatedPtrField<replica_manager::VectorTimestampElement> _field7;
};

struct ReplicaManager {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    struct RepeatedPtrField<std::__1::basic_string<char>> _field5;
    struct RepeatedPtrField<std::__1::basic_string<char>> _field6;
    struct RepeatedPtrField<replica_manager::ReplicaEntry> _field7;
};

struct Selection {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    struct RepeatedPtrField<std::__1::basic_string<char>> _field5;
    struct RepeatedPtrField<topotext::Selection_Range> _field6;
    int _field7;
};

struct String;

struct StringArray;

struct Timestamp {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    unsigned long long _field5;
    long long _field6;
};

struct Todo;

struct TopoID {
    id _field1;
    unsigned int _field2;
};

struct TopoIDRange {
    struct TopoID _field1;
    unsigned int _field2;
};

struct VectorTimestamp;

struct Version {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    unsigned int _field5;
    unsigned int _field6;
    basic_string_7c0a1c0b *_field7;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
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

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct pair<TopoID, TopoID>;

struct pair<TopoIDRange, NSAttributedString *>;

struct pair<TopoIDRange, NSDictionary *>;

struct vector<CRDT::Document_DocObject *, std::__1::allocator<CRDT::Document_DocObject *>> {
    struct Document_DocObject **__begin_;
    struct Document_DocObject **__end_;
    struct __compressed_pair<CRDT::Document_DocObject **, std::__1::allocator<CRDT::Document_DocObject *>> {
        struct Document_DocObject **__value_;
    } __end_cap_;
};

struct vector<TopoIDRange, std::__1::allocator<TopoIDRange>> {
    struct TopoIDRange *_field1;
    struct TopoIDRange *_field2;
    struct __compressed_pair<TopoIDRange *, std::__1::allocator<TopoIDRange>> {
        struct TopoIDRange *_field1;
    } _field3;
};

struct vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID>>> {
    struct pair<TopoID, TopoID> *__begin_;
    struct pair<TopoID, TopoID> *__end_;
    struct __compressed_pair<std::__1::pair<TopoID, TopoID>*, std::__1::allocator<std::__1::pair<TopoID, TopoID>>> {
        struct pair<TopoID, TopoID> *__value_;
    } __end_cap_;
};

struct vector<std::__1::pair<TopoIDRange, NSAttributedString *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *>>> {
    struct pair<TopoIDRange, NSAttributedString *> *_field1;
    struct pair<TopoIDRange, NSAttributedString *> *_field2;
    struct __compressed_pair<std::__1::pair<TopoIDRange, NSAttributedString *>*, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *>>> {
        struct pair<TopoIDRange, NSAttributedString *> *_field1;
    } _field3;
};

struct vector<std::__1::pair<TopoIDRange, NSDictionary *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSDictionary *>>> {
    struct pair<TopoIDRange, NSDictionary *> *_field1;
    struct pair<TopoIDRange, NSDictionary *> *_field2;
    struct __compressed_pair<std::__1::pair<TopoIDRange, NSDictionary *>*, std::__1::allocator<std::__1::pair<TopoIDRange, NSDictionary *>>> {
        struct pair<TopoIDRange, NSDictionary *> *_field1;
    } _field3;
};

#if 0
// Names with conflicting types:

typedef struct {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    struct VectorTimestamp *_field5;
    struct VectorTimestamp *_field6;
    struct RepeatedPtrField<CRDT::Document_DocObject> _field7;
    struct RepeatedPtrField<std::__1::basic_string<char>> _field8;
    struct RepeatedPtrField<std::__1::basic_string<char>> _field9;
    struct RepeatedPtrField<std::__1::basic_string<char>> _field10;
    struct VectorTimestamp *_field11;
} Document_1b03c11f;

typedef struct {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    struct RepeatedPtrField<versioned_document::Version> _field5;
    unsigned int _field6;
} Document_22a49c75;
#endif

// Template types
typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
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
} basic_string_7c0a1c0b;

typedef struct vector<TopoIDRange, std::__1::allocator<TopoIDRange>> {
    struct TopoIDRange *_field1;
    struct TopoIDRange *_field2;
    struct __compressed_pair<TopoIDRange *, std::__1::allocator<TopoIDRange>> {
        struct TopoIDRange *_field1;
    } _field3;
} vector_4b213608;

typedef struct vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID>>> {
    struct pair<TopoID, TopoID> *__begin_;
    struct pair<TopoID, TopoID> *__end_;
    struct __compressed_pair<std::__1::pair<TopoID, TopoID>*, std::__1::allocator<std::__1::pair<TopoID, TopoID>>> {
        struct pair<TopoID, TopoID> *__value_;
    } __end_cap_;
} vector_0ee2fe7a;

typedef struct vector<std::__1::pair<TopoIDRange, NSAttributedString *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *>>> {
    struct pair<TopoIDRange, NSAttributedString *> *_field1;
    struct pair<TopoIDRange, NSAttributedString *> *_field2;
    struct __compressed_pair<std::__1::pair<TopoIDRange, NSAttributedString *>*, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *>>> {
        struct pair<TopoIDRange, NSAttributedString *> *_field1;
    } _field3;
} vector_252d7b3a;

typedef struct vector<std::__1::pair<TopoIDRange, NSDictionary *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSDictionary *>>> {
    struct pair<TopoIDRange, NSDictionary *> *_field1;
    struct pair<TopoIDRange, NSDictionary *> *_field2;
    struct __compressed_pair<std::__1::pair<TopoIDRange, NSDictionary *>*, std::__1::allocator<std::__1::pair<TopoIDRange, NSDictionary *>>> {
        struct pair<TopoIDRange, NSDictionary *> *_field1;
    } _field3;
} vector_5b9fc061;
