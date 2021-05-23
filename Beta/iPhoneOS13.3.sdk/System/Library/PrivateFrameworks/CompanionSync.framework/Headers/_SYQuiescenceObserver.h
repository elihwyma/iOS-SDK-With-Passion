/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSMutableSet, NSPointerArray;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _SYQuiescenceObserver : NSObject

{
    NSPointerArray *_quiescenceQueues;
    NSObject<OS_dispatch_group> *_allocationGroup;
    NSMutableSet *_allocations;
}

+ (id)sharedInstance;
+ (_Bool)isQuiescenceEnabled;
+ (void)setQuiescenceEnabled:(_Bool)arg1;

- (id)init;
- (void)registerQueue:(id)arg1;
- (_Bool)waitForQuiescenceWithTimeout:(double)arg1;
- (void)notifyOnQuiescence:(CDUnknownBlockType)arg1;
- (void)incrementAllocationCount:(id)arg1;
- (void)decrementAllocationCount:(id)arg1;
- (_Bool)waitForDeallocationCompleteWithTimeout:(double)arg1;
- (void)notifyOnDeallocationComplete:(CDUnknownBlockType)arg1;

@end
