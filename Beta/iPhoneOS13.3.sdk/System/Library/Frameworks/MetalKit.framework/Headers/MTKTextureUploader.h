/*
 Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

#import <Foundation/NSObject.h>

@class NSLock;

@protocol MTLBlitCommandEncoder, MTLCommandBuffer, MTLDevice, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MTKTextureUploader : NSObject

{
    id <MTLDevice> _device;
    id <MTLCommandBuffer> _commandBuffer;
    id <MTLBlitCommandEncoder> _blit;
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_notifyQueue;
}

- (void)dealloc;
- (void)generateMipmapsForTexture:(id)arg1;
- (void)finishWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)copyBytes:(const void *)arg1 toTexture:(id)arg2 bitsPerPixel:(unsigned long long)arg3 pixelComponents:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 region:(CDStruct_4c83c94d)arg7 slice:(unsigned long long)arg8 level:(unsigned long long)arg9 flipVertically:(_Bool)arg10;
- (void)copyTexture:(id)arg1 toTexture:(id)arg2;
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2 notifyQueue:(id)arg3;
- (id)newTextureWithData:(id)arg1 options:(id)arg2;

@end
