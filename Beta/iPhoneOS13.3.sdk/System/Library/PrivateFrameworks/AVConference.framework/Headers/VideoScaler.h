/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VideoScaler : NSObject

{
    char *_tempBuffer1;
    char *_tempBuffer2;
    unsigned long long _tempBufferWidth;
    unsigned long long _tempBufferHeight;
    struct __IOSurfaceAccelerator *_ioSurfaceAccelerator;
}

- (id)init;
- (void)dealloc;
- (int)rotatePixelBuffer:(struct __CVBuffer *)arg1 withPixelFormat:(unsigned int)arg2 usingPixelBufferPool:(struct __CVPixelBufferPool *)arg3 andStoreTo:(struct __CVBuffer **)arg4;
- (int)convertAndScalePixelBuffer:(struct __CVBuffer *)arg1 toWidth:(int)arg2 toHeight:(int)arg3 withPixelFormat:(unsigned int)arg4 usingPixelBufferPool:(struct __CVPixelBufferPool *)arg5 andStoreTo:(struct __CVBuffer **)arg6;

@end
