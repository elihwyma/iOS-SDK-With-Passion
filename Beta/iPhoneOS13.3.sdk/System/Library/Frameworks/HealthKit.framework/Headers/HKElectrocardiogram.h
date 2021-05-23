/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSample.h>

@class HKQuantity, NSArray, NSString;

@interface HKElectrocardiogram : HKSample

{
    struct Electrocardiogram _reading;
}

@property (nonatomic, readonly, getter=_averageHeartRate) HKQuantity *averageHeartRate;
@property (nonatomic, readonly, getter=_classification) unsigned long long classification;
@property (nonatomic, readonly, getter=_symptoms) unsigned long long symptoms;
@property (nonatomic, readonly, getter=_localizedClassification) NSString *localizedClassification;
@property (nonatomic, readonly, getter=_localizedSymptoms) NSArray *localizedSymptoms;
@property (nonatomic, readonly) NSArray *leadNames;
@property (nonatomic, readonly) long long numberOfValues;
@property (nonatomic, readonly) HKQuantity *frequency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isConcreteObjectClass;
+ (id)_electrocardiogramWithStartDate:(id)arg1 device:(id)arg2 metadata:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)payload;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (_Bool)prepareForSaving:(id *)arg1;
- (void)_setPayload:(id)arg1;
- (void)setReading:(struct Electrocardiogram)arg1;
- (void)_enumerateDataForLead:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateDataForLead:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;

@end
