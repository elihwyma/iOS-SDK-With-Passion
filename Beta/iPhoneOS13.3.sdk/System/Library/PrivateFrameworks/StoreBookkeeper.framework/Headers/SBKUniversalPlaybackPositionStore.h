/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, NSString, NSTimer, SBKAsynchronousTask, SBKRequestHandler;

@protocol OS_dispatch_queue, SBKUniversalPlaybackPositionDataSource;

@interface SBKUniversalPlaybackPositionStore : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isActive;
    _Bool _hasLocalChangesToSync;
    NSMutableArray *_pendingTaskBlocks;
    NSString *_domain;
    unsigned long long _automaticSynchronizeOptions;
    double _initialAutosyncInterval;
    double _pollingLimitFromBag;
    double _autorefreshInterval;
    _Bool _refreshTimerActive;
    id _accountsObserver;
    id _prefsObserver;
    id <SBKUniversalPlaybackPositionDataSource> _dataSource;
    SBKAsynchronousTask *_currentTask;
    SBKAsynchronousTask *_lookupDomainVersionTask;
    SBKAsynchronousTask *_bagLookupTask;
    SBKRequestHandler *_currentTaskRequestHandler;
    NSDate *_dateToFireNextTimer;
    NSTimer *_timer;
}

@property (retain) SBKAsynchronousTask *currentTask;
@property (retain) SBKAsynchronousTask *lookupDomainVersionTask;
@property (retain) SBKAsynchronousTask *bagLookupTask;
@property (retain) SBKRequestHandler *currentTaskRequestHandler;
@property (retain) NSDate *dateToFireNextTimer;
@property (retain) NSTimer *timer;
@property (weak, readonly) id <SBKUniversalPlaybackPositionDataSource> dataSource;
@property unsigned long long automaticSynchronizeOptions;
@property _Bool hasLocalChangesToSync;

+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)_timerFired:(id)arg1;
- (void)becomeActive;
- (void)resignActive;
- (void)synchronizeImmediatelyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateAutorefreshRateSettingAndRestartTimer:(_Bool)arg1;
- (void)_onQueueLoadBagContextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateForStoreAccountsChange;
- (id)initWithInitialUpdateDelay:(double)arg1;
- (void)_onQueueStopTimer;
- (void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)arg1;
- (void)_onQueueSuspendTimer;
- (_Bool)_automaticallySynchronizeOnBecomeActive;
- (void)_onQueueResumeTimer;
- (void)_onQueueUpdateTimerForActiveChanges;
- (_Bool)_automaticallySynchronizeLocalChangesOnResignActive;
- (void)_onQueueSynchronizeWithAutosynchronizeMask:(unsigned long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;
- (void)_onQueueSynchronizeImmediatelyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_onQueuePushMetadataItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_onQueuePullMetadataItemWithItemIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_accountForSyncing;
- (void)_onQueueLoadRemoteDomainVersionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_onQueueRunTaskWithName:(id)arg1 taskCompletionHandler:(CDUnknownBlockType)arg2 runTaskBlock:(CDUnknownBlockType)arg3;
- (void)_onQueueStartNewTimer;
- (void)_onQueueRunNextPendingTaskBlock;
- (double)_effectiveAutorefreshRate;
- (void)_updateSettingsFromLoadedBagContext:(id)arg1;
- (_Bool)_timerIsStopped;
- (void)_onQueueScheduleTimer;
- (void)deprecated_setDataSource:(id)arg1;
- (id)initWithDomain:(id)arg1 dataSource:(id)arg2 automaticSynchronizeOptions:(unsigned long long)arg3 isActive:(_Bool)arg4;
- (void)setAutomaticallySynchronizeLocalChangesOnResignActive:(_Bool)arg1;
- (_Bool)automaticallySynchronizeLocalChangesOnResignActive;
- (void)setAutomaticallySynchronizeOnBecomeActive:(_Bool)arg1;
- (_Bool)automaticallySynchronizeOnBecomeActive;
- (void)pushMetadataItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)pullMetadataItemWithItemIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)synchronizeImmediatelyWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)checkForAvailabilityWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)loadRemoteDomainVersionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)loadBagContextWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
