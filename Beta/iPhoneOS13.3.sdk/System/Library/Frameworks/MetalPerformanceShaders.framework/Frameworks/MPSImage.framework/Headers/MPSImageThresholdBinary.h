/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageThresholdBinary : MPSUnaryImageKernel

{
    CDStruct_ce7c4229 filterInfo;
}

@property (nonatomic, readonly) float thresholdValue;
@property (nonatomic, readonly) float maximumValue;
@property (nonatomic, readonly) const float *transform;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 thresholdValue:(float)arg2 maximumValue:(float)arg3 linearGrayColorTransform:(const float *)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;

@end
