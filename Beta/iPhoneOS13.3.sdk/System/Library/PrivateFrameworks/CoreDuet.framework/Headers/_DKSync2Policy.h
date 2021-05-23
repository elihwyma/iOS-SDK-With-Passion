/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface _DKSync2Policy : NSObject

{
    _Bool _syncDisabled;
    _Bool _pushTriggersSync;
    _Bool _requireCharging;
    NSString *_name;
    NSNumber *_version;
    unsigned long long _maxSyncPeriodInDays;
    unsigned long long _maxSyncDownIntervalInDays;
    unsigned long long _minSyncIntervalInSeconds;
    unsigned long long _minSyncWindowInSeconds;
    unsigned long long _minSyncsPerDay;
    unsigned long long _maxSyncsPerDay;
    unsigned long long _numChangesTriggeringSync;
    unsigned long long _singleDeviceSyncIntervalInDays;
    NSDictionary *_streamNamesToSync;
    NSArray *_streamNamesWithAdditionsTriggeringSync;
    NSArray *_streamNamesWithDeletionsTriggeringSync;
    unsigned long long _syncBatchSizeInEvents;
    unsigned long long _maxBatchesPerSync;
    unsigned long long _syncTimeoutInSeconds;
    unsigned long long _triggeredSyncDelayInSeconds;
    unsigned long long _policyDownloadIntervalInDays;
    NSArray *_streamNamesToAlwaysSync;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *version;
@property (nonatomic) _Bool syncDisabled;
@property (nonatomic) unsigned long long maxSyncPeriodInDays;
@property (nonatomic) unsigned long long maxSyncDownIntervalInDays;
@property (nonatomic) unsigned long long minSyncIntervalInSeconds;
@property (nonatomic) unsigned long long minSyncWindowInSeconds;
@property (nonatomic) unsigned long long minSyncsPerDay;
@property (nonatomic) unsigned long long maxSyncsPerDay;
@property (nonatomic) unsigned long long numChangesTriggeringSync;
@property (nonatomic) unsigned long long policyDownloadIntervalInDays;
@property (nonatomic) _Bool pushTriggersSync;
@property (nonatomic) _Bool requireCharging;
@property (nonatomic) unsigned long long singleDeviceSyncIntervalInDays;
@property (retain, nonatomic) NSDictionary *streamNamesToSync;
@property (retain, nonatomic) NSArray *streamNamesToAlwaysSync;
@property (retain, nonatomic) NSArray *streamNamesWithAdditionsTriggeringSync;
@property (retain, nonatomic) NSArray *streamNamesWithDeletionsTriggeringSync;
@property (nonatomic) unsigned long long syncBatchSizeInEvents;
@property (nonatomic) unsigned long long maxBatchesPerSync;
@property (nonatomic) unsigned long long syncTimeoutInSeconds;
@property (nonatomic) unsigned long long triggeredSyncDelayInSeconds;

+ (id)policyCache;
+ (id)_policyForSyncTransportType:(long long)arg1;
+ (id)configurationPlistForFilename:(id)arg1;
+ (id)userDefaults;
+ (id)policyFromDictionary:(id)arg1;
+ (void)possiblyDownloadSyncPolicyWithPolicyDownloadIntervalInDays:(unsigned long long)arg1;
+ (id)productVersion;
+ (void)handleDownloadSyncPolicyResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
+ (id)syncPolicyConfigPathForFilename:(id)arg1;
+ (id)disabledFeaturesForSyncType:(id)arg1 transports:(long long)arg2;
+ (_Bool)cloudSyncDisabled;
+ (_Bool)rapportSyncDisabled;
+ (id)policyForSyncTransportType:(long long)arg1;
+ (void)setOkToDownloadPolicyUpdates:(_Bool)arg1;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)streamNamesToSyncWithDisabledFeatures:(id)arg1;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(_Bool)arg1;
- (id)queryStartDateWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(_Bool)arg1 urgency:(unsigned long long)arg2;
- (id)streamNamesToSyncWithSyncType:(id)arg1 transportType:(long long)arg2;
- (_Bool)canDeferSyncOperationWithSyncType:(id)arg1;
- (_Bool)canPerformSyncOperationWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3 isCharging:(_Bool)arg4;
- (_Bool)highPriorityForSyncDownWithSyncType:(id)arg1;
- (_Bool)highPriorityForSyncUpWithSyncType:(id)arg1 lastSyncDate:(id)arg2;
- (id)queryStartDateWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3 previousHighWaterMark:(id)arg4;
- (id)queryStartDateWithSyncType:(id)arg1 previousHighWaterMark:(id)arg2;

@end
