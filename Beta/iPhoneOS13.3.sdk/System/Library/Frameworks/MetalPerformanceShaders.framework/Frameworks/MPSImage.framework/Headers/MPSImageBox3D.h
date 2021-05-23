/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSImage/MPSUnaryImageKernel.h>

@class MPSImageBox;

@interface MPSImageBox3D : MPSUnaryImageKernel

{
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _kernelDepth;
    MPSImageBox *_boxFilter;
}

@property (nonatomic, readonly) unsigned long long kernelWidth;
@property (nonatomic, readonly) unsigned long long kernelHeight;
@property (nonatomic, readonly) unsigned long long kernelDepth;

+ (id)supportedPixelFormats;
+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (id)initWithDevice:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 kernelDepth:(unsigned long long)arg4;

@end
