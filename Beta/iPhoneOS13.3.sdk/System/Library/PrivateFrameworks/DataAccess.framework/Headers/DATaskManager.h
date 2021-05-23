/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class DAAccount, DAActivity, DATransaction, NSArray, NSMutableArray, NSMutableSet, NSString, NSTimer;

@protocol DATask;

@interface DATaskManager : NSObject

{
    DATransaction *_transaction;
    DAActivity *_daActivity;
    DAAccount *_account;
    _Bool _didLogSyncStart;
    int _state;
    id <DATask> _activeModalTask;
    id <DATask> _activeQueuedTask;
    NSString *_powerAssertionGroupID;
    NSMutableArray *_queuedExclusiveTasks;
    id <DATask> _activeExclusiveTask;
    NSMutableSet *_independentTasks;
    NSMutableSet *_heldIndependentTasks;
    NSMutableSet *_modalHeldIndependentTasks;
    NSMutableArray *_mQueuedTasks;
    id <DATask> _modalHeldActiveQueuedTask;
    NSMutableArray *_queuedModalTasks;
    NSTimer *_managerIdleTimer;
    NSTimer *_userInitiatedSyncTimer;
    NSTimer *_xpcTransactionTimer;
    NSTimer *_powerLogIdleTimer;
}

@property (retain, nonatomic) NSMutableArray *queuedExclusiveTasks;
@property (retain, nonatomic) id <DATask> activeExclusiveTask;
@property (retain, nonatomic) NSMutableSet *independentTasks;
@property (retain, nonatomic) NSMutableSet *heldIndependentTasks;
@property (retain, nonatomic) NSMutableSet *modalHeldIndependentTasks;
@property (retain, nonatomic) NSMutableArray *mQueuedTasks;
@property (retain, nonatomic) id <DATask> modalHeldActiveQueuedTask;
@property (retain, nonatomic) id <DATask> activeQueuedTask;
@property (retain, nonatomic) NSMutableArray *queuedModalTasks;
@property (retain, nonatomic) id <DATask> activeModalTask;
@property (nonatomic) int state;
@property (retain, nonatomic) NSTimer *managerIdleTimer;
@property (retain, nonatomic) NSTimer *userInitiatedSyncTimer;
@property (retain, nonatomic) NSTimer *xpcTransactionTimer;
@property (retain, nonatomic) NSTimer *powerLogIdleTimer;
@property (nonatomic) _Bool didLogSyncStart;
@property (weak, nonatomic) DAAccount *account;
@property (nonatomic, readonly) NSArray *queuedTasks;
@property (nonatomic, readonly) NSArray *allTasks;
@property (copy, nonatomic) NSString *powerAssertionGroupID;

- (id)init;
- (void)dealloc;
- (id)user;
- (long long)port;
- (id)password;
- (id)_version;
- (id)server;
- (id)deviceType;
- (id)userAgent;
- (_Bool)useSSL;
- (id)accountPersistentUUID;
- (void)cancelAllTasks;
- (id)initWithAccount:(id)arg1;
- (id)accountID;
- (void)shutdown;
- (_Bool)isShutdown;
- (id)stateString;
- (id)identityPersist;
- (_Bool)shouldCancelTaskDueToOnPowerFetchMode;
- (void)_populateVersionDescriptions;
- (void)submitExclusiveTask:(id)arg1 toFrontOfQueue:(_Bool)arg2;
- (void)_schedulePerformTask:(id)arg1;
- (void)_makeStateTransition;
- (void)_requestCancelTasksWithReason:(int)arg1;
- (void)taskManagerDidAddTask:(id)arg1;
- (void)cancelTask:(id)arg1 withUnderlyingError:(id)arg2;
- (void)cancelTask:(id)arg1;
- (void)_cancelTasksWithReason:(int)arg1;
- (id)_powerLogInfoDictionary;
- (_Bool)_taskForcesNetworking:(id)arg1;
- (_Bool)_taskInQueueForcesNetworkConnection:(id)arg1;
- (void)taskManagerWillRemoveTask:(id)arg1;
- (void)_releasePowerAssertionForTask:(id)arg1;
- (void)_performTask:(id)arg1;
- (void)_startModal:(id)arg1;
- (void)_reactivateHeldTasks;
- (void)_scheduleStartModal:(id)arg1;
- (_Bool)_hasTasksForcingNetworkConnection;
- (void)_useOpportunisticSocketsAgain;
- (_Bool)_hasTasksIndicatingARunningSync;
- (void)_clearUserInitiatedSyncTimer;
- (void)_endXpcTransaction;
- (void)_logSyncEnd;
- (void)cancelTasksDueToOnPowerMode;
- (void)_retainPowerAssertionForTask:(id)arg1;
- (void)_scheduleSelector:(SEL)arg1 withArgument:(id)arg2;
- (_Bool)_useFakeDescriptions;
- (id)OAuth2Token;
- (void)submitExclusiveTask:(id)arg1;
- (void)submitIndependentTask:(id)arg1;
- (void)submitQueuedTask:(id)arg1;
- (void)taskDidFinish:(id)arg1;
- (void)taskRequestModal:(id)arg1;
- (void)taskEndModal:(id)arg1;
- (_Bool)taskIsModal:(id)arg1;

@end
