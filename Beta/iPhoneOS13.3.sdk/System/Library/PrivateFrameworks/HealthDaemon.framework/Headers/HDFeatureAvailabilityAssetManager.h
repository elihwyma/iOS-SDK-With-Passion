/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDPeriodicActivity, NPSManager, NSString, NSURL, NSUserDefaults, _HKMobileAssetDownloadManager;

@protocol OS_dispatch_queue;

@interface HDFeatureAvailabilityAssetManager : NSObject

{
    NPSManager *_syncManager;
    NSURL *_assetDirectoryOverride;
    double _retryInterval;
    NSObject<OS_dispatch_queue> *_queue;
    _HKMobileAssetDownloadManager *_downloadManager;
    HDPeriodicActivity *_periodicActivity;
    NSUserDefaults *_unitTest_defaults;
    CDUnknownBlockType _unitTest_errorObserver;
}

@property (nonatomic, readonly) NPSManager *syncManager;
@property (nonatomic, readonly) NSURL *assetDirectoryOverride;
@property (nonatomic, readonly) double retryInterval;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) _HKMobileAssetDownloadManager *downloadManager;
@property (retain, nonatomic) HDPeriodicActivity *periodicActivity;
@property (retain, nonatomic) NSUserDefaults *unitTest_defaults;
@property (copy, nonatomic) CDUnknownBlockType unitTest_errorObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithProfile:(id)arg1;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_configureDownloadManager;
- (void)_queue_downloadDidCompleteWithAssets:(id)arg1;
- (void)_queue_downloadDidCompleteWithError:(id)arg1;

@end
