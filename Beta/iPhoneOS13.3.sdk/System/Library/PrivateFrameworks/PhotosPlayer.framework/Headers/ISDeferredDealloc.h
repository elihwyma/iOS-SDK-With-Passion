/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ISDeferredDealloc : NSObject

{
    NSObject<OS_dispatch_queue> *_deferredDeallocQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_performDeferredDealloc:(id)arg1 withDelay:(double)arg2;
- (void)_performDeferredDealloc:(id)arg1;

@end
