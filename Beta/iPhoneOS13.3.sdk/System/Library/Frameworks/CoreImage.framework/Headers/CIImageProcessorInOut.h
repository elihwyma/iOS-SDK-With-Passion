/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface CIImageProcessorInOut : NSObject

{
    struct CGRect _region;
    struct __IOSurface *_surface;
    _Bool _usesSRGB;
    struct Context *_context;
    id <MTLTexture> _mtlTexture;
    _Bool _surfaceLocked;
}

@property (nonatomic, readonly) struct CGRect region;
@property (nonatomic, readonly) struct __IOSurface *surface;
@property (nonatomic, readonly) _Bool usesSRGBTransferFunction;
@property (nonatomic, readonly) struct __CVBuffer *pixelBuffer;
@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) void *device;

- (void)dealloc;
- (id)description;
- (id)initWithSurface:(struct __IOSurface *)arg1 texture:(struct Texture)arg2 allowSRGB:(_Bool)arg3 bounds:(struct CGRect)arg4 context:(struct Context *)arg5;

@end
