/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDFitnessMachineDataCharacteristicBase.h>

@class HDFitnessMachineCharacteristicDoubleField, HDFitnessMachineCharacteristicInt16Field, HDFitnessMachineCharacteristicUInt16Field, HDFitnessMachineCharacteristicUInt24Field, HDFitnessMachineCharacteristicUInt8Field, NSDate;

@interface HDCrossTrainerData : HDFitnessMachineDataCharacteristicBase

{
    HDFitnessMachineCharacteristicDoubleField *_instantaneousSpeedField;
    HDFitnessMachineCharacteristicDoubleField *_averageSpeedField;
    HDFitnessMachineCharacteristicUInt24Field *_totalDistanceField;
    HDFitnessMachineCharacteristicUInt16Field *_stepPerMinuteField;
    HDFitnessMachineCharacteristicUInt16Field *_averageStepRateField;
    HDFitnessMachineCharacteristicDoubleField *_strideCountField;
    HDFitnessMachineCharacteristicUInt16Field *_positiveElevationGainField;
    HDFitnessMachineCharacteristicUInt16Field *_negativeElevationGainField;
    HDFitnessMachineCharacteristicDoubleField *_inclinationField;
    HDFitnessMachineCharacteristicDoubleField *_rampSettingField;
    HDFitnessMachineCharacteristicDoubleField *_resistanceLevelField;
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
@property (nonatomic, readonly) _Bool totalDistanceIsSet;
@property (nonatomic, readonly) unsigned int totalDistance;
@property (nonatomic, readonly) _Bool stepPerMinuteIsSet;
@property (nonatomic, readonly) unsigned short stepPerMinute;
@property (nonatomic, readonly) _Bool averageStepRateIsSet;
@property (nonatomic, readonly) unsigned short averageStepRate;
@property (nonatomic, readonly) _Bool strideCountIsSet;
@property (nonatomic, readonly) double strideCount;
@property (nonatomic, readonly) _Bool positiveElevationGainIsSet;
@property (nonatomic, readonly) unsigned short positiveElevationGain;
@property (nonatomic, readonly) _Bool negativeElevationGainIsSet;
@property (nonatomic, readonly) unsigned short negativeElevationGain;
@property (nonatomic, readonly) _Bool inclinationIsSet;
@property (nonatomic, readonly) double inclination;
@property (nonatomic, readonly) _Bool rampSettingIsSet;
@property (nonatomic, readonly) double rampSetting;
@property (nonatomic, readonly) _Bool resistanceLevelIsSet;
@property (nonatomic, readonly) double resistanceLevel;
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
