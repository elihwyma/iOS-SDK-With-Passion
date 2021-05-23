/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@protocol MTLDevice, MTLTexture;

@interface PKMetalFramebuffer : NSObject

{
    _Bool _isPurgeable;
    _Bool _memoryless;
    _Bool _backedByIOSurface;
    id <MTLTexture> _colorTexture;
    id <MTLDevice> _device;
    unsigned long long _pixelFormat;
    unsigned long long _sampleCount;
    struct __IOSurface *_ioSurface;
    struct CGSize _size;
}

@property (nonatomic, readonly) id <MTLTexture> colorTexture;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic, readonly) _Bool memoryless;
@property (nonatomic, readonly) _Bool backedByIOSurface;
@property (nonatomic, readonly) unsigned long long sampleCount;
@property (nonatomic, readonly) struct __IOSurface *ioSurface;

- (id)init;
- (void)dealloc;
- (struct __IOSurface *)createIOSurface;
- (id)initWithSize:(struct CGSize)arg1 pixelFormat:(unsigned long long)arg2 device:(id)arg3 memoryless:(_Bool)arg4 backedByIOSurface:(_Bool)arg5 sampleCount:(unsigned long long)arg6;
- (_Bool)makeNonPurgeable;
- (void)makePurgeable;
- (void)createColorTextureIfNecessary;

@end
