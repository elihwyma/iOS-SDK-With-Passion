/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDPeriodicActivity, HDProfile, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDDatabasePruningManager : NSObject

{
    HDPeriodicActivity *_activity;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timerSource;
    unsigned long long _prunedObjectLimit;
    unsigned long long _prunedObjectTransactionLimit;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property unsigned long long prunedObjectLimit;
@property unsigned long long prunedObjectTransactionLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (id)diagnosticDescription;
- (void)daemonReady:(id)arg1;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)pruneDatabaseWithAccessibilityAssertion:(id)arg1 nowDate:(id)arg2 error:(id *)arg3;
- (_Bool)_pruneDatabaseWithNowDate:(id)arg1 error:(id *)arg2;
- (void)_setLastAttemptDate:(id)arg1 completed:(_Bool)arg2;
- (id)_minimumFrozenAnchorMapForPruningDate:(id)arg1 error:(id *)arg2;
- (id)_lastAttemptDateWithCompleted:(_Bool *)arg1;

@end
