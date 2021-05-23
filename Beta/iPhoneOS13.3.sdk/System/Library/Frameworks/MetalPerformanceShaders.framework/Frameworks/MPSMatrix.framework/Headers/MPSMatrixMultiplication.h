/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
 */

#import <MPSCore/MPSKernel.h>

@protocol MPSExternalMatrixMultiplication;

@interface MPSMatrixMultiplication : MPSKernel

{
    _Bool _useTiling;
    id <MPSExternalMatrixMultiplication> _plugin;
    CDUnknownFunctionPointerType _encode;
    _Bool _transA;
    _Bool _transB;
    unsigned long long _batchStart;
    unsigned long long _batchSize;
    double _alpha;
    double _beta;
    unsigned long long _M;
    unsigned long long _N;
    unsigned long long _K;
    CDStruct_67e7699a _resultMatrixOrigin;
    CDStruct_67e7699a _leftMatrixOrigin;
    CDStruct_67e7699a _rightMatrixOrigin;
}

@property (nonatomic) _Bool transA;
@property (nonatomic) _Bool transB;
@property (nonatomic) double alpha;
@property (nonatomic) double beta;
@property (nonatomic) unsigned long long M;
@property (nonatomic) unsigned long long N;
@property (nonatomic) unsigned long long K;
@property (nonatomic) CDStruct_67e7699a resultMatrixOrigin;
@property (nonatomic) CDStruct_67e7699a leftMatrixOrigin;
@property (nonatomic) CDStruct_67e7699a rightMatrixOrigin;
@property (nonatomic) unsigned long long batchStart;
@property (nonatomic) unsigned long long batchSize;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 transposeLeft:(_Bool)arg2 transposeRight:(_Bool)arg3 resultRows:(unsigned long long)arg4 resultColumns:(unsigned long long)arg5 interiorColumns:(unsigned long long)arg6 alpha:(double)arg7 beta:(double)arg8;
- (id)initWithDevice:(id)arg1 resultRows:(unsigned long long)arg2 resultColumns:(unsigned long long)arg3 interiorColumns:(unsigned long long)arg4;
- (void)encodeToCommandBuffer:(id)arg1 leftMatrix:(id)arg2 rightMatrix:(id)arg3 resultMatrix:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 encoder:(id)arg2 leftMatrix:(id)arg3 rightMatrix:(id)arg4 resultMatrix:(id)arg5;

@end
