/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@class NSUUID;

typedef void (^CDUnknownBlockType)(void);

struct Array {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    struct StringArray *_field5;
    struct Dictionary *_field6;
};

struct Attachment {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[2];
    basic_string_7c0a1c0b *_field4;
    basic_string_7c0a1c0b *_field5;
    float _field6;
    float _field7;
    basic_string_7c0a1c0b *_field8;
    basic_string_7c0a1c0b *_field9;
    basic_string_7c0a1c0b *_field10;
    basic_string_7c0a1c0b *_field11;
    struct Location *_field12;
    struct Media *_field13;
    struct RepeatedPtrField<topotext::PreviewImage> _field14;
    float _field15;
    float _field16;
    double _field17;
    double _field18;
    int _field19;
    _Bool _field20;
    basic_string_7c0a1c0b *_field21;
    long long _field22;
    double _field23;
    basic_string_7c0a1c0b *_field24;
    struct RepeatedPtrField<topotext::Attachment> _field25;
    long long _field26;
    double _field27;
    double _field28;
    double _field29;
    double _field30;
    double _field31;
    double _field32;
    double _field33;
    double _field34;
    basic_string_7c0a1c0b *_field35;
    basic_string_7c0a1c0b *_field36;
    basic_string_7c0a1c0b *_field37;
    int _field38;
    int _field39;
};

struct AttachmentInfo;

struct AttributeRun {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    struct ParagraphStyle *_field5;
    unsigned int _field6;
    unsigned int _field7;
    struct Font *_field8;
    unsigned int _field9;
    unsigned int _field10;
    basic_string_7c0a1c0b *_field11;
    int _field12;
    int _field13;
    struct Color *_field14;
    struct AttachmentInfo *_field15;
    unsigned long long _field16;
};

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct Color;

struct Command {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    struct CommandID *_field5;
    struct Color *_field6;
    struct Point *_field7;
    struct RepeatedPtrField<drawing::Point> _field8;
    struct CommandID *_field9;
    struct Rectangle *_field10;
    struct Point *_field11;
    struct Point *_field12;
    struct Parameters *_field13;
    unsigned int _field14;
};

struct CommandID;

struct Dictionary {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    struct RepeatedPtrField<CRDT::Dictionary_Element> _field5;
};

struct Dictionary_Element {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    struct ObjectID *_field5;
    struct ObjectID *_field6;
    struct VectorTimestamp *_field7;
    struct RegisterLatest *_field8;
};

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

