/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSImage/MPSUnaryImageKernel.h>

@protocol MTLBuffer;

@interface MPSImagePyramid : MPSUnaryImageKernel

{
    id <MTLBuffer> wtBuffer;
    id <MTLBuffer> wtBufferh;
    float *wtArray;
    unsigned short *wtArrayh;
    unsigned long long _fWidth;
    unsigned long long _fHeight;
    _Bool separable;
}

@property (nonatomic, readonly) unsigned long long kernelHeight;
@property (nonatomic, readonly) unsigned long long kernelWidth;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 weights:(const float *)arg4;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 centerWeight:(float)arg2;

@end
