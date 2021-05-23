/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVDepthData;

__attribute__((visibility("hidden")))
@interface AVCaptureSynchronizedDepthDataInternal : NSObject

{
    AVDepthData *depthData;
    _Bool depthDataWasDropped;
    long long droppedReason;
}

@end
