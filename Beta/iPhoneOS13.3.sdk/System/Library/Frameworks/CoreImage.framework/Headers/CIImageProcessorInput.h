/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIImageProcessorInOut.h>

@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface CIImageProcessorInput : CIImageProcessorInOut

@property (nonatomic, readonly) struct CGRect region;
@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) const void *baseAddress;
@property (nonatomic, readonly) struct __IOSurface *surface;
@property (nonatomic, readonly) struct __CVBuffer *pixelBuffer;
@property (nonatomic, readonly) id <MTLTexture> metalTexture;

- (void)dealloc;
- (id)initWithSurface:(struct __IOSurface *)arg1 texture:(struct Texture)arg2 allowSRGB:(_Bool)arg3 bounds:(struct CGRect)arg4 context:(struct Context *)arg5;

@end
