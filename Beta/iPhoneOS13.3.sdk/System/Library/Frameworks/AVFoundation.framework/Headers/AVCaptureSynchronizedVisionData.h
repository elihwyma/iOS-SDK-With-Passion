/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedVisionDataInternal;

@interface AVCaptureSynchronizedVisionData : AVCaptureSynchronizedData

{
    AVCaptureSynchronizedVisionDataInternal *_internal;
}

@property (readonly) struct __CVBuffer *visionDataPixelBuffer;
@property (readonly) _Bool visionDataWasDropped;
@property (readonly) long long droppedReason;

- (void)dealloc;
- (id)_initWithVisionDataPixelBuffer:(struct __CVBuffer *)arg1 timestamp:(CDStruct_1b6d18a9)arg2 visionDataWasDropped:(_Bool)arg3 droppedReason:(long long)arg4;

@end
