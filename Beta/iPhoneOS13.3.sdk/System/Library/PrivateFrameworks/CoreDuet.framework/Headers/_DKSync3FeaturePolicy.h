/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface _DKSync3FeaturePolicy : NSObject

{
    _Bool _isSyncDisabled;
    _Bool _onlyMultiDevice;
    _Bool _onlySingleDevice;
    _Bool _requiresCharging;
    _Bool _pushTriggersSync;
    _Bool _additionsCountTowardTriggeredSyncBucket;
    _Bool _deletionsCountTowardTriggeredSyncBucket;
    _Bool _additionTriggersImmediateSync;
    _Bool _deletionTriggersImmediateSync;
    NSDictionary *_properties;
    NSString *_name;
    NSString *_feature;
    NSArray *_streamNames;
    NSArray *_sources;
    NSArray *_destinations;
    NSString *_transport;
    unsigned long long _periodicSyncCadenceInMinutes;
    unsigned long long _oldestEventToSyncInDays;
    NSArray *_requiresCompanions;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) _Bool isSyncDisabled;
@property (retain, nonatomic) NSString *feature;
@property (retain, nonatomic) NSArray *streamNames;
@property (retain, nonatomic) NSArray *sources;
@property (retain, nonatomic) NSArray *destinations;
@property (retain, nonatomic) NSString *transport;
@property (nonatomic) unsigned long long periodicSyncCadenceInMinutes;
@property (nonatomic) unsigned long long oldestEventToSyncInDays;
@property (nonatomic) _Bool onlyMultiDevice;
@property (nonatomic) _Bool onlySingleDevice;
@property (nonatomic) _Bool requiresCharging;
@property (retain, nonatomic) NSArray *requiresCompanions;
@property (nonatomic) _Bool pushTriggersSync;
@property (nonatomic) _Bool additionsCountTowardTriggeredSyncBucket;
@property (nonatomic) _Bool deletionsCountTowardTriggeredSyncBucket;
@property (nonatomic) _Bool additionTriggersImmediateSync;
@property (nonatomic) _Bool deletionTriggersImmediateSync;
@property (retain, nonatomic) NSDictionary *properties;

+ (id)policyForFeature:(id)arg1;

- (id)init;
- (id)description;
- (id)initWithName:(id)arg1 properties:(id)arg2;

@end
