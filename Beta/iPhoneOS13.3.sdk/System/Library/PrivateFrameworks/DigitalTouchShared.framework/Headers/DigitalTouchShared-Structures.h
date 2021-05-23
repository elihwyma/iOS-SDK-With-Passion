/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

typedef void (^CDUnknownBlockType)(void);

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

struct UIColor {
    Class _field1;
};

struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> {
    void *__value_;
};

struct vector<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>>, std::__1::allocator<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>>>> {
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> *__begin_;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> *__end_;
    struct __compressed_pair<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>>*, std::__1::allocator<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>>>> {
        struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> *__value_;
    } __end_cap_;
};

struct vector<unsigned long, std::__1::allocator<unsigned long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> {
        unsigned long long *__value_;
    } __end_cap_;
};

#if 0
// Names with conflicting types:

typedef struct ?<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> {
    struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> **_field1;
} vector_80ea899f;

typedef struct ?<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> __end_cap_;
} vector_e654105b;
#endif

typedef struct {
    struct {
        unsigned short _field1;
        unsigned short _field2;
    } _field1;
    struct {
        unsigned short _field1;
    } _field2;
} CDStruct_e6681aac;

// Template types
typedef struct vector<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>>, std::__1::allocator<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>>>> {
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> *__begin_;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> *__end_;
    struct __compressed_pair<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>>*, std::__1::allocator<std::__1::vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>>>> {
        struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> *__value_;
    } __end_cap_;
} vector_c2d99b46;

typedef struct vector<unsigned long, std::__1::allocator<unsigned long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> {
        unsigned long long *__value_;
    } __end_cap_;
} vector_06e666a8;
