/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSNumber;

@interface _DKSync3Policy : NSObject

{
    _Bool _syncDisabled;
    _Bool _isSingleDevice;
    _Bool _isOnPower;
    NSDictionary *_properties;
    NSNumber *_version;
    unsigned long long _triggeredSyncDelayInSeconds;
    long long _mask;
    NSArray *_sourceDevices;
    NSArray *_destinationDevices;
    NSArray *_transportPolicies;
    NSArray *_featurePolicies;
}

@property (nonatomic) _Bool syncDisabled;
@property (retain, nonatomic) NSNumber *version;
@property (nonatomic) unsigned long long triggeredSyncDelayInSeconds;
@property (nonatomic) long long mask;
@property (retain, nonatomic) NSArray *sourceDevices;
@property (retain, nonatomic) NSArray *destinationDevices;
@property (nonatomic) _Bool isSingleDevice;
@property (nonatomic) _Bool isOnPower;
@property (retain, nonatomic) NSArray *transportPolicies;
@property (retain, nonatomic) NSArray *featurePolicies;
@property (retain, nonatomic) NSDictionary *properties;

+ (id)policyCache;
+ (id)configurationPlistForFilename:(id)arg1;
+ (id)userDefaults;
+ (void)possiblyDownloadSyncPolicyWithPolicyDownloadIntervalInDays:(unsigned long long)arg1;
+ (id)productVersion;
+ (void)handleDownloadSyncPolicyResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
+ (id)syncPolicyConfigPathForFilename:(id)arg1;
+ (_Bool)cloudSyncDisabled;
+ (_Bool)rapportSyncDisabled;
+ (void)setOkToDownloadPolicyUpdates:(_Bool)arg1;
+ (id)disabledPolicy;
+ (id)computePolicyDictionaryWithDefaultSyncPolicyDict:(id)arg1 syncPolicyOverridesDict:(id)arg2 topLevelDefaultsPolicy:(id)arg3;
+ (void)overrideDictionary:(id)arg1 withOverrides:(id)arg2;
+ (void)addToDictionary:(id)arg1 streamNamesToAlwaysSync:(id)arg2;
+ (id)computedPolicyDictionary;
+ (void)fillPolicyCache:(id)arg1 bySplittingPolicyDictionary:(id)arg2;
+ (void)_possiblyAddToArray:(id)arg1 ifTransport:(long long)arg2 existsInTransports:(long long)arg3;
+ (id)policyForTransports:(long long)arg1 features:(id)arg2 sourceDevices:(id)arg3 destinationDevices:(id)arg4 isSingleDevice:(_Bool)arg5 isOnPower:(_Bool)arg6;
+ (id)localDeviceType;
+ (id)deviceTypeWithHardwareModel:(id)arg1;
+ (void)clearPolicyCache;

- (id)init;
- (id)description;
- (id)streamNamesToSync;
- (_Bool)canDeferSyncOperationWithSyncType:(id)arg1;
- (_Bool)highPriorityForSyncDownWithSyncType:(id)arg1;
- (_Bool)highPriorityForSyncUpWithSyncType:(id)arg1 lastSyncDate:(id)arg2;
- (id)initWithTransports:(long long)arg1 features:(id)arg2 sourceDevices:(id)arg3 destinationDevices:(id)arg4 isSingleDevice:(_Bool)arg5 isOnPower:(_Bool)arg6;
- (id)initWithProperties:(id)arg1 transports:(long long)arg2 sourceDevices:(id)arg3 destinationDevices:(id)arg4 isSingleDevice:(_Bool)arg5 isOnPower:(_Bool)arg6 transportPolicies:(id)arg7 featurePolicies:(id)arg8;
- (_Bool)_anyFeaturePropertyValueWithKey:(id)arg1 getterBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)_minimumPropertyValueWithKey:(id)arg1 policies:(id)arg2 skipZeroValues:(_Bool)arg3;
- (unsigned long long)_maximumPropertyValueWithKey:(id)arg1 policies:(id)arg2 skipZeroValues:(_Bool)arg3;
- (_Bool)canPushTriggerSync;
- (unsigned long long)periodicSyncCadenceInMinutesMaximumValue;
- (unsigned long long)singleDevicePeriodicSyncCadenceInDaysMaximumValue;
- (unsigned long long)maximumSyncsPerDayMaximumValue;
- (double)timeIntervalBetweenSyncs;
- (id)queryStartDateWithSyncType:(id)arg1 streamName:(id)arg2 lastSyncDate:(id)arg3 lastDaySyncCount:(unsigned long long)arg4;
- (double)timeIntervalBetweenSyncsWithUrgency:(unsigned long long)arg1;
- (unsigned long long)singleDevicePeriodicSyncCadenceInDaysMinimumValue;
- (unsigned long long)periodicSyncCadenceInMinutesMinimumValue;
- (unsigned long long)maximumSyncsPerDayMinimumValue;
- (unsigned long long)minimumTimeBetweenSyncsInSecondsMinimumValue;
- (unsigned long long)minimumTimeBetweenSyncsInSecondsMaximumValue;
- (id)enabledFeaturesForSyncType:(id)arg1;
- (_Bool)canPerformSyncOperationWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3;
- (id)queryStartDateWithSyncType:(id)arg1 streamName:(id)arg2 lastSyncDate:(id)arg3 lastDaySyncCount:(unsigned long long)arg4 previousHighWaterMark:(id)arg5;

@end
