/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
 */

#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@protocol MPSExternalMatrixVectorMultiplication;

@interface MPSMatrixVectorMultiplication : MPSMatrixBinaryKernel

{
    id <MPSExternalMatrixVectorMultiplication> _plugin;
    _Bool _transpose;
    unsigned long long _batchStart;
    unsigned long long _batchSize;
    double _alpha;
    double _beta;
    unsigned long long _M;
    unsigned long long _N;
    CDStruct_67e7699a _resultMatrixOrigin;
    CDStruct_67e7699a _primarySourceMatrixOrigin;
    CDStruct_67e7699a _secondarySourceMatrixOrigin;
}

@property (nonatomic, readonly) _Bool transpose;
@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly) double beta;
@property (nonatomic) unsigned long long M;
@property (nonatomic) unsigned long long N;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (unsigned long long)batchSize;
- (void)setBatchSize:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)setResultMatrixOrigin:(CDStruct_67e7699a)arg1;
- (unsigned long long)batchStart;
- (void)setBatchStart:(unsigned long long)arg1;
- (CDStruct_67e7699a)resultMatrixOrigin;
- (CDStruct_67e7699a)primarySourceMatrixOrigin;
- (CDStruct_67e7699a)secondarySourceMatrixOrigin;
- (void)setPrimarySourceMatrixOrigin:(CDStruct_67e7699a)arg1;
- (void)setSecondarySourceMatrixOrigin:(CDStruct_67e7699a)arg1;
- (id)initWithDevice:(id)arg1 transpose:(_Bool)arg2 rows:(unsigned long long)arg3 columns:(unsigned long long)arg4 alpha:(double)arg5 beta:(double)arg6;
- (id)initWithDevice:(id)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3;
- (void)encodeToCommandBuffer:(id)arg1 inputMatrix:(id)arg2 inputVector:(id)arg3 resultVector:(id)arg4;

@end
