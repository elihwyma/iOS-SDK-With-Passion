/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSImage/MPSUnaryImageKernel.h>

@class MPSImageConvolution;

@interface MPSImageGaussianBlur : MPSUnaryImageKernel

{
    float _sigma;
    MPSImageConvolution *smallConv;
    int _planSteps[8];
    unsigned long long _numSteps;
    const double *_plan;
    _Bool _cheesyBlur;
    float _scale;
}

@property (nonatomic, readonly) float sigma;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 sigma:(float)arg2;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (struct MPSRegion)sourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (void)initFilterInfo;
- (void)toggleCheesyBlur;

@end
