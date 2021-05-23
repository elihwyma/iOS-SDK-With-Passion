/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString, NSUserDefaults;

@protocol OS_dispatch_queue;

@interface CKBehaviorOptions : NSObject

{
    _Bool _didReadAutomatedDeviceGroup;
    int _mcToken;
    int _ckToken;
    NSMutableDictionary *_cachedPrefs;
    NSObject<OS_dispatch_queue> *_cachedPrefsQueue;
    NSString *_automatedDeviceGroup;
    NSUserDefaults *_automatedDeviceGroupDefaults;
}

@property (retain, nonatomic) NSMutableDictionary *cachedPrefs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cachedPrefsQueue;
@property (nonatomic) int mcToken;
@property (nonatomic) int ckToken;
@property _Bool didReadAutomatedDeviceGroup;
@property (retain, nonatomic) NSString *automatedDeviceGroup;
@property (retain, nonatomic) NSUserDefaults *automatedDeviceGroupDefaults;

+ (id)sharedOptions;

- (void)dealloc;
- (id)_init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)productVersion;
- (id)buildVersion;
- (_Bool)isAppleInternalInstall;
- (_Bool)forceUploadRequestActivitiesToRunImmediately;
- (_Bool)ignoreUploadRequestPushNotifications;
- (id)_behaviorOptionForKey:(id)arg1;
- (void)_startListeningForNotifications;
- (id)_getStringOptionLockedForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_behaviorContainerOptionForKey:(id)arg1;
- (int)_getIntOptionForKey:(id)arg1 defaultValue:(int)arg2;
- (void)_setPref:(id)arg1 forKey:(id)arg2;
- (_Bool)_getBoolOptionForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (double)_getDoubleOptionForKey:(id)arg1 defaultValue:(double)arg2;
- (id)_getStringOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_urlForKey:(id)arg1 defaultURLString:(id)arg2;
- (id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (_Bool)_buildIsOverridden;
- (int)cachedRecordExpiryTime;
- (void)setCachedRecordExpiryTime:(int)arg1;
- (unsigned long long)recordCacheSizeLimit;
- (_Bool)highPriorityURLDelegates;
- (double)operationTimeout;
- (void)setOperationTimeout:(double)arg1;
- (int)trafficLogMaximumDataSize;
- (int)trafficLogQueueWidth;
- (void)setTrafficLogMaximumDataSize:(int)arg1;
- (const char *)CKCtlPrompt;
- (void)setCKCtlPrompt:(char *)arg1;
- (_Bool)CFNetworkLogging;
- (void)setCFNetworkLogging:(_Bool)arg1;
- (_Bool)disableCaching;
- (void)setDisableCaching:(_Bool)arg1;
- (_Bool)shouldProfileSQL;
- (void)setShouldProfileSQL:(_Bool)arg1;
- (_Bool)compressRequests;
- (void)setCompressRequests:(_Bool)arg1;
- (_Bool)useModTimeInAssetCacheEviction;
- (void)setModTimeInAssetCacheEviction:(_Bool)arg1;
- (_Bool)sendDebugHeader;
- (void)setLogTrafficToTextFile:(_Bool)arg1;
- (_Bool)logTrafficToTextFile;
- (void)setLogTraffic:(_Bool)arg1;
- (_Bool)logTraffic;
- (_Bool)pipelineFetchAllChangesRequests;
- (void)setSendDebugHeader:(_Bool)arg1;
- (int)clientThrottleQueueWidth;
- (id)configBaseURL;
- (void)setConfigBaseURL:(id)arg1;
- (id)setupBaseURL;
- (void)setSetupBaseURL:(id)arg1;
- (id)customCloudDBBaseURL;
- (void)setCustomCloudDBBaseURL:(id)arg1;
- (id)customShareServiceBaseURL;
- (void)setCustomShareServiceBaseURL:(id)arg1;
- (id)customDeviceServiceBaseURL;
- (void)setCustomDeviceServiceBaseURL:(id)arg1;
- (id)customCodeServiceBaseURL;
- (void)setCustomCodeServiceBaseURL:(id)arg1;
- (id)customMetricsServiceBaseURL;
- (void)setCustomMetricsServiceBaseURL:(id)arg1;
- (id)primaryAccountEmailOverride;
- (void)setPrimaryAccountEmailOverride:(id)arg1;
- (id)primaryAccountPasswordOverride;
- (void)setPrimaryAccountPasswordOverride:(id)arg1;
- (void)setTestRunIDHeader:(id)arg1;
- (id)testRunIDHeader;
- (id)otherAccountsWithDefaultValue:(id)arg1;
- (_Bool)evictRecentAssets;
- (unsigned long long)assetEvictionGracePeriodWithDefaultValue:(unsigned long long)arg1;
- (unsigned long long)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:(unsigned long long)arg1;
- (unsigned long long)maxPackageDownloadsPerBatchWithDefaultValue:(unsigned long long)arg1;
- (unsigned long long)maxPackageUploadsPerBatchWithDefaultValue:(unsigned long long)arg1;
- (double)packageGCGracePeriod;
- (double)packageGCPeriod;
- (_Bool)sandboxCloudD;
- (unsigned long long)PCSCacheSize;
- (double)PCSCacheMinTime;
- (int)PCSRetryCount;
- (int)longlivedOperationThrottlingRetryCount;
- (int)longlivedOperationMaxRetryCount;
- (void)setOptimisticPCS:(_Bool)arg1;
- (_Bool)optimisticPCS;
- (void)setUseEncryption:(_Bool)arg1;
- (_Bool)useEncryption;
- (void)setUseStingray:(_Bool)arg1;
- (_Bool)useStingray;
- (void)setUsePreauth:(_Bool)arg1;
- (_Bool)usePreauth;
- (_Bool)rollRecordPCSMasterKeys;
- (void)setRollRecordPCSMasterKeys:(_Bool)arg1;
- (_Bool)rollRecordMasterKeysOnUnshare;
- (void)setRollRecordMasterKeysOnUnshare:(_Bool)arg1;
- (_Bool)rollZonePCSIdentities;
- (void)setRollZonePCSIdentities:(_Bool)arg1;
- (_Bool)rollZoneSharingKeys;
- (void)setRollZoneSharingKeys:(_Bool)arg1;
- (_Bool)useEnhancedPCSEncryptionContext;
- (void)setUseEnhancedPCSEncryptionContext:(_Bool)arg1;
- (id)containerIDToForceFatalManateeZoneDecryptionFailure;
- (void)setContainerIDToForceFatalManateeZoneDecryptionFailure:(id)arg1;
- (long long)maxRecordPCSMasterKeyRolls;
- (id)productName;
- (void)setProductName:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setBuildVersion:(id)arg1;
- (long long)flowControlBudget;
- (double)flowControlRegeneration;
- (long long)flowControlBudgetOverride;
- (double)flowControlRegenerationOverride;
- (unsigned long long)maxBatchSize;
- (_Bool)allowExpiredDNSBehavior;
- (_Bool)shouldDecryptRecordsBeforeSave;
- (int)defaultRetryAfter;
- (double)maximumThrottleSeconds;
- (double)maximumQueuedFetchWaitTime;
- (double)maximumWaitAfterFetchRequest;
- (double)publicIdentitiesExpirationTimeout;
- (id)vettedEmailsTestFormat;
- (int)backgroundSessionConnectionPoolLimitWithDefaultValue:(int)arg1;
- (_Bool)enableMMCSMetricsWithDefaultValue:(_Bool)arg1;
- (long long)sqlBatchCount;
- (void)setSqlBatchCount:(long long)arg1;
- (double)sqlBatchTime;
- (void)setSqlBatchTime:(double)arg1;
- (unsigned long long)savedErrorCount;
- (unsigned long long)recentProxiesToSave;
- (double)maxRecentProxyAge;
- (double)shareAcceptorRetrievingDialogDelay;
- (double)shareAcceptorRetrievingDialogMinPeriod;
- (double)minTTRPromptInterval;
- (id)recordNamesForFakingDecryptionFailure;
- (void)setIgnoreUploadRequestPushNotifications:(_Bool)arg1;
- (void)setForceUploadRequestActivitiesToRunImmediately:(_Bool)arg1;
- (id)deviceCountOverride;
- (void)setDeviceCountOverride:(id)arg1;

@end
