/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageSobel : MPSUnaryImageKernel

{
    float _colVec[3];
}

@property (nonatomic, readonly) const float *colorTransform;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (struct MPSRegion)sourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (id)initWithDevice:(id)arg1 linearGrayColorTransform:(const float *)arg2;

@end
