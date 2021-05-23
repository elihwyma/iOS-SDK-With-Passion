/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIBurstYUVImage : NSObject

{
    char *Ybuffer;
    char *Cbuffer;
    int width;
    int height;
    int bytesPerRow;
    struct __CFData *dataPtr;
    struct __CVBuffer *pixelBuffer;
    struct __IOSurface *ioSurf;
}

@property int width;
@property int height;
@property int bytesPerRow;
@property char *Ybuffer;
@property char *Cbuffer;

- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 maxDimension:(int)arg2;
- (id)initWithIOSurface:(struct __IOSurface *)arg1 maxDimension:(int)arg2;
- (void)convertRGBAToYUV420:(char *)arg1 rgbaBytesPerRow:(int)arg2;
- (id)initWithCIImage:(id)arg1 ctx:(id)arg2 maxDimension:(int)arg3;
- (struct __CVBuffer *)pixelBuffer;

@end
