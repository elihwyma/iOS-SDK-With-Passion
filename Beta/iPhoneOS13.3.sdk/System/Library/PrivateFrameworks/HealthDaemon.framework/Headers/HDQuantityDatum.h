/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDataCollectorSensorDatum.h>

@class HKQuantity, NSDictionary;

@interface HDQuantityDatum : HDDataCollectorSensorDatum

{
    HKQuantity *_quantity;
    NSDictionary *_metadata;
    CDUnknownBlockType _saveCompletion;
}

@property (copy, nonatomic, readonly) HKQuantity *quantity;
@property (copy, nonatomic, readonly) NSDictionary *metadata;
@property (copy, nonatomic) CDUnknownBlockType saveCompletion;

+ (_Bool)supportsSecureCoding;
+ (id)quantityDataForDifferencesInData:(id)arg1 baseDatum:(id)arg2 unit:(id)arg3 differenceHandler:(CDUnknownBlockType)arg4 intervalHandler:(CDUnknownBlockType)arg5;
+ (id)quantityDatumWithHKQuantityDatum:(id)arg1 metadata:(id)arg2;
+ (id)hdt_quantityDatumForType:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 value:(double)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContext:(id)arg3 quantity:(id)arg4;
- (id)datumForChangeSince:(id)arg1 newIdentifier:(id)arg2 newResumeContext:(id)arg3;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 quantity:(id)arg3 metadata:(id)arg4 resumeContextProvider:(CDUnknownBlockType)arg5;

@end
