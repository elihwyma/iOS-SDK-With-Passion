/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor, HDDaemon, NSHashTable, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface HDProcessStateManager : NSObject

{
    HDDaemon *_daemon;
    NSMutableDictionary *_processObserversByBundleID;
    NSHashTable *_foregroundClientProcessObservers;
    BKSApplicationStateMonitor *_applicationMonitor;
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    NSMutableDictionary *_processInfoByBundleID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bundleVersionStringForProcessIdentifier:(int)arg1;
+ (_Bool)applicationIsForeground:(id)arg1;
+ (int)processIdentifierForApplicationIdentifier:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithDaemon:(id)arg1;
- (_Bool)registerObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (unsigned int)applicationStateForBundleIdentifier:(id)arg1;
- (void)unregisterObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)registerForegroundClientProcessObserver:(id)arg1;
- (id)bundleVersionStringForProcessIdentifier:(int)arg1;
- (void)unregisterForegroundClientProcessObserver:(id)arg1;
- (_Bool)_lock_registerObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_lock_unregisterObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (_Bool)applicationIsForeground:(id)arg1;
- (int)processIdentifierForApplicationIdentifier:(id)arg1;
- (void)_lock_handleBackboardApplicationInfoChanged:(id)arg1;
- (void)_handleBackboardApplicationInfoChanged:(id)arg1;
- (void)_lock_handleProcessInfoChangedWithAllPreviousProcessInfos:(id)arg1;
- (void)_lock_notifyObserversProcessWithBundleIdentifier:(id)arg1 processIdentifier:(int)arg2 applicationStateChanged:(unsigned int)arg3 previousApplicationState:(unsigned int)arg4;
- (_Bool)isApplicationStateSuspendedForBundleIdentifier:(id)arg1;
- (_Bool)isApplicationStateForegroundForBundleIdentifier:(id)arg1;

@end
