/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
 */

#import <MPSCore/MPSKernel.h>

@interface MPSMatrixCopy : MPSKernel

{
    _Bool _sourcesAreTransposed;
    _Bool _destinationsAreTransposed;
    unsigned long long _copyRows;
    unsigned long long _copyColumns;
}

@property (nonatomic, readonly) unsigned long long copyRows;
@property (nonatomic, readonly) unsigned long long copyColumns;
@property (nonatomic, readonly) _Bool sourcesAreTransposed;
@property (nonatomic, readonly) _Bool destinationsAreTransposed;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 copyRows:(unsigned long long)arg2 copyColumns:(unsigned long long)arg3 sourcesAreTransposed:(_Bool)arg4 destinationsAreTransposed:(_Bool)arg5;
- (void)encodeToCommandBuffer:(id)arg1 copyDescriptor:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 copyDescriptor:(id)arg2 rowPermuteIndices:(id)arg3 rowPermuteOffset:(unsigned long long)arg4 columnPermuteIndices:(id)arg5 columnPermuteOffset:(unsigned long long)arg6;
- (void)encodeToCommandBuffer:(id)arg1 encoder:(id)arg2 copyDescriptor:(id)arg3 rowPermuteIndices:(id)arg4 rowPermuteOffset:(unsigned long long)arg5 columnPermuteIndices:(id)arg6 columnPermuteOffset:(unsigned long long)arg7;

@end
