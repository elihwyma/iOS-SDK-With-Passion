/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface MPDispatchQueueExclusiveAccessToken : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
}

+ (id)tokenWithQueue:(id)arg1;

- (id)_init;
- (void)assertHasExclusiveAccess;

@end
