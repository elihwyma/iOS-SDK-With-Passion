/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSImage/MPSUnaryImageKernel.h>

@class MISSING_TYPE;

@protocol MTLBuffer;

@interface MPSImageHistogramEqualization : MPSUnaryImageKernel

{
    unsigned long long histogramEntries;
    _Bool histogramAlpha;
    MISSING_TYPE *minPixelValue;
    MISSING_TYPE *maxPixelValue;
    _Bool optimized256BinsUseCase;
    id <MTLBuffer> cumulativeHistogramBuffer;
    _Bool encodeTransform;
}

@property (nonatomic, readonly) CDStruct_5577c19c histogramInfo;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 histogramInfo:(const CDStruct_5577c19c *)arg2;
- (void)encodeTransformToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 histogram:(id)arg3 histogramOffset:(unsigned long long)arg4;

@end
