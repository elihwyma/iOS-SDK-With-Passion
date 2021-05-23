/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@interface NURenderPipelineVideoFrame : NSObject

{
    struct __CVBuffer *_pixelBuffer;
    CDStruct_1b6d18a9 _frameTime;
}

@property (readonly) struct __CVBuffer *pixelBuffer;
@property (readonly) CDStruct_1b6d18a9 frameTime;

- (void)dealloc;
- (id)initWithFrameTime:(CDStruct_1b6d18a9)arg1 pixelBuffer:(struct __CVBuffer *)arg2;

@end
