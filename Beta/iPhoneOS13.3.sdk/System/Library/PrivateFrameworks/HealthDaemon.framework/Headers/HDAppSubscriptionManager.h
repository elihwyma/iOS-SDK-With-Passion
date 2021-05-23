/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAppAssertionManager, HDBackgroundTaskScheduler, HDProfile, NSMutableDictionary, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface HDAppSubscriptionManager : NSObject

{
    _Bool _shouldScheduleLaunches;
    int _backgroundAppRefreshNotifyToken;
    HDProfile *_profile;
    HDAppAssertionManager *_appAssertionManager;
    HDBackgroundTaskScheduler *_backgroundTaskScheduler;
    NSObject<OS_dispatch_queue> *_launchQueue;
    NSMutableDictionary *_pendingTypeCodesToAnchors;
    NSMutableSet *_pendingFirstLaunchBundleIdentifiers;
    NSMutableDictionary *_launchTimers;
    NSMutableDictionary *_launchTimerLaunchTimes;
    NSObject<OS_dispatch_queue> *_launchTimerQueue;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDAppAssertionManager *appAssertionManager;
@property (retain, nonatomic) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *launchQueue;
@property (retain, nonatomic) NSMutableDictionary *pendingTypeCodesToAnchors;
@property (retain, nonatomic) NSMutableSet *pendingFirstLaunchBundleIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *launchTimers;
@property (retain, nonatomic) NSMutableDictionary *launchTimerLaunchTimes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *launchTimerQueue;
@property (nonatomic) int backgroundAppRefreshNotifyToken;
@property (nonatomic) _Bool shouldScheduleLaunches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)_applicationsInstalled:(id)arg1;
- (void)_backgroundTaskFiredWithName:(id)arg1;
- (void)_queue_scheduleLaunches:(long long)arg1 anchor:(id)arg2;
- (id)_queue_subscriptionForActivityName:(id)arg1 anchor:(id *)arg2;
- (void)_queue_launchSubscription:(id)arg1 anchor:(id)arg2;
- (void)updateBundleID:(id)arg1 dataCode:(long long)arg2 launchTime:(id)arg3;
- (id)_activityNameForSubscription:(id)arg1 anchor:(id)arg2;
- (_Bool)areSubscriptionsSupportedForDataTypeCode:(long long)arg1;
- (id)_appSubscriptionsForDataTypeCode:(long long)arg1 lastAppLaunchTimes:(id)arg2 error:(id *)arg3;
- (void)_queue_scheduleLaunchForSubscription:(id)arg1 anchor:(id)arg2;
- (void)_launchTimerFired:(id)arg1 code:(id)arg2 anchor:(id)arg3;
- (void)_removeLaunchForSubscription:(id)arg1 anchor:(id)arg2;
- (_Bool)_shouldDoAFirstLaunchForBundleIdentifier:(id)arg1;
- (void)_queue_updateBundleID:(id)arg1 dataCode:(long long)arg2 launchTime:(id)arg3;
- (void)_removeSubscriptionForBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3;
- (void)_removeBundleID:(id)arg1;
- (void)_queue_subscribeForBundleID:(id)arg1 dataCode:(long long)arg2 frequencyInSeconds:(unsigned long long)arg3;
- (void)_queue_ackForBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 ackTime:(id)arg4;
- (void)removeSubscriptionForBundleID:(id)arg1 dataCode:(long long)arg2;
- (void)removeBundleID:(id)arg1;
- (void)subscribeForBundleID:(id)arg1 dataCode:(long long)arg2 frequencyInSeconds:(unsigned long long)arg3;
- (void)setAnchor:(id)arg1 forDataCode:(long long)arg2;
- (void)ackForBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 ackTime:(id)arg4;
- (void)unitTesting_synchronizeWithQueue;

@end
