/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <ATConcreteService.h>

@class ATDevicePairedSyncManager, ATDeviceSettings, ATDeviceSyncManager, ATEnvironmentMonitor, ATEventScheduler, ATIDSService, ATLegacyDeviceSyncManager, ATLockdownListener, ATNetServiceListener, ATServiceProxyListener, ATStatusObserverListener, ATXPCListener, MSVXPCTransaction, NSMapTable, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface ATDeviceService : ATConcreteService

{
    ATLockdownListener *_lockdownListener;
    ATLockdownListener *_legacyLockdownListener;
    ATNetServiceListener *_netServiceListener;
    ATDevicePairedSyncManager *_pairedSyncManager;
    ATIDSService *_idsService;
    ATXPCListener *_xpcListener;
    ATServiceProxyListener *_proxyListener;
    NSMapTable *_messageLinkProxyListeners;
    ATStatusObserverListener *_statusObserverListener;
    ATDeviceSyncManager *_deviceSyncManager;
    ATLegacyDeviceSyncManager *_legacyDeviceSyncManager;
    ATDeviceSettings *_settings;
    ATEventScheduler *_eventScheduler;
    ATEnvironmentMonitor *_environmentMonitor;
    MSVXPCTransaction *_xpcTransaction;
    int _atcRunningToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)run;
- (_Bool)stop;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)environmentMonitorDidChangePower:(id)arg1;
- (void)messageLinkWasClosed:(id)arg1;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (void)restoreFromDeviceWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestSyncForLibrary:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestSyncForPairedDeviceWithPriority:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestKeybagSyncToPairedDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerForStatusOfDataclasses:(id)arg1 enabled:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)cancelSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)prioritizeAsset:(id)arg1 forDataclass:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)prioritizeAsset:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)cancelAssetTransferForFailedAsset:(id)arg1;
- (void)purgePartialAsset:(id)arg1 forDataclass:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)clearSyncDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)lowBatteryNotificationWithCompletion:(CDUnknownBlockType)arg1;
- (void)keepATCAlive:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getSyncStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)openDeviceMessageLinkWithPriority:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getAssetMetricswithCompletion:(CDUnknownBlockType)arg1;
- (void)getDataRestoreIsCompleteWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncChangesForDataClass:(id)arg1 withPriority:(int)arg2;
- (void)initiateAssetDownloadSessionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)addMessageLink:(id)arg1;
- (void)removeMessageLink:(id)arg1;
- (void)idsServiceDevicesDidChange:(id)arg1;
- (void)listener:(id)arg1 didReceiveMessageLinkRequest:(id)arg2;
- (void)_scheduleNewSyncIfNeeded;
- (void)_removeObserversFromMessageLink:(id)arg1;
- (void)_addObserversToMessageLink:(id)arg1;
- (void)_requestSyncForLibrary:(id)arg1 onMessageLink:(id)arg2;
- (id)_deviceMessageLink;
- (void)_cancelSyncForMessageLink:(id)arg1;
- (void)handleDataMigrationFinished;
- (void)syncClient:(id)arg1 hasChangesWithPriority:(int)arg2;
- (id)proxyListenerForMessageLink:(id)arg1;
- (id)allMessageLinkProxyListeners;

@end
