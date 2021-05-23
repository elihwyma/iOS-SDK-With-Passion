/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, NSArray, NSHashTable, NSMutableArray, NSSet, NSString;

@protocol OS_dispatch_queue;

@interface NTKCompanionAppLibrary : NSObject

{
    NSArray *_allApps;
    NSArray *_firstPartyApps;
    NSArray *_watchSystemApps;
    NSSet *_installedSystemApplicationIdentifiers;
    NSArray *_thirdPartyApps;
    NSHashTable *_changeObservers;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_updateProcessingQueue;
    NSObject<OS_dispatch_queue> *_observerCallbackQueue;
    NSObject<OS_dispatch_queue> *_appProcessingQueue;
    struct os_unfair_lock_s *_prewarmLock;
    NSMutableArray *_prewarmCallbacks;
    CLKDevice *_device;
}

@property (retain, nonatomic) NSArray *allApps;
@property (retain, nonatomic) NSArray *firstPartyApps;
@property (retain, nonatomic) NSArray *watchSystemApps;
@property (retain, nonatomic) NSSet *installedSystemApplicationIdentifiers;
@property (retain, nonatomic) NSArray *thirdPartyApps;
@property (retain, nonatomic) NSHashTable *changeObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateProcessingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerCallbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *appProcessingQueue;
@property (nonatomic, readonly) struct os_unfair_lock_s *prewarmLock;
@property (retain, nonatomic) NSMutableArray *prewarmCallbacks;
@property (retain, nonatomic) CLKDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedAppLibrary;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)_load;
- (void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (void)applicationsUpdated:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg1;
- (void)_activeDeviceChanged;
- (_Bool)isRestrictedSystemApp:(id)arg1;
- (_Bool)isRemovedSystemApp:(id)arg1;
- (void)companionAppUpdatedIcon:(id)arg1;
- (void)_loadApps;
- (void)_notifyAppUpdated:(id)arg1;
- (void)_notifyAppIconUpdated:(id)arg1;
- (void)_queue_loadApps;
- (void)_loadWatchApps;
- (void)_notifyAppRemoved:(id)arg1;
- (void)_notifyAppAdded:(id)arg1;
- (void)companionAppWasUpdated:(id)arg1;
- (void)prewarmCompanionDaemonWithCompletion:(CDUnknownBlockType)arg1;

@end
