/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageScale : MPSUnaryImageKernel

{
    struct MPSScaleTransform _transformStorage;
    struct MPSScaleTransform *_scaleTransform;
}

@property (nonatomic) const struct MPSScaleTransform *scaleTransform;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;

@end
