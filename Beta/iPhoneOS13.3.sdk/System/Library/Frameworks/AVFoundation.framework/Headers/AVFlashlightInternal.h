/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVFlashlightInternal : NSObject

{
    AVWeakReference *weakReference;
    struct OpaqueFigFlashlight *flashlight;
    _Bool available;
    _Bool overheated;
    float flashlightLevel;
    struct OpaqueFigSimpleMutex *lock;
    NSObject<OS_dispatch_queue> *serverReconnectQueue;
}

@end
