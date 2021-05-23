/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@class NSArray, NSDate;

@interface HDHeartRateMeasurement : HDHealthServiceCharacteristic

{
    _Bool _hasEnergyExpended;
    _Bool _hasSensorContact;
    _Bool _sensorContact;
    long long _heartRateValue;
    long long _energyExpended;
    NSArray *_rrIntervals;
}

@property (nonatomic, readonly) NSDate *updateTime;
@property (nonatomic) long long heartRateValue;
@property (nonatomic) _Bool hasEnergyExpended;
@property (nonatomic) long long energyExpended;
@property (nonatomic) _Bool hasSensorContact;
@property (nonatomic) _Bool sensorContact;
@property (retain, nonatomic) NSArray *rrIntervals;
@property (nonatomic, readonly) unsigned long long derivedContactStatus;

+ (id)uuid;
+ (id)_buildWithBinaryValue:(id)arg1 error:(id *)arg2;

- (id)description;
- (id)generateDatums:(id)arg1;

@end
