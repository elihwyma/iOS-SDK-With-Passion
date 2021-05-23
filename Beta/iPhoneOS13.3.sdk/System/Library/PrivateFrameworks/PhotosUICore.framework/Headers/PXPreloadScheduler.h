/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableArray;

@protocol OS_dispatch_queue;

@interface PXPreloadScheduler : NSObject

{
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    CADisplayLink *_displayLink;
    NSMutableArray *_pendingBlocks;
    struct __CFRunLoopObserver *_runloopObserver;
    _Bool __isActive;
}

@property (nonatomic, setter=_setActive:) _Bool _isActive;

+ (id)sharedScheduler;

- (id)init;
- (void)dealloc;
- (void)_displayLinkTick:(id)arg1;
- (void)scheduleMainQueueTask:(CDUnknownBlockType)arg1;
- (void)scheduleMainQueueTaskAndWait:(CDUnknownBlockType)arg1;
- (void)scheduleBackgroundTask:(CDUnknownBlockType)arg1;
- (void)scheduleDeferredBackgroundTask:(CDUnknownBlockType)arg1;
- (_Bool)_shouldExecutePendingBlock;
- (void)_runLoopWillStartWaiting;
- (void)_updateIsActive;
- (void)scheduleTaskAfterCATransactionCommits:(CDUnknownBlockType)arg1;

@end