struct Drawing {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    struct VectorTimestamp *_field5;
    unsigned int _field6;
    unsigned int _field7;
    struct RepeatedPtrField<drawing::Command> _field8;
    double _field9;
    struct Rectangle *_field10;
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

struct ICDrawingCommandID {
    unsigned int clock;
    NSUUID *replicaUUID;
    unsigned int subclock;
};

struct Index;

struct Location;

struct Media;

struct NoteAccountObject {
    Class _field1;
    id _field2;
    id _field3;
};

struct NoteContext {
    Class _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    unsigned long long _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
    id _field15;
};

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

struct OrderedSet {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    struct Array *_field5;
    struct Dictionary *_field6;
};

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

struct Parameters;

struct Point {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
};

struct PreviewImage {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    basic_string_7c0a1c0b *_field5;
    float _field6;
    _Bool _field7;
    _Bool _field8;
    basic_string_7c0a1c0b *_field9;
    int _field10;
    int _field11;
    long long _field12;
};

struct Rectangle;

struct RegisterLatest {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    struct Timestamp *_field5;
    struct ObjectID *_field6;
};

struct RepeatedPtrField<CRDT::Dictionary_Element> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
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

struct RepeatedPtrField<CRDT::StringArray_ArrayAttachment> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<CRDT::VectorTimestamp_Element> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<drawing::Command> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<drawing::Point> {
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

struct RepeatedPtrField<topotext::Attachment> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<topotext::AttributeRun> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<topotext::PreviewImage> {
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

struct RepeatedPtrField<topotext::Substring> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<topotext::VectorTimestamp_Clock> {
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

struct Selection {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    struct RepeatedPtrField<std::__1::basic_string<char>> _field5;
    struct RepeatedPtrField<topotext::Selection_Range> _field6;
    int _field7;
};

struct String {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    basic_string_7c0a1c0b *_field5;
    struct RepeatedPtrField<topotext::Substring> _field6;
    struct VectorTimestamp *_field7;
    struct RepeatedPtrField<topotext::AttributeRun> _field8;
    struct RepeatedPtrField<topotext::Attachment> _field9;
};

struct StringArray {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    struct String *_field5;
    struct RepeatedPtrField<CRDT::StringArray_ArrayAttachment> _field6;
};

struct Timestamp {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    unsigned long long _field5;
    long long _field6;
};

struct Todo {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    basic_string_7c0a1c0b *_field5;
    _Bool _field6;
};

struct TopoID {
    NSUUID *replicaID;
    unsigned int clock;
};

struct TopoIDRange {
    struct TopoID _field1;
    unsigned int _field2;
};

struct TopoSubstring {
    struct TopoIDRange _field1;
    struct TopoID _field2;
    unsigned int _field3;
    _Bool _field4;
    vector_c5c053b6 _field5;
    unsigned int _field6;
};

struct UIImage {
    Class _field1;
};

struct UIWindow {
    Class _field1;
};

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

struct __hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*> *_field1;
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

struct pair<TopoID, TopoID>;

struct pair<TopoIDRange, NSAttributedString *>;

struct pair<TopoIDRange, NSDictionary *>;

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_set<TopoSubstring *, std::__1::hash<TopoSubstring *>, std::__1::equal_to<TopoSubstring *>, std::__1::allocator<TopoSubstring *>> {
    struct __hash_table<TopoSubstring *, std::__1::hash<TopoSubstring *>, std::__1::equal_to<TopoSubstring *>, std::__1::allocator<TopoSubstring *>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*>, std::__1::allocator<std::__1::__hash_node<TopoSubstring *, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::hash<TopoSubstring *>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::equal_to<TopoSubstring *>> {
            float _field1;
        } _field4;
    } _field1;
};

struct vector<CRDT::Document_DocObject *, std::__1::allocator<CRDT::Document_DocObject *>> {
    struct Document_DocObject **__begin_;
    struct Document_DocObject **__end_;
    struct __compressed_pair<CRDT::Document_DocObject **, std::__1::allocator<CRDT::Document_DocObject *>> {
        struct Document_DocObject **__value_;
    } __end_cap_;
};

struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<TopoIDRange, std::__1::allocator<TopoIDRange>> {
    struct TopoIDRange *_field1;
    struct TopoIDRange *_field2;
    struct __compressed_pair<TopoIDRange *, std::__1::allocator<TopoIDRange>> {
        struct TopoIDRange *_field1;
    } _field3;
};

struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *>> {
    struct TopoSubstring **__begin_;
    struct TopoSubstring **__end_;
    struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *>> {
        struct TopoSubstring **__value_;
    } __end_cap_;
};

struct vector<_NSRange, std::__1::allocator<_NSRange>> {
    struct _NSRange *_field1;
    struct _NSRange *_field2;
    struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange>> {
        struct _NSRange *_field1;
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
    struct RepeatedPtrField<CRDT::VectorTimestamp_Element> _field5;
} VectorTimestamp_346eb33a;

typedef struct {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    struct RepeatedPtrField<topotext::VectorTimestamp_Clock> _field5;
} VectorTimestamp_2287ec0f;

typedef struct {
    CDUnknownFunctionPointerType *_field1;
    basic_string_7c0a1c0b _field2;
    unsigned int _field3[1];
    int _field4;
    struct RepeatedPtrField<versioned_document::Version> _field5;
    unsigned int _field6;
} Document_22a49c75;
#endif

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    char *_field1;
    char *_field2;
} CDStruct_91a0c811;

typedef struct {
    double baseAlpha;
    double blendAlpha;
    double targetMultiple;
} CDStruct_30364a2d;

typedef struct CDStruct_183601bc;

typedef struct {
    struct CGPoint point;
    double radius;
    double opacity;
    double azimuth;
    double edgeWidth;
    double aspectRatio;
    double timestamp;
} CDStruct_4a3d0796;

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

typedef struct unordered_set<TopoSubstring *, std::__1::hash<TopoSubstring *>, std::__1::equal_to<TopoSubstring *>, std::__1::allocator<TopoSubstring *>> {
    struct __hash_table<TopoSubstring *, std::__1::hash<TopoSubstring *>, std::__1::equal_to<TopoSubstring *>, std::__1::allocator<TopoSubstring *>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*>, std::__1::allocator<std::__1::__hash_node<TopoSubstring *, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::hash<TopoSubstring *>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::equal_to<TopoSubstring *>> {
            float _field1;
        } _field4;
    } _field1;
} unordered_set_0f32d0a8;

typedef struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
} vector_352d2fdf;

typedef struct vector<TopoIDRange, std::__1::allocator<TopoIDRange>> {
    struct TopoIDRange *_field1;
    struct TopoIDRange *_field2;
    struct __compressed_pair<TopoIDRange *, std::__1::allocator<TopoIDRange>> {
        struct TopoIDRange *_field1;
    } _field3;
} vector_4b213608;

typedef struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *>> {
    struct TopoSubstring **__begin_;
    struct TopoSubstring **__end_;
    struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *>> {
        struct TopoSubstring **__value_;
    } __end_cap_;
} vector_c5c053b6;

typedef struct vector<_NSRange, std::__1::allocator<_NSRange>> {
    struct _NSRange *_field1;
    struct _NSRange *_field2;
    struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange>> {
        struct _NSRange *_field1;
    } _field3;
} vector_7053a16b;

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
