/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKSampleType, NSDate;

@interface HKSample : HKObject <Swift>

{
    HKSampleType *_sampleType;
    double _startTimestamp;
    double _endTimestamp;
}

@property (nonatomic, getter=_startTimestamp, setter=_setStartTimestamp:) double startTimestamp;
@property (nonatomic, getter=_endTimestamp, setter=_setEndTimestamp:) double endTimestamp;
@property (copy, readonly) HKSampleType *sampleType;
@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;

+ (_Bool)supportsSecureCoding;
+ (_Bool)supportsEquivalence;
+ (id)_newSampleWithType:(id)arg1 startDate:(double)arg2 endDate:(double)arg3 device:(id)arg4 metadata:(id)arg5 config:(CDUnknownBlockType)arg6;
+ (id)_newSampleFromDatesWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 config:(CDUnknownBlockType)arg6;
+ (id)_enumerateValidIntervalsWithStartDate:(id)arg1 endDate:(id)arg2 sampleType:(id)arg3 block:(CDUnknownBlockType)arg4;
+ (id)_sampleWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(double)arg4 sampleType:(id)arg5 startDate:(double)arg6 endDate:(double)arg7;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)valueForKey:(id)arg1;
- (void)_setType:(id)arg1;
- (void)_setStartDate:(id)arg1;
- (void)_setEndDate:(id)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (long long)_externalSyncObjectCode;
- (_Bool)_requiresPrivateEntitlementForQueries;
- (void)_enumerateTimePeriodsWithBlock:(CDUnknownBlockType)arg1;
- (void)_setSampleType:(id)arg1;

@end
