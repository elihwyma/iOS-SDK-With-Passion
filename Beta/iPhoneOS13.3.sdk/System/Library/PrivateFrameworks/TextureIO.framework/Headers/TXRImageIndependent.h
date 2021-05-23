/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <TextureIO/TXRImage.h>

@class MISSING_TYPE;

@interface TXRImageIndependent : TXRImage

{
    unsigned long long _pixelFormat;
    unsigned long long _alphaInfo;
    MISSING_TYPE *_dimensions;
}

@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic) unsigned long long alphaInfo;
@property (nonatomic, readonly) MISSING_TYPE *dimensions;

- (id)initWithCGImage:(struct CGImage *)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)initWithImage:(id)arg1 dimensions:(unsigned long long)arg2 pixelFormat: /* Error: Ran out of types for this method. */;
- (id)initWithDimensions:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 alphaInfo:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 bytesPerImage:(id)arg5 buffer:(unsigned long long)arg6 offset: /* Error: Ran out of types for this method. */;
- (_Bool)exportToURL:(id)arg1 uttype:(const struct __CFString *)arg2 error:(id *)arg3;
- (id)initWithDimensions:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 alphaInfo:(id)arg3 bufferAllocator: /* Error: Ran out of types for this method. */;
- (id)initWithImage:(id)arg1 dimensions:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 alphaInfo: /* Error: Ran out of types for this method. */;
- (id)initWithCGImage:(struct CGImage *)arg1 pixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (struct CGImage *)newCGImageWithColorSpace:(struct CGColorSpace *)arg1 error:(id *)arg2;

@end
