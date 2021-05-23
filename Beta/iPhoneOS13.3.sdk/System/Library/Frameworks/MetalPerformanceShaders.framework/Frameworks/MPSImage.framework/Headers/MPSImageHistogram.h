/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSCore/MPSKernel.h>

@class MISSING_TYPE;

@interface MPSImageHistogram : MPSKernel

{
    unsigned long long histogramEntries;
    _Bool histogramAlpha;
    MISSING_TYPE *minPixelValue;
    MISSING_TYPE *maxPixelValue;
    _Bool useMinMaxHistogramKernel;
    CDStruct_1e3be3a8 _clipRectSource;
    _Bool _zeroHistogram;
    MISSING_TYPE *_minPixelThresholdValue;
    unsigned long long _histogramAtomicType;
}

@property (nonatomic) CDStruct_1e3be3a8 clipRectSource;
@property (nonatomic) _Bool zeroHistogram;
@property (nonatomic) MISSING_TYPE *minPixelThresholdValue;
@property (nonatomic, readonly) CDStruct_5577c19c histogramInfo;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 histogramInfo:(const CDStruct_5577c19c *)arg2;
- (unsigned long long)histogramSizeForSourceFormat:(unsigned long long)arg1;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 histogram:(id)arg3 histogramOffset:(unsigned long long)arg4;
- (void)useGlobalAtomics;
- (void)useThreadgroupAtomics;

@end
