/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <AirTrafficDevice/ATDeviceSyncSessionTask.h>

@class ATAssetLinkController, ATThroughputCalculator, NSDictionary, NSMapTable, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject, NSString;

@protocol ATAssetClient, OS_dispatch_queue;

@interface ATDeviceSyncSessionAssetTask : ATDeviceSyncSessionTask

{
    id <ATAssetClient> _assetClient;
    NSMutableOrderedSet *_clientAssetsRemaining;
    NSMutableOrderedSet *_clientAssetsInProgress;
    NSMutableOrderedSet *_serverAssetsInProgress;
    ATAssetLinkController *_assetController;
    NSMutableDictionary *_detailedProgress;
    NSMutableDictionary *_syncProgresByAssetType;
    NSDictionary *_installedAssetMetrics;
    NSDictionary *_itemsWithEstimatedFileSize;
    NSMutableSet *_assetStreams;
    _Bool _addedTransportUpgradeException;
    double _taskStartTime;
    unsigned long long _totalAssetSize;
    ATThroughputCalculator *_throughputCalculator;
    NSMapTable *_assetToBytesMap;
    _Bool _requestsComplete;
    _Bool _peerRequestsComplete;
    _Bool _deviceShouldReportSyncProgress;
    NSMutableDictionary *_progressMap;
    unsigned long long _successfullyCompletedItemCount;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)start;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (id)sessionGroupingKey;
- (void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2;
- (id)initWithDataClass:(id)arg1 onMessageLink:(id)arg2;
- (void)updateProgressWithCount:(unsigned long long)arg1 totalItemCount:(unsigned long long)arg2;
- (void)_finishTaskWithError:(id)arg1;
- (void)_shouldDeviceReportSyncProgress;
- (void)_assetRequestsCompletedWithError:(id)arg1;
- (id)_serializedAssetRequestsFromRequestDictionary:(id)arg1;
- (void)_handleBeginAssetTaskRequest:(id)arg1 onMessagLink:(id)arg2;
- (void)_handleEndAssetTaskRequest:(id)arg1 onMessagLink:(id)arg2;
- (void)_handleAssetRequest:(id)arg1 onMessagLink:(id)arg2;
- (void)_handleUpdateSessionTaskRequest:(id)arg1 onMessageLink:(id)arg2;
- (void)_handleInstalledAssetMetricsChanged:(id)arg1 onMessageLink:(id)arg2;
- (void)_handleAssetDownloadProgressed:(id)arg1 onMessageLink:(id)arg2;
- (void)_updateDetailedProgressForCompletedAsset:(id)arg1;
- (void)_updateProperties;
- (void)_updateTaskDescription;
- (void)_updateProgressWithBytesTransferred:(unsigned long long)arg1 forAsset:(id)arg2;
- (id)_serializedAssetSyncProgressFromAssetCacheDictionary:(id)arg1;
- (id)_getRawInstalledAssetMetricsFromAssetClient;
- (void)_updateCachedInstalledAssetMetricsWithNewMetrics:(id)arg1;
- (id)_prepareInstalledAssetMetricsWithSerializedOutputFromClientMetrics:(id)arg1;
- (id)_serializedAssetsToDownloadDictionaryWithUpdatedProgressFromDownloadDictionary:(id)arg1;
- (id)_serializedDownloadedAssetsDictionaryFromDownloadedAssetsDictionary:(id)arg1;
- (id)_getMetricsWithCurrentProgressForInflightAssetsFromAssetMetrics:(id)arg1;
- (void)_sendUpdatedInstallMetrics;
- (void)_loadInstalledAssetMetricsFromSyncClient;
- (unsigned long long)_bytesDownloadedForAsset:(id)arg1;
- (void)_removeAssetFromProgressMap:(id)arg1;
- (id)_updateProgressAndGetFileProgressParamsForAsset:(id)arg1;

@end
