/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, PFCoalescer;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PFCoalescerContext : NSObject

{
    unsigned long long _coalescedUpdatesCount;
    PFCoalescer *_coalescer;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_group> *_group;
    NSHashTable *_pendingActivityTokens;
}

@property (weak) PFCoalescer *coalescer;
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property (retain) NSObject<OS_dispatch_group> *group;
@property (retain) NSHashTable *pendingActivityTokens;
@property (readonly) NSArray *pendingActivityTokensSnapshot;
@property unsigned long long coalescedUpdatesCount;

- (id)initWithCoalescer:(id)arg1;
- (void)pushBack:(CDUnknownBlockType)arg1;
- (void)delayNextInvocationByTimeInterval:(double)arg1;
- (id)activityToken;
- (id)activityTokenWithReason:(id)arg1;
- (void)cancelPendingActivityTokens;
- (void)notifyActivityTokenCompletionOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
