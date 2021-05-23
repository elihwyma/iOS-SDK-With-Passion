/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

@class MPSImageCopyToMatrix, MPSMatrixCopyToImage, MPSMatrixMultiplication, MPSNNGraph, NSData, NSNull, NSObject;

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct FilterGraphNode {
    CDUnknownFunctionPointerType *_field1;
    struct ResourceGraphNode *_field2;
    struct ResourceGraphNode *_field3;
    struct FilterGraphNode *_field4;
    struct NodeList<ResourceGraphNode *> _field5;
    struct NodeList<ResourceGraphNode *> _field6;
    struct NodeList<ResourceGraphNode *> _field7;
    union {
        id _field1;
        id _field2;
        id _field3;
        id _field4;
    } _field8;
    id _field9;
    unsigned long long _field10;
    _Bool _field11;
    _Bool _field12;
    unsigned int _field13;
    unsigned long long _field14;
};

struct Graph {
    struct NodeList<ResourceGraphNode *> _graphSourceImages;
    struct NodeList<ResourceGraphNode *> _graphSourceStates;
    struct NodeList<ResourceGraphNode *> _graphResultImages;
    struct NodeList<ResourceGraphNode *> _graphIntermediateImages;
    struct NodeList<ResourceGraphNode *> _graphResultStates;
    MPSNNGraph *_graph;
    struct NodeList<FilterGraphNode *> _filters;
    struct NodeList<ResourceGraphNode *> _images;
    struct NodeList<ResourceGraphNode *> _states;
    NSObject *_cpuUpdateSem;
    NSNull *_graphNull;
};

struct MPSAutoBuffer {
    struct atomic<void *> _field1;
    unsigned long long _field2;
    id _field3;
    id _field4;
    struct {
        unsigned long long _field1;
        unsigned long long _field2;
    } _field5;
};

struct MPSCNNGramFilters_s {
    MPSImageCopyToMatrix *i2mCopy;
    MPSMatrixCopyToImage *m2iCopy;
    MPSMatrixMultiplication *gemm_TN;
};

struct MPSCNNGramGradientFilters_s {
    struct MPSCNNGramFilters_s fwdFilters;
    MPSMatrixMultiplication *gemm_NN;
};

struct MPSDeviceSpecificInfo {
    struct MPSKernelInfo *_field1;
    CDUnknownFunctionPointerType _field2;
    unsigned long long _field3;
};

struct MPSImageCoordinate {
    unsigned long long x;
    unsigned long long y;
    unsigned long long channel;
};

struct MPSKernelInfo;

struct MPSLibraryInfo {
    int _field1;
    unsigned int _field2;
    char *_field3;
    struct MPSDeviceSpecificInfo _field4;
    struct MPSDeviceSpecificInfo _field5;
    struct MPSDeviceSpecificInfo _field6;
    struct MPSDeviceSpecificInfo _field7;
    struct MPSDeviceSpecificInfo _field8;
    struct MPSDeviceSpecificInfo _field9;
    struct MPSDeviceSpecificInfo _field10;
    struct MPSDeviceSpecificInfo _field11;
    struct MPSDeviceSpecificInfo _field12;
    struct MPSDeviceSpecificInfo _field13;
    struct MPSDeviceSpecificInfo _field14;
    struct MPSDeviceSpecificInfo _field15;
    struct MPSDeviceSpecificInfo _field16;
    struct MPSDeviceSpecificInfo _field17;
    struct MPSDeviceSpecificInfo _field18;
    struct MPSDeviceSpecificInfo _field19;
    struct MPSDeviceSpecificInfo _field20;
    struct MPSDeviceSpecificInfo _field21;
    struct MPSDeviceSpecificInfo _field22;
};

struct MPSOrigin {
    double _field1;
    double _field2;
    double _field3;
};

struct MPSRegion {
    struct MPSOrigin _field1;
    struct MPSSize _field2;
};

struct MPSSize {
    double _field1;
    double _field2;
    double _field3;
};

struct MPSSliceInfo {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct NNKernelSourceParams {
    CDStruct_d6af7fc0 _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
};

struct NSArray {
    Class _field1;
};

struct NeuronInfo {
    int type;
    float a;
    float b;
    float c;
    NSData *aData;
};

struct NodeList<FilterGraphNode *> {
    struct FilterGraphNode **_items;
    unsigned long long _count;
    unsigned long long _storageSize;
};

struct NodeList<ResourceGraphNode *> {
    struct ResourceGraphNode **_items;
    unsigned long long _count;
    unsigned long long _storageSize;
};

struct ResourceGraphNode {
    id _field1;
    struct NodeList<FilterGraphNode *> _field2;
    struct FilterGraphNode *_field3;
    struct ResourceGraphNode *_field4;
    id _field5;
    id _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
    _Bool _field12;
    unsigned long long _field13;
    unsigned long long _field14;
};

struct atomic<long> {
    _Atomic long long __a_;
};

struct atomic<void *> {
    _Atomic void *_field1;
};

typedef struct {
    long long x;
    long long y;
    long long z;
} CDStruct_d6af7fc0;

typedef struct {
    struct {
        unsigned long long x;
        unsigned long long y;
        unsigned long long z;
    } origin;
    CDStruct_da2e99ad size;
} CDStruct_1e3be3a8;

// Ambiguous groups
typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    unsigned long long width;
    unsigned long long height;
    unsigned long long depth;
} CDStruct_da2e99ad;
