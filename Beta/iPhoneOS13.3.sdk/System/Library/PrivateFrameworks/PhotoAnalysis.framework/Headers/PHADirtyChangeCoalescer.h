/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class PFCoalescer;

@protocol OS_dispatch_queue, PHADirtyChangeCoalescerDelegate;

@interface PHADirtyChangeCoalescer : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    PFCoalescer *_valueCoalescer;
    id <PHADirtyChangeCoalescerDelegate> _delegate;
}

@property (weak, nonatomic) id <PHADirtyChangeCoalescerDelegate> delegate;

- (id)init;
- (void)recordDirtyTransitionForAssetIdentifier:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3;

@end
