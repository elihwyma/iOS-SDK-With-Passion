/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

__attribute__((visibility("hidden")))
@interface HMISparseOpticalFlowFrame : HMFObject

{
    struct __CVBuffer *_pixelBuffer;
    CDStruct_1b6d18a9 _time;
}

@property (readonly) struct __CVBuffer *pixelBuffer;
@property (readonly) CDStruct_1b6d18a9 time;

- (void)dealloc;
- (id)description;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 atTime:(CDStruct_1b6d18a9)arg2;

@end
