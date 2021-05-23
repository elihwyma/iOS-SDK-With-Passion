/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class ASDNotificationCenter, ASDServiceBroker, NRDevice, NSMutableDictionary, NSPredicate, NSString;

@protocol ASDAppQueryResultsObserver, OS_dispatch_queue;

@interface ASDAppQuery : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _hasRunOnce;
    ASDNotificationCenter *_notificationCenter;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id <ASDAppQueryResultsObserver> _observer;
    NSMutableDictionary *_resultCache;
    ASDServiceBroker *_serviceBroker;
    NRDevice *_device;
    NSPredicate *_predicate;
}

@property (readonly) NSPredicate *predicate;
@property (weak) id <ASDAppQueryResultsObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)queryForSystemAppsOnPairedDevice:(id)arg1;
+ (void)_executeQueryWithPredicate:(id)arg1 onPairedDevice:(id)arg2 usingServiceBroker:(id)arg3 withResultHandler:(CDUnknownBlockType)arg4;
+ (id)_newProgressForApp:(id)arg1 fromRemoteProgress:(id)arg2 usingServiceBroker:(id)arg3;
+ (id)queryForBeagleApps;
+ (id)queryForBetaApps;
+ (id)queryForBundleIDs:(id)arg1;
+ (id)queryForBundleAtPath:(id)arg1;
+ (id)queryDefaultPairedWatchForBetaApps;
+ (id)queryForBetaAppsOnPairedDevice:(id)arg1;
+ (id)queryForStoreApps;
+ (id)queryForStoreItemIDs:(id)arg1;
+ (id)queryWithPredicate:(id)arg1;
+ (id)queryWithPredicate:(id)arg1 onPairedDevice:(id)arg2;
+ (void)anyWithPredicate:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;

- (id)init;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1;
- (void)executeQueryWithResultHandler:(CDUnknownBlockType)arg1;
- (id)initWithPredicate:(id)arg1 onPairedDevice:(id)arg2;
- (id)initWithPredicate:(id)arg1 serviceBroker:(id)arg2 notificationCenter:(id)arg3;
- (id)initWithPredicate:(id)arg1 onPairedDevice:(id)arg2 serviceBroker:(id)arg3 notificationCenter:(id)arg4;
- (void)_handleBrokerConnectionNotification:(id)arg1;
- (id)_replaceCachedResultsWithResults:(id)arg1;
- (void)_handleNotificationRegisteredWithUserInfo:(id)arg1;
- (void)_handleNotificationUnregisteredWithUserInfo:(id)arg1;
- (void)_handleNotificationRefreshWithUserInfo:(id)arg1;
- (void)_updateCachedResultsWithResults:(id)arg1;
- (void)_sendResultsChangedWithResults:(id)arg1;
- (id)_removeCachedResultsForBundleIDs:(id)arg1;
- (void)_handleAppsUpdatedWithResults:(id)arg1;
- (void)_handleAppsRemovedWithBundleIDs:(id)arg1;
- (void)_handleAppsReplacedWithResults:(id)arg1;
- (void)notificationCenter:(id)arg1 receivedNotifications:(id)arg2;
- (void)notificationCenter:(id)arg1 receivedProgress:(id)arg2;
- (void)_unitTest_setHasRunOnce:(_Bool)arg1;

@end
