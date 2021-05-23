/*
 Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

typedef void (^CDUnknownBlockType)(void);

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct NSDirectionalEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _NUIGridArrangement {
    id container;
    unsigned int horzDist:8;
    unsigned int vertDist:8;
    _Bool baselineRelative;
    _Bool hasValidMeasurement;
    vector_f8404f95 cells;
    vector_b8a5df6e columns;
    vector_b8a5df6e rows;
    struct vector<CGRect, std::__1::allocator<CGRect>> viewFrames;
};

struct _NUIGridArrangementCell;

struct _NUIGridArrangementDimension;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct map<UIView *, _NUIContainerViewArrangedSubview, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, _NUIContainerViewArrangedSubview>>> {
    struct __tree<std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::__1::less<UIView *>, true>, std::__1::allocator<std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::__1::less<UIView *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<UIView *, const std::__1::pair<_NSRange, _NSRange>, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, const std::__1::pair<_NSRange, _NSRange>>>> {
    struct __tree<std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::less<UIView *>, true>, std::__1::allocator<std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::less<UIView *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<UIView *, double, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, double>>> {
    struct __tree<std::__1::__value_type<UIView *, double>, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, double>, std::__1::less<UIView *>, true>, std::__1::allocator<std::__1::__value_type<UIView *, double>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<UIView *, double>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, double>, std::__1::less<UIView *>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct nui_size_cache {
    struct pair<CGSize, CGSize> *__begin_;
    struct pair<CGSize, CGSize> *__end_;
    struct __compressed_pair<std::__1::pair<CGSize, CGSize>*, std::__1::allocator<std::__1::pair<CGSize, CGSize>>> {
        struct pair<CGSize, CGSize> *__value_;
    } __end_cap_;
};

struct objc_super {
    id receiver;
    Class super_class;
};

struct pair<CGSize, CGSize>;

struct vector<CALayer *, std::__1::allocator<CALayer *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<CALayer **, std::__1::allocator<CALayer *>> {
        id *__value_;
    } __end_cap_;
};

struct vector<CGRect, std::__1::allocator<CGRect>> {
    struct CGRect *__begin_;
    struct CGRect *__end_;
    struct __compressed_pair<CGRect *, std::__1::allocator<CGRect>> {
        struct CGRect *__value_;
    } __end_cap_;
};

struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell>> {
    struct _NUIGridArrangementCell *__begin_;
    struct _NUIGridArrangementCell *__end_;
    struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell>> {
        struct _NUIGridArrangementCell *__value_;
    } __end_cap_;
};

struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension>> {
    struct _NUIGridArrangementDimension *__begin_;
    struct _NUIGridArrangementDimension *__end_;
    struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension>> {
        struct _NUIGridArrangementDimension *__value_;
    } __end_cap_;
};

typedef struct {
    unsigned short width;
    unsigned short height;
} CDStruct_0d6b4eb6;

typedef struct {
    double baseLineFromTop;
    double baseLineFromBottom;
} CDStruct_6c92d79e;

// Template types
typedef struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell>> {
    struct _NUIGridArrangementCell *__begin_;
    struct _NUIGridArrangementCell *__end_;
    struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell>> {
        struct _NUIGridArrangementCell *__value_;
    } __end_cap_;
} vector_f8404f95;

typedef struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension>> {
    struct _NUIGridArrangementDimension *__begin_;
    struct _NUIGridArrangementDimension *__end_;
    struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension>> {
        struct _NUIGridArrangementDimension *__value_;
    } __end_cap_;
} vector_b8a5df6e;
