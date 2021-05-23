/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDFitnessMachineDataCharacteristicBase.h>

@class HDFitnessMachineCharacteristicDoubleField, HDFitnessMachineCharacteristicInt16Field, HDFitnessMachineCharacteristicUInt16Field, HDFitnessMachineCharacteristicUInt24Field, HDFitnessMachineCharacteristicUInt8Field, NSDate;

@interface HDIndoorBikeData : HDFitnessMachineDataCharacteristicBase

{
    HDFitnessMachineCharacteristicDoubleField *_instantaneousSpeedField;
    HDFitnessMachineCharacteristicDoubleField *_averageSpeedField;
    HDFitnessMachineCharacteristicDoubleField *_instantaneousCadenceField;
    HDFitnessMachineCharacteristicDoubleField *_averageCadenceField;
    HDFitnessMachineCharacteristicUInt24Field *_totalDistanceField;
    HDFitnessMachineCharacteristicInt16Field *_resistanceLevelField;
    HDFitnessMachineCharacteristicInt16Field *_instantaneousPowerField;
    HDFitnessMachineCharacteristicInt16Field *_averagePowerField;
    HDFitnessMachineCharacteristicUInt16Field *_totalEnergyField;
    HDFitnessMachineCharacteristicUInt16Field *_energyPerHourField;
    HDFitnessMachineCharacteristicUInt8Field *_energyPerMinuteField;
    HDFitnessMachineCharacteristicUInt8Field *_heartRateField;
    HDFitnessMachineCharacteristicUInt8Field *_metabolicEquivalentField;
    HDFitnessMachineCharacteristicUInt16Field *_elapsedTimeField;
    HDFitnessMachineCharacteristicUInt16Field *_remainingTimeField;
}

@property (nonatomic, readonly) NSDate *updateTime;
@property (nonatomic, readonly) _Bool instantaneousSpeedIsSet;
@property (nonatomic, readonly) double instantaneousSpeed;
@property (nonatomic, readonly) _Bool averageSpeedIsSet;
@property (nonatomic, readonly) double averageSpeed;
@property (nonatomic, readonly) _Bool instantaneousCadenceIsSet;
@property (nonatomic, readonly) double instantaneousCadence;
@property (nonatomic, readonly) _Bool averageCadenceIsSet;
@property (nonatomic, readonly) double averageCadence;
@property (nonatomic, readonly) _Bool totalDistanceIsSet;
@property (nonatomic, readonly) unsigned int totalDistance;
@property (nonatomic, readonly) _Bool resistanceLevelIsSet;
@property (nonatomic, readonly) short resistanceLevel;
@property (nonatomic, readonly) _Bool instantaneousPowerIsSet;
@property (nonatomic, readonly) short instantaneousPower;
@property (nonatomic, readonly) _Bool averagePowerIsSet;
@property (nonatomic, readonly) short averagePower;
@property (nonatomic, readonly) _Bool totalEnergyIsSet;
@property (nonatomic, readonly) unsigned short totalEnergy;
@property (nonatomic, readonly) _Bool energyPerHourIsSet;
@property (nonatomic, readonly) unsigned short energyPerHour;
@property (nonatomic, readonly) _Bool energyPerMinuteIsSet;
@property (nonatomic, readonly) unsigned char energyPerMinute;
@property (nonatomic, readonly) _Bool heartRateIsSet;
@property (nonatomic, readonly) unsigned char heartRate;
@property (nonatomic, readonly) _Bool metabolicEquivalentIsSet;
@property (nonatomic, readonly) unsigned char metabolicEquivalent;
@property (nonatomic, readonly) _Bool elapsedTimeIsSet;
@property (nonatomic, readonly) unsigned short elapsedTime;
@property (nonatomic, readonly) _Bool remainingTimeIsSet;
@property (nonatomic, readonly) unsigned short remainingTime;

+ (id)uuid;
+ (unsigned char)flagFieldLength;

- (id)description;
- (id)_init;
- (id)allFields;
- (id)generateDatums:(id)arg1;

@end
