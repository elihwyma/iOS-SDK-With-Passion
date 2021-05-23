/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <AirTrafficDevice/ATDeviceSyncManager.h>

@class ATAsset, ATClientController, ATDeviceDiskUsageProvider, ATLegacyAssetLink, ATLegacyMessageLink, ATSession, ATUserDefaults, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface ATLegacyDeviceSyncManager : ATDeviceSyncManager

{
    ATUserDefaults *_defaults;
    ATClientController *_clientController;
    ATDeviceDiskUsageProvider *_diskUsageProvider;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_messageLinks;
    ATLegacyMessageLink *_currentMessageLink;
    ATLegacyAssetLink *_assetLink;
    NSMutableArray *_dataclasses;
    unsigned int _grappaId;
    NSDate *_startTime;
    _Bool _localSyncRequestCanceled;
    _Bool _localSyncRequest;
    _Bool _automaticSync;
    CDUnknownBlockType _clientProgressCallback;
    NSMutableDictionary *_dataclassTimers;
    unsigned int _currentStage;
    NSString *_currentDataclass;
    NSString *_currentStatus;
    ATAsset *_currentAsset;
    double _currentSyncProgress;
    double _currentOverallProgress;
    struct CacheDeleteToken *_cacheDeleteToken;
    ATSession *_syncSession;
    NSDictionary *_currentSyncHostInfo;
}

@property (retain, nonatomic) ATSession *syncSession;
@property (copy, nonatomic) NSDictionary *currentSyncHostInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)legacyDeviceSyncManager;

- (id)init;
- (void)_reset;
- (void)environmentMonitorDidChangePower:(id)arg1;
- (void)messageLinkWasOpened:(id)arg1;
- (void)messageLinkWasInitialized:(id)arg1;
- (void)messageLinkWasClosed:(id)arg1;
- (void)sessionWillBegin:(id)arg1;
- (void)session:(id)arg1 didUpdateSessionTask:(id)arg2;
- (void)session:(id)arg1 willBeginSessionTask:(id)arg2;
- (void)session:(id)arg1 didBeginSessionTask:(id)arg2;
- (void)sessionDidFinish:(id)arg1;
- (void)cancelSyncOnMessageLink:(id)arg1;
- (id)currentSyncState;
- (void)initiateSyncForLibrary:(id)arg1 onMessageLink:(id)arg2;
- (void)assetLink:(id)arg1 didUpdateOverallProgress:(double)arg2;
- (void)_sendSyncAllowed;
- (_Bool)_currentLinkIsWifiConnection;
- (void)_handleCapabilitiesMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleHostInfoMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleRequestingSyncMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleSyncFailedMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleFinishedSyncingMetadataMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleAssetMetricsMessage:(id)arg1 fromLink:(id)arg2;
- (void)_handleSyncStatusMessage:(id)arg1 fromLink:(id)arg2;
- (void)_sendInstalledAssets;
- (void)_sendDiskUsageForDataClasses:(id)arg1 updateFirst:(_Bool)arg2;
- (void)_reportLocalProgress;
- (id)_currentHostType;
- (void)_cancelExistingSyncSession;
- (void)_reconcileSyncWithMessage:(id)arg1;

@end
