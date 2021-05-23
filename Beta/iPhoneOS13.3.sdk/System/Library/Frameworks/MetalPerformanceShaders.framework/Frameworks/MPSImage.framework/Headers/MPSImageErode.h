/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSImage/MPSImageDilate.h>

@interface MPSImageErode : MPSImageDilate

- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (Class)maxClass;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 values:(const float *)arg4;

@end
