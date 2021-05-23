/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageEuclideanDistanceTransform : MPSUnaryImageKernel

{
    unsigned long long _width;
    unsigned long long _height;
}

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)initWithDevice:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;

@end
