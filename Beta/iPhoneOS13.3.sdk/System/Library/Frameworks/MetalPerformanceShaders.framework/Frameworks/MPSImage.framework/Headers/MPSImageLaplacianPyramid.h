/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSImage/MPSImagePyramid.h>

@class NSDictionary;

@interface MPSImageLaplacianPyramid : MPSImagePyramid

{
    struct AutotuningState _autotuningState;
    struct HighlevelState _state;
    // Error: parsing type: '{DerivedState="padHeight"Q"padWidth"Q"h_WeightsRawFull"@"NSMutableData""h_WeightsRawHalf"@"NSMutableData""d_WeightsRawFull"@"<MTLBuffer>""d_WeightsRawHalf"@"<MTLBuffer>""linearScaleFull"{LinearScale<float>="offset"f"factor"f}"linearScaleHalf"{LinearScale<__fp16>="offset" "factor" }}', name: _derivedState
}

@property (nonatomic, getter=getIsPyramidAdd, setter=setIsPyramidAdd:) _Bool isPyramidAdd;
@property (nonatomic, readonly, getter=getCopyConfigs) NSDictionary *copyConfigs;
@property (nonatomic, readonly, getter=getUpsampleConfigs) NSDictionary *upsampleConfigs;
@property (nonatomic, getter=getAutotuningEnabled, setter=setAutotuningEnabled:) _Bool autotuningEnabled;
@property (nonatomic, getter=getCopyConfigID, setter=setCopyConfigID:) unsigned long long copyConfigID;
@property (nonatomic, getter=getUpsampleConfigID, setter=setUpsampleConfigID:) unsigned long long upsampleConfigID;
@property (nonatomic, getter=getLaplacianBias, setter=setLaplacianBias:) float laplacianBias;
@property (nonatomic, getter=getLaplacianScale, setter=setLaplacianScale:) float laplacianScale;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 weights:(const float *)arg4;
- (void)setOffset:(CDStruct_d6af7fc0)arg1;
- (void)setClipRect:(CDStruct_1e3be3a8)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)cleanUpAll;
- (void)zeroInitAll;
- (struct MPSRegion)sourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (_Bool)isValidDstPixelFormat:(unsigned long long)arg1 srcPixelFormat:(unsigned long long)arg2;
- (_Bool)isReducedPrecisionAllowedForDstPixelFormat:(unsigned long long)arg1 srcPixelFormat:(unsigned long long)arg2;

@end
