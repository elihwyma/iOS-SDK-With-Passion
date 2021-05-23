/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@interface VCPImageConverter : NSObject

{
    int _pixelFormat;
    int _width;
    int _height;
    struct CGColorSpace *_rgbColorSpace;
    struct CGContext *_cgContext;
    struct __CVBuffer *_rgbFrame;
    struct __CVPixelBufferPool *_yuvFrames;
    struct OpaqueVTPixelTransferSession *_rgbToYuv;
}

- (id)init;
- (void)dealloc;
- (int)resize:(int)arg1 height:(int)arg2;
- (id)initWithPixelFormat:(int)arg1;
- (int)convertImage:(struct CGImage *)arg1 yuvFrame:(struct __CVBuffer **)arg2;

@end
