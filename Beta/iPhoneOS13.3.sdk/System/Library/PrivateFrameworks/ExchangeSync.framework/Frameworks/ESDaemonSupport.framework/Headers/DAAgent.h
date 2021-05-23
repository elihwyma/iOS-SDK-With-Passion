/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
 */

#import <Foundation/NSObject.h>

@class DAAccount, DATrustHandler;

@interface DAAgent : NSObject

{
    _Bool _isMonitoring;
    _Bool _syncWhenReachable;
    _Bool _isWaitingForPassword;
    DAAccount *_account;
    double _lastRetryTimeout;
    CDUnknownBlockType _networkReachableBlock;
}

@property (retain, nonatomic) DAAccount *account;
@property (nonatomic) double lastRetryTimeout;
@property (nonatomic) _Bool syncWhenReachable;
@property (copy, nonatomic) CDUnknownBlockType networkReachableBlock;
@property (nonatomic) _Bool isWaitingForPassword;
@property (nonatomic) _Bool isMonitoring;
@property (nonatomic, readonly) DATrustHandler *trustHandler;

- (id)initWithAccount:(id)arg1;
- (void)startMonitoring;
- (void)shutdown;
- (void)_reachabilityChanged:(id)arg1;
- (id)stateString;
- (void)saveXpcActivity:(id)arg1;
- (int)preferredEventDaysToSync;
- (int)preferredToDoDaysToSync;
- (void)observeReachabilityWithBlock:(CDUnknownBlockType)arg1;
- (void)stopObservingReachability;
- (void)requestAgentStopMonitoringWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)refreshFolderListRequireChangedFolders:(_Bool)arg1 isUserRequested:(_Bool)arg2;
- (void)syncFolderIDs:(id)arg1 forDataclasses:(long long)arg2 isUserRequested:(_Bool)arg3;
- (void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (id)getDAAccount;

@end
