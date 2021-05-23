/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSUserDefaults, PPKVOObserver, _PASLock;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PPSettings : NSObject

{
    NSUserDefaults *_portraitDefaults;
    NSUserDefaults *_canLearnFromAppDefaults;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_initializationComplete;
    PPKVOObserver *_canLearnFromAppKVOObserver;
    PPKVOObserver *_weightKVOObserver;
    PPKVOObserver *_abGroupKVObserver;
    PPKVOObserver *_queryPlanLoggingKVOObserver;
}

@property (nonatomic, getter=isAppConnectionsLocationsEnabled) _Bool appConnectionsLocationsEnabled;

+ (void)initialize;
+ (id)sharedInstance;
+ (void)disableBundleIdentifier:(id)arg1;
+ (void)clearTestSettings;
+ (id)cloudSyncDisabledFirstPartyBundleIds;
+ (_Bool)isVoiceAssistantEnabled;

- (id)init;
- (id)userDefaults;
- (void)_refreshDisabledBundleIds;
- (void)_disableBundleIdentifier:(id)arg1;
- (void)_clearTestSettings;
- (id)abGroupOverride;
- (void)_updateAppConnectionsSettings;
- (void)setEntitiesBackfilledTimestamp:(id)arg1;
- (void)setEntitiesMappingTrieSha256:(id)arg1;
- (_Bool)showLocationsFoundInApps;
- (int)registerDisabledBundleIdentifierChangeHandler:(CDUnknownBlockType)arg1;
- (void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)arg1;
- (void)_invokeChangeHandlersAsync;
- (id)_donationDisabledBundleIds;
- (id)_cloudKitDisabledBundleIds;
- (void)registerCloudKitDisabledBundleIdRewriteHandler;
- (void)registerDisabledBundleIdPurgeHandler;
- (void)rewriteSyncStateForDisabledBundleIdsAsync;
- (void)_purgeRecordsForDisabledBundleIdsAsync;
- (void)_triggerDelayedOperationWithCoalescingToken:(_Atomic int *)arg1 operation:(CDUnknownBlockType)arg2;
- (void)_triggerDelayedBundleIdPurge;
- (void)triggerDelayedCloudSyncRewrite;
- (void)refreshCloudKitDisabledBundleIdsAsync;
- (void)_refreshCloudKitDisabledBundleIds;
- (double)weightMultiplier;
- (id)entitiesBackfilledTimestamp;
- (id)entitiesMappingPreviousTrieSha256;
- (_Bool)bundleIdentifierIsEnabledForDonation:(id)arg1;
- (_Bool)bundleIdentifierIsEnabledForCloudKit:(id)arg1;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)arg1;
- (void)clearAssetMetadataRefreshIntervalSeconds;
- (double)assetMetadataRefreshIntervalSeconds;
- (void)setAssetDefaultBundleOverridePath:(id)arg1 assetIdentifier:(id)arg2;
- (id)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg1;
- (void)setQueryPlanLoggingEnabled:(_Bool)arg1;
- (_Bool)queryPlanLoggingEnabled;
- (void)_updateQueryPlanLogging;
- (int)registerQueryPlanLoggingChangeHandler:(CDUnknownBlockType)arg1;
- (void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)arg1;
- (_Bool)isAuthorizedToLogLocation;

@end
