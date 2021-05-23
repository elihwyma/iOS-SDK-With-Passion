/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSHashTable, NSMutableArray, NSRunLoop, NSString, NSThread, _UIAppCACommitFuture;

@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source, _UIViewInProcessAnimationManagerDriver;

@interface UIViewInProcessAnimationManager : NSObject

{
    NSMutableArray *_preCommitBlocks;
    NSMutableArray *_entries;
    NSMutableArray *_newlyAddedEntries;
    NSMutableArray *_postTickBlocks;
    NSMutableArray *_preExitBlocks;
    NSMutableArray *_presentationModifierGroupRequestBlocks;
    id <_UIViewInProcessAnimationManagerDriver> _animatorAdvancer;
    double _time;
    double _deltaTime;
    double _refreshInterval;
    NSObject<OS_dispatch_queue> *_tickPrepQueue;
    NSObject<OS_dispatch_queue> *_tickQueue;
    NSObject<OS_dispatch_queue> *_entryLockingQueue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_queue> *_displayLinkAccessQueue;
    NSObject<OS_dispatch_queue> *_backlightQueue;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_semaphore> *_postTicksDelaySemaphore;
    _Bool _processingPreCommits;
    _Bool _waitingForAnimatorAdvancerToStart;
    _UIAppCACommitFuture *_caCommitFuture;
    CADisplayLink *_displayLink;
    int _screenDimmingNotificationToken;
    _Bool _animationsSuspended;
    _Bool _animationsShouldCompleteImmediately;
    _Bool _skipNextFrame;
    _Bool _displayLinkInvalidated;
    _Bool _screenIsOff;
    unsigned long long _presentationModifierRequestCount;
    NSHashTable *_presentationGroups;
    _Bool _usesMainThreadExecution;
    _Bool _advancingOnCommitDisabled;
    unsigned long long _executionMode;
    NSThread *_currentTickThread;
    NSThread *_animationThread;
    NSRunLoop *_animationThreadRunLoop;
    NSObject<OS_dispatch_semaphore> *_animationThreadKeepAliveSemaphore;
}

@property (nonatomic) _Bool usesMainThreadExecution;
@property (nonatomic) unsigned long long executionMode;
@property (nonatomic) _Bool advancingOnCommitDisabled;
@property (weak) NSThread *currentTickThread;
@property (weak) NSThread *animationThread;
@property (weak) NSRunLoop *animationThreadRunLoop;
@property (retain) NSObject<OS_dispatch_semaphore> *animationThreadKeepAliveSemaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (void)_dispatchAsyncOntoMainBeforeExit:(CDUnknownBlockType)arg1;
+ (id)_requestPresentationModifierGroup:(CDUnknownBlockType)arg1;
+ (void)_cancelPresentationModifierGroupRequest:(id)arg1;
+ (void)_setExternalAnimationDriver:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)addEntry:(CDUnknownBlockType)arg1;
- (_Bool)_isInvalidated;
- (void)performAfterTick:(CDUnknownBlockType)arg1;
- (double)refreshInterval;
- (void)_applicationResignedActive;
- (void)_applicationBecameActive;
- (void)_registerBacklightChangedNotification;
- (void)_cancelAllAnimationsImmediately;
- (void)_processPreCommitBlocks;
- (void)_performTick:(double)arg1 cancel:(_Bool)arg2 force:(_Bool)arg3 eventName:(id)arg4 entry:(CDUnknownBlockType)arg5 exit:(CDUnknownBlockType)arg6;
- (void)finishAdvancingAnimationManager;
- (unsigned long long)_runPreCommitBlocks;
- (void)_setAnimationExecutionParameters;
- (void)_prepareForTick;
- (void)_processEntriesCollectingEntriesToRemove:(id)arg1 cancel:(_Bool)arg2;
- (void)_processPostTicksDelayIfNecessary:(double)arg1;
- (void)_processPostTicks;
- (void)_processPresentationModifierRequestsAndFlush;
- (void)_processTickExitRemovingEntries:(id)arg1;
- (void)scheduleAnimatorAdvancerToStart;
- (void)startAdvancingAnimationManager:(id)arg1;
- (void)startAnimationAdvancerIfNeeded;
- (void)_commitSynchronously;
- (id)_requestPresentationModifierGroup:(CDUnknownBlockType)arg1;
- (void)_cancelPresentationModifierGroupRequest:(id)arg1;
- (void)performBeforeExiting:(CDUnknownBlockType)arg1;
- (void)_advanceWithTime:(double)arg1;
- (_Bool)_shouldKeepAnimationThreadAlive;
- (void)_displayLinkFire:(id)arg1;
- (void)_setCurrentMediaTime:(double)arg1;
- (void)_performWhenInProcessAnimationsTransactionCommits:(CDUnknownBlockType)arg1;

@end
