/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageMedian : MPSUnaryImageKernel

{
    unsigned long long _filterDiameter;
}

@property (nonatomic, readonly) unsigned long long kernelDiameter;

+ (const struct MPSLibraryInfo *)libraryInfo;
+ (unsigned long long)minKernelDiameter;
+ (unsigned long long)maxKernelDiameter;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 kernelDiameter:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (struct MPSRegion)sourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (void)initEncoder;

@end
