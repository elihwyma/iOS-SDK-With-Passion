/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface _DKSyncPolicy : NSObject

{
    _Bool _syncDisabled;
    _Bool _alwaysSyncUpAndDown;
    _Bool _pushTriggersSync;
    _Bool _forceSync;
    unsigned long long _assetThresholdInBytes;
    unsigned long long _firstSyncPeriodInDays;
    unsigned long long _maxSyncDownIntervalInDays;
    unsigned long long _minSyncIntervalInSeconds;
    unsigned long long _minSyncsPerDay;
    unsigned long long _maxSyncsPerDay;
    unsigned long long _numChangesTriggeringSync;
    unsigned long long _singleDeviceSyncIntervalInDays;
    NSArray *_streamNamesWithAdditionsTriggeringSync;
    NSArray *_streamNamesWithDeletionsTriggeringSync;
    unsigned long long _syncTimeoutInSeconds;
    unsigned long long _triggeredSyncDelayInSeconds;
    unsigned long long _policyDownloadIntervalInDays;
}

@property (nonatomic) _Bool syncDisabled;
@property (nonatomic) _Bool alwaysSyncUpAndDown;
@property (nonatomic) unsigned long long assetThresholdInBytes;
@property (nonatomic) unsigned long long firstSyncPeriodInDays;
@property (nonatomic) unsigned long long maxSyncDownIntervalInDays;
@property (nonatomic) unsigned long long minSyncIntervalInSeconds;
@property (nonatomic) unsigned long long minSyncsPerDay;
@property (nonatomic) unsigned long long maxSyncsPerDay;
@property (nonatomic) unsigned long long numChangesTriggeringSync;
@property (nonatomic) unsigned long long policyDownloadIntervalInDays;
@property (nonatomic) _Bool pushTriggersSync;
@property (nonatomic) unsigned long long singleDeviceSyncIntervalInDays;
@property (retain, nonatomic) NSArray *streamNamesWithAdditionsTriggeringSync;
@property (retain, nonatomic) NSArray *streamNamesWithDeletionsTriggeringSync;
@property (nonatomic) unsigned long long syncTimeoutInSeconds;
@property (nonatomic) unsigned long long triggeredSyncDelayInSeconds;
@property (nonatomic) _Bool forceSync;

+ (id)userDefaults;
+ (id)policyFromDictionary:(id)arg1;
+ (void)possiblyDownloadSyncPolicyWithPolicyDownloadIntervalInDays:(unsigned long long)arg1;
+ (void)handleDownloadSyncPolicyResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
+ (id)policy;
+ (id)forceSyncPolicy;
+ (id)configurationPlist;
+ (id)syncPolicyConfigPath;

- (id)description;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(_Bool)arg1;
- (id)queryStartDateFromLastDaySyncDates:(id)arg1 lastSyncDate:(id)arg2 isSingleDevice:(_Bool)arg3 isTriggeredSync:(_Bool)arg4;
- (id)initWithSyncDisabled:(id)arg1 alwaysSyncUpAndDown:(id)arg2 assetThresholdInBytes:(id)arg3 firstSyncPeriodInDays:(id)arg4 maxSyncDownIntervalInDays:(id)arg5 minSyncIntervalInSeconds:(id)arg6 minSyncsPerDay:(id)arg7 maxSyncsPerDay:(id)arg8 numChangesTriggeringSync:(id)arg9 policyDownloadIntervalInDays:(id)arg10 pushTriggersSync:(id)arg11 singleDeviceSyncIntervalInDays:(id)arg12 streamNamesWithAdditionsTriggeringSync:(id)arg13 streamNamesWithDeletionsTriggeringSync:(id)arg14 syncTimeoutInSeconds:(id)arg15 triggeredSyncDelayInSeconds:(id)arg16;

@end
