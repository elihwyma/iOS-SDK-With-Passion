/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PXScheduler : NSObject

{
    NSMutableArray *_pendingBlocks;
    _Bool _hasPendingPerformInDefaultRunLoopMode;
    _Bool _isPerformingPendingBlocks;
}

+ (id)sharedScheduler;

- (id)init;
- (void)_performBlock:(CDUnknownBlockType)arg1;
- (void)dispatchInMainTransaction:(CDUnknownBlockType)arg1;
- (void)dispatchInMainTransactionAfterDelay:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)scrollViewDidScroll;
- (void)scrollViewWillLayoutSubviews;
- (void)_enteredDefaultRunLoopMode;
- (void)_performPendingBlocksIfNeeded;
- (void)_performPendingBlocks;
- (void)dispatchOnMainThreadWhenNotScrolling:(CDUnknownBlockType)arg1;
- (void)dispatchOnMainThreadWhenNotScrollingAfterDelay:(double)arg1 block:(CDUnknownBlockType)arg2;

@end
