/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVCaptureSynchronizedVisionDataInternal : NSObject

{
    struct __CVBuffer *visionDataPixelBuffer;
    _Bool visionDataWasDropped;
    long long droppedReason;
}

@end
