/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSImage/MPSUnaryImageKernel.h>

@class MPSImageConvolution;

@interface MPSImageBox : MPSUnaryImageKernel

{
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned int filterInfoH;
    unsigned int filterInfoV;
    MPSImageConvolution *hPass;
    MPSImageConvolution *vPass;
}

@property (nonatomic, readonly) unsigned long long kernelHeight;
@property (nonatomic, readonly) unsigned long long kernelWidth;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (struct MPSRegion)sourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (void)initFilterInfo;

@end
