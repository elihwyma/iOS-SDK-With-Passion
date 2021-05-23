/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIImageProcessorInOut.h>

@protocol MTLCommandBuffer, MTLTexture;

__attribute__((visibility("hidden")))
@interface CIImageProcessorOutput : CIImageProcessorInOut

{
    id <MTLCommandBuffer> _cmdBuffer;
}

@property (nonatomic, readonly) struct CGRect region;
@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) void *baseAddress;
@property (nonatomic, readonly) struct __IOSurface *surface;
@property (nonatomic, readonly) struct __CVBuffer *pixelBuffer;
@property (nonatomic, readonly) id <MTLTexture> metalTexture;
@property (nonatomic, readonly) id <MTLCommandBuffer> metalCommandBuffer;

- (void)dealloc;
- (unsigned int)contextID;
- (struct CGColorSpace *)workingColorSpace;
- (id)initWithSurface:(struct __IOSurface *)arg1 texture:(struct Texture)arg2 allowSRGB:(_Bool)arg3 bounds:(struct CGRect)arg4 context:(struct Context *)arg5;
- (_Bool)metalCommandBufferRequested;
- (id)metalContext;

@end
