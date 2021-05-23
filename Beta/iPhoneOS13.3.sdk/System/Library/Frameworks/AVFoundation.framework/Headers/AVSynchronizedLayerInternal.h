/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVPlayerItem;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVSynchronizedLayerInternal : NSObject

{
    AVPlayerItem *playerItem;
    _Bool isVisible;
    NSObject<OS_dispatch_queue> *serialQueue;
}

@end
