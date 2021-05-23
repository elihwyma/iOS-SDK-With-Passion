/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface _DKSync3TransportPolicy : NSObject

{
    _Bool _isSyncDisabled;
    NSDictionary *_properties;
    NSString *_name;
    NSString *_transport;
    unsigned long long _maximumSyncsPerDay;
    unsigned long long _syncBatchSizeInEvents;
    unsigned long long _maximumBatchesPerSync;
    unsigned long long _minimumSyncWindowInSeconds;
    unsigned long long _minimumTimeBetweenSyncsInSeconds;
    unsigned long long _singleDevicePeriodicSyncCadenceInDays;
    unsigned long long _additionsBucketCountTriggeringSync;
    unsigned long long _deletionsBucketCountTriggeringSync;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) _Bool isSyncDisabled;
@property (retain, nonatomic) NSString *transport;
@property (nonatomic) unsigned long long maximumSyncsPerDay;
@property (nonatomic) unsigned long long syncBatchSizeInEvents;
@property (nonatomic) unsigned long long maximumBatchesPerSync;
@property (nonatomic) unsigned long long minimumSyncWindowInSeconds;
@property (nonatomic) unsigned long long minimumTimeBetweenSyncsInSeconds;
@property (nonatomic) unsigned long long singleDevicePeriodicSyncCadenceInDays;
@property (nonatomic) unsigned long long additionsBucketCountTriggeringSync;
@property (nonatomic) unsigned long long deletionsBucketCountTriggeringSync;
@property (retain, nonatomic) NSDictionary *properties;

+ (id)policyForSyncTransportType:(long long)arg1;

- (id)init;
- (id)description;
- (id)initWithName:(id)arg1 properties:(id)arg2;

@end
