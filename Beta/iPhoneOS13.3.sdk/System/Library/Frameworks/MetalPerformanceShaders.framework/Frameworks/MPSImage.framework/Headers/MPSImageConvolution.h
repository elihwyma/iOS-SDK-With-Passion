/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSImage/MPSUnaryImageKernel.h>

@class MPSImageLaplacian;

@protocol MTLBuffer;

@interface MPSImageConvolution : MPSUnaryImageKernel

{
    id <MTLBuffer> wtBuffer;
    id <MTLBuffer> wtBufferh;
    float *kOrigWeights;
    float *wtArray;
    unsigned short *wtArrayh;
    unsigned long long _fWidth;
    unsigned long long _fHeight;
    float _fBias;
    _Bool separable;
    unsigned long long specialFilterType;
    MPSImageLaplacian *_laplacian;
}

@property (nonatomic, readonly) unsigned long long kernelHeight;
@property (nonatomic, readonly) unsigned long long kernelWidth;
@property (nonatomic) float bias;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 weights:(const float *)arg4;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (struct MPSRegion)sourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (void)initFilterWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 weights:(const float *)arg3;
- (id)initWithDevice_private:(id)arg1;

@end
