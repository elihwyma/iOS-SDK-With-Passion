/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface UISnapshottingAssertionManager : NSObject

{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } lock;
    NSMutableSet *_heldAssertions;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)relinquishAssertion:(id)arg1;
- (void)withLock:(CDUnknownBlockType)arg1;
- (id)acquireNewAssertion;
- (void)executeIfNoActiveAssertions:(CDUnknownBlockType)arg1;

@end
