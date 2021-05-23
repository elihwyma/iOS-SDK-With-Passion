/*
 Image: /System/Library/PrivateFrameworks/FontServices.framework/libhvf.dylib
 */

typedef void (^CDUnknownBlockType)(void);

struct AxisValues {
    unsigned long long count;
    struct tuple<unsigned long, double> *values;
};

struct CGVector {
    double _field1;
    double _field2;
};

struct HVFLoaderImpl {
    CDUnknownFunctionPointerType *_field1;
};

struct NestedSubparts {
    unsigned long long count;
    struct tuple<unsigned long, hvf::PartTransform> *values;
};

struct PartTransform {
    struct {
        double dx;
        double dy;
    } translation;
    double rotation;
    struct AxisValues axisValues;
    struct NestedSubparts nestedSubparts;
};

struct Renderer;

struct tuple<unsigned long, double>;

struct tuple<unsigned long, hvf::PartTransform>;

struct unique_ptr<hvf::Renderer, std::__1::default_delete<hvf::Renderer>> {
    struct __compressed_pair<hvf::Renderer *, std::__1::default_delete<hvf::Renderer>> {
        struct Renderer *__value_;
    } __ptr_;
};

struct vector<std::__1::tuple<unsigned long, double>, std::__1::allocator<std::__1::tuple<unsigned long, double>>> {
    struct tuple<unsigned long, double> *__begin_;
    struct tuple<unsigned long, double> *__end_;
    struct __compressed_pair<std::__1::tuple<unsigned long, double>*, std::__1::allocator<std::__1::tuple<unsigned long, double>>> {
        struct tuple<unsigned long, double> *__value_;
    } __end_cap_;
};
