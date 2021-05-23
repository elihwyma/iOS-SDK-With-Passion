/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDFitnessMachineDataCharacteristicBase.h>

@class HDFitnessMachineCharacteristicDoubleField, HDFitnessMachineCharacteristicUInt16Field, HDFitnessMachineCharacteristicUInt24Field, HDFitnessMachineCharacteristicUInt8Field, NSDate;

@interface HDTreadmillData : HDFitnessMachineDataCharacteristicBase

{
    HDFitnessMachineCharacteristicDoubleField *_instantaneousSpeedField;
    HDFitnessMachineCharacteristicDoubleField *_averageSpeedField;
    HDFitnessMachineCharacteristicUInt24Field *_totalDistanceField;
    HDFitnessMachineCharacteristicDoubleField *_inclinationField;
    HDFitnessMachineCharacteristicDoubleField *_rampSettingField;
    HDFitnessMachineCharacteristicDoubleField *_positiveElevationGainField;
    HDFitnessMachineCharacteristicDoubleField *_negativeElevationGainField;
    HDFitnessMachineCharacteristicDoubleField *_instantaneousPaceField;
    HDFitnessMachineCharacteristicDoubleField *_averagePaceField;
    HDFitnessMachineCharacteristicUInt16Field *_totalEnergyField;
    HDFitnessMachineCharacteristicUInt16Field *_energyPerHourField;
    HDFitnessMachineCharacteristicUInt8Field *_energyPerMinuteField;
    HDFitnessMachineCharacteristicUInt8Field *_heartRateField;
    HDFitnessMachineCharacteristicUInt8Field *_metabolicEquivalentField;
    HDFitnessMachineCharacteristicUInt16Field *_elapsedTimeField;
    HDFitnessMachineCharacteristicUInt16Field *_remainingTimeField;
    HDFitnessMachineCharacteristicUInt16Field *_forceOnBeltField;
    HDFitnessMachineCharacteristicUInt16Field *_powerOutputField;
}

@property (nonatomic, readonly) NSDate *updateTime;
@property (nonatomic, readonly) _Bool instantaneousSpeedIsSet;
@property (nonatomic, readonly) double instantaneousSpeed;
@property (nonatomic, readonly) _Bool averageSpeedIsSet;
@property (nonatomic, readonly) double averageSpeed;
@property (nonatomic, readonly) _Bool totalDistanceIsSet;
@property (nonatomic, readonly) unsigned int totalDistance;
@property (nonatomic, readonly) _Bool inclinationIsSet;
@property (nonatomic, readonly) double inclination;
@property (nonatomic, readonly) _Bool rampSettingIsSet;
@property (nonatomic, readonly) double rampSetting;
@property (nonatomic, readonly) _Bool positiveElevationGainIsSet;
@property (nonatomic, readonly) double positiveElevationGain;
@property (nonatomic, readonly) _Bool negativeElevationGainIsSet;
@property (nonatomic, readonly) double negativeElevationGain;
@property (nonatomic, readonly) _Bool instantaneousPaceIsSet;
@property (nonatomic, readonly) double instantaneousPace;
@property (nonatomic, readonly) _Bool averagePaceIsSet;
@property (nonatomic, readonly) double averagePace;
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
@property (nonatomic, readonly) _Bool forceOnBeltIsSet;
@property (nonatomic, readonly) unsigned short forceOnBelt;
@property (nonatomic, readonly) _Bool powerOutputIsSet;
@property (nonatomic, readonly) unsigned short powerOutput;

+ (id)uuid;
+ (unsigned char)flagFieldLength;
+ (id)unitTest_fakeTreadmillDataForDistance:(unsigned int)arg1 energy:(unsigned short)arg2 elapsedTime:(unsigned short)arg3;

- (id)description;
- (id)_init;
- (id)allFields;
- (id)generateDatums:(id)arg1;

@end
