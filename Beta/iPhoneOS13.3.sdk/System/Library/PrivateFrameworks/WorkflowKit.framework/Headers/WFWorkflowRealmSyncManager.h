/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, WFDatabase, WFDatabaseResult;

@protocol OS_dispatch_queue, OS_dispatch_source, WFUserInterface;

@interface WFWorkflowRealmSyncManager : NSObject

{
    _Bool _pendingResume;
    _Bool _syncPending;
    long long _accountStatus;
    id <WFUserInterface> _userInterface;
    WFDatabase *_database;
    WFDatabaseResult *_databaseResultForObservation;
    unsigned long long _pauseCount;
    unsigned long long _start;
    NSObject<OS_dispatch_source> *_timer;
    NSLock *_timerLock;
    NSObject<OS_dispatch_queue> *_syncSessionQueue;
    NSLock *_completionHandlerLock;
    NSMutableArray *_completionHandlers;
}

@property (nonatomic, readonly) WFDatabase *database;
@property (retain, nonatomic) WFDatabaseResult *databaseResultForObservation;
@property (nonatomic) unsigned long long pauseCount;
@property (nonatomic) _Bool pendingResume;
@property (nonatomic) unsigned long long start;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, readonly) NSLock *timerLock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *syncSessionQueue;
@property (nonatomic, readonly) NSLock *completionHandlerLock;
@property (nonatomic, readonly) NSMutableArray *completionHandlers;
@property (nonatomic, readonly) _Bool syncPending;
@property (nonatomic, readonly) long long accountStatus;
@property (retain, nonatomic) id <WFUserInterface> userInterface;

+ (id)defaultManager;
+ (void)setDefaultManager:(id)arg1;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithDatabase:(id)arg1;
- (void)startSync;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (void)handleUserDeletedZoneErrorIfNeededWithSuccess:(_Bool)arg1 changes:(_Bool)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pushCompletionHandler:(CDUnknownBlockType)arg1;
- (void)completeSyncWithSuccess:(_Bool)arg1 changes:(_Bool)arg2 error:(id)arg3;
- (void)triggerSync:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)triggerSync:(_Bool)arg1 onlyIfPending:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startAutomaticUpdates;
- (void)stopAutomaticUpdates;
- (void)pauseAutomaticUpdates;
- (void)resumeAutomaticUpdates;
- (void)updateAccountStatus;
- (void)subscribeToCloudKitAccountStatusNotifications;
- (void)unsubscribeFromCloudKitAccountStatusNotifications;
- (void)handleAccountChangedNotification:(id)arg1;
- (id)userDefaultsKeysToObserve;
- (void)startObservingUserDefaults;
- (void)stopObservingUserDefaults;

@end
