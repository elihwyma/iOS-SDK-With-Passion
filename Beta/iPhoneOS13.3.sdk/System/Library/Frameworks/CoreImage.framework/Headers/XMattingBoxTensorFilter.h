/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class MPSImageBox;

@protocol MTLComputePipelineState, MTLDevice, MTLLibrary, MTLTexture;

__attribute__((visibility("hidden")))
@interface XMattingBoxTensorFilter : NSObject

{
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    MPSImageBox *_boxfilter;
    unsigned int _radius;
    unsigned int _depthRadius;
    _Bool _supportsReadWriteTextures;
    id <MTLTexture> _tmpTexture;
    id <MTLComputePipelineState> _depthFilterSeparableSlidingStacks_arrayKernel;
    id <MTLComputePipelineState> _renormalizeFromMPSImageEdgeModeZeroKernel;
}

+ (id)supportedPixelFormats;

- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (int)allocateResources:(CDStruct_c0454aff)arg1;
- (void)releaseResources;
- (int)_compileShadersWithLibrary:(id)arg1;
- (int)encodeSeparableSlidingStackOnCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (int)encodeOnCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;

@end
