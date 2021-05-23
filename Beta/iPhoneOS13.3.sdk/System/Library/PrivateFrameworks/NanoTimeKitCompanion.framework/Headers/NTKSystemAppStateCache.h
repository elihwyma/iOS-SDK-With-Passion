/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface NTKSystemAppStateCache : NSObject

{
    NSMutableSet *_restrictedSystemApps;
    NSMutableSet *_removedSystemApps;
    NSMutableSet *_cachedAppStateBundleId;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_tinCanBundleID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (_Bool)isRestrictedSystemApp:(id)arg1;
- (_Bool)isRemovedSystemApp:(id)arg1;
- (void)_tinCanSettingsChanged;
- (void)_deviceDidPair;
- (id)_queue_removedSystemApps;
- (id)_queue_restrictedSystemApps;
- (id)_queue_cachedAppStateBundleId;
- (void)_queue_verifyStateForAppBundleId:(id)arg1;
- (void)_queue_applicationsDidChange:(id)arg1 state:(unsigned long long)arg2;
- (void)_queue_tinCanSettingsChanged;
- (void)_queue_deviceDidPair;
- (void)_queue_initializeRemovedSystemApps;
- (void)_queue_initializeRestrictedSystemApps;
- (void)prewarmGizmoDaemon;
- (id)restrictedSystemApps;
- (id)removedSystemApps;

@end
