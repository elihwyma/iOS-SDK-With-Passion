/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

typedef void (^CDUnknownBlockType)(void);

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
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

struct EntriesContainer {
    struct vector<MPU::LayoutInterpolator::Entry, std::__1::allocator<MPU::LayoutInterpolator::Entry>> _field1;
    double _field2;
};

struct Entry {
    double _field1;
    double _field2;
};

struct Point3D {
    double _field1;
    double _field2;
    double _field3;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double horizontal;
    double vertical;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct vector<MPU::LayoutInterpolator::EntriesContainer, std::__1::allocator<MPU::LayoutInterpolator::EntriesContainer>> {
    struct EntriesContainer *__begin_;
    struct EntriesContainer *__end_;
    struct __compressed_pair<MPU::LayoutInterpolator::EntriesContainer *, std::__1::allocator<MPU::LayoutInterpolator::EntriesContainer>> {
        struct EntriesContainer *__value_;
    } __end_cap_;
};

struct vector<MPU::LayoutInterpolator::Entry, std::__1::allocator<MPU::LayoutInterpolator::Entry>> {
    struct Entry *_field1;
    struct Entry *_field2;
    struct __compressed_pair<MPU::LayoutInterpolator::Entry *, std::__1::allocator<MPU::LayoutInterpolator::Entry>> {
        struct Entry *_field1;
    } _field3;
};

struct vector<MPU::Point3D, std::__1::allocator<MPU::Point3D>> {
    struct Point3D *_field1;
    struct Point3D *_field2;
    struct __compressed_pair<MPU::Point3D *, std::__1::allocator<MPU::Point3D>> {
        struct Point3D *_field1;
    } _field3;
};

typedef struct {
    double ascender;
    _Bool isAscenderInitialized;
    double bodyLeading;
    _Bool isBodyLeadingInitialized;
    double capHeight;
    _Bool isCapHeightInitialized;
    double descender;
    _Bool isDescenderInitialized;
    double lineHeight;
    _Bool isLineHeightInitialized;
} CDStruct_1aa0583f;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
} CDStruct_b7523c42;

// Template types
typedef struct vector<MPU::Point3D, std::__1::allocator<MPU::Point3D>> {
    struct Point3D *_field1;
    struct Point3D *_field2;
    struct __compressed_pair<MPU::Point3D *, std::__1::allocator<MPU::Point3D>> {
        struct Point3D *_field1;
    } _field3;
} vector_c97e033f;
