/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDaemon, HDPeriodicActivity, MAAsset, NSMutableDictionary, NSString, NSURL, _HKMobileAssetDownloadManager;

@protocol OS_dispatch_queue;

@interface HDOntologyAssetManager : NSObject

{
    _HKMobileAssetDownloadManager *_assetDownloadManager;
    NSObject<OS_dispatch_queue> *_downloadManagerCallbackQueue;
    NSObject<OS_dispatch_queue> *_handlerInvocationQueue;
    struct os_unfair_lock_s _ivarLock;
    int _notificationRegistrationToken;
    NSMutableDictionary *_registeredHandlers;
    _Bool _assetDownloadEnabled;
    CDUnknownBlockType _AWDMetricPosterBlock;
    NSURL *_assetFileURL;
    MAAsset *_currentOntologyAsset;
    MAAsset *_latestOntologyAsset;
    long long _simulatedCompatibilityVersion;
    HDPeriodicActivity *_catalogUpdatePeriodicActivity;
    NSMutableDictionary *_completionsByActivityName;
    HDDaemon *_daemon;
}

@property (copy, nonatomic) NSURL *assetFileURL;
@property (retain, nonatomic) MAAsset *currentOntologyAsset;
@property (retain, nonatomic) MAAsset *latestOntologyAsset;
@property (nonatomic) long long simulatedCompatibilityVersion;
@property (nonatomic) _Bool assetDownloadEnabled;
@property (nonatomic, readonly) _HKMobileAssetDownloadManager *assetDownloadManager;
@property (retain, nonatomic) HDPeriodicActivity *catalogUpdatePeriodicActivity;
@property (copy, nonatomic, readonly) NSMutableDictionary *completionsByActivityName;
@property (copy, nonatomic) CDUnknownBlockType AWDMetricPosterBlock;
@property (weak, nonatomic, readonly) HDDaemon *daemon;
@property (nonatomic, readonly) long long assetFileVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)unregisterHandlerForToken:(id)arg1;
- (void)invalidateAndWait;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDaemon:(id)arg1;
- (id)registerAssetAvailabilityHandler:(CDUnknownBlockType)arg1;
- (id)setUserDefaultOverrideAssetFileURL:(id)arg1 error:(id *)arg2;
- (_Bool)clearUserDefaultOverrideAssetFileURLWithError:(id *)arg1;
- (id)_newAssetDownloadManager;
- (id)_userDefaultOverrideAssetFileURL;
- (id)_localFileURLForAsset:(id)arg1;
- (void)_registerNotifyDispatchHandler;
- (void)_lock_schedulePeriodicActivity;
- (long long)_lock_assetAvailability;
- (void)_updateAssetCatalogForReason:(unsigned long long)arg1;
- (void)_lock_unschedulePeriodicActivity;
- (double)_catalogUpdateIntervalOverride;
- (id)_newPeriodicActivityWithName:(id)arg1;
- (void)_downloadManagerCallbackQueue_catalogUpdateDidComplete:(id)arg1;
- (void)_downloadManagerCallbackQueue_catalogUpdateDidFail:(id)arg1;
- (double)_normalIntervalForActivityNamed:(id)arg1;
- (double)_retryIntervalForActivityNamed:(id)arg1;
- (void)_downloadManagerCallbackQueue_assetDownloadDidComplete:(id)arg1;
- (void)_downloadManagerCallbackQueue_assetDownloadDidFail:(id)arg1;
- (long long)_effectiveSystemCompatibilityVersion;
- (void)_lock_invokeCompletionForPeriodicActivityName:(id)arg1 withResult:(long long)arg2 error:(id)arg3;
- (void)_postAWDMetricEventWithAssetDownloadPhase:(int)arg1;
- (id)_bestAssetInArray:(id)arg1;
- (_Bool)_lock_saveContentInfoForAsset:(id)arg1;
- (void)_lock_invokeAvailabilityHandlers;
- (void)_startAssetDownload;
- (_Bool)_ignoreAssetEqualityComparison;
- (id)_lastModifiedDateForFileAtURL:(id)arg1;
- (id)_lock_currentOntologyAssetFileURL;
- (long long)_hoursSinceLastModifiedForFileAtURL:(id)arg1;

@end
