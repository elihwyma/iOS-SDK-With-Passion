/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPlayerItemOutputInternal : NSObject

{
    AVWeakReference *weakReference;
    NSObject<OS_dispatch_queue> *timebaseReadWriteQueue;
    struct OpaqueCMTimebase *timebase;
}

@end
