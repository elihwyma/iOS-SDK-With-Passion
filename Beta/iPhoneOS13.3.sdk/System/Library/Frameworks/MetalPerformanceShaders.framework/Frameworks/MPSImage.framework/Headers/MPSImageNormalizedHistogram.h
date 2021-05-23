/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSCore/MPSKernel.h>

@class MISSING_TYPE, MPSImageStatisticsMinAndMax;

@interface MPSImageNormalizedHistogram : MPSKernel

{
    unsigned long long histogramEntries;
    _Bool histogramAlpha;
    MISSING_TYPE *minPixelValue;
    MISSING_TYPE *maxPixelValue;
    _Bool useMinMaxHistogramKernel;
    CDStruct_1e3be3a8 _clipRectSource;
    _Bool _zeroHistogram;
    MPSImageStatisticsMinAndMax *_minmaxFilter;
}

@property (nonatomic) CDStruct_1e3be3a8 clipRectSource;
@property (nonatomic) _Bool zeroHistogram;
@property (nonatomic, readonly) CDStruct_5577c19c histogramInfo;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 histogramInfo:(const CDStruct_5577c19c *)arg2;
- (unsigned long long)histogramSizeForSourceFormat:(unsigned long long)arg1;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 minmaxTexture:(id)arg3 histogram:(id)arg4 histogramOffset:(unsigned long long)arg5;

@end
