/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDFitnessMachineDataCharacteristicBase.h>

@class HDFitnessMachineCharacteristicUInt16Field, HDFitnessMachineCharacteristicUInt8Field, NSDate;

@interface HDStairClimberData : HDFitnessMachineDataCharacteristicBase

{
    HDFitnessMachineCharacteristicUInt16Field *_floorsField;
    HDFitnessMachineCharacteristicUInt16Field *_stepsPerMinuteField;
    HDFitnessMachineCharacteristicUInt16Field *_averageStepRateField;
    HDFitnessMachineCharacteristicUInt16Field *_positiveElevationGainField;
    HDFitnessMachineCharacteristicUInt16Field *_stepCountField;
    HDFitnessMachineCharacteristicUInt16Field *_totalEnergyField;
    HDFitnessMachineCharacteristicUInt16Field *_energyPerHourField;
    HDFitnessMachineCharacteristicUInt8Field *_energyPerMinuteField;
    HDFitnessMachineCharacteristicUInt8Field *_heartRateField;
    HDFitnessMachineCharacteristicUInt8Field *_metabolicEquivalentField;
    HDFitnessMachineCharacteristicUInt16Field *_elapsedTimeField;
    HDFitnessMachineCharacteristicUInt16Field *_remainingTimeField;
}

@property (nonatomic, readonly) NSDate *updateTime;
@property (nonatomic, readonly) _Bool floorsIsSet;
@property (nonatomic, readonly) unsigned short floors;
@property (nonatomic, readonly) _Bool stepsPerMinuteIsSet;
@property (nonatomic, readonly) unsigned short stepsPerMinute;
@property (nonatomic, readonly) _Bool averageStepRateIsSet;
@property (nonatomic, readonly) unsigned short averageStepRate;
@property (nonatomic, readonly) _Bool positiveElevationGainIsSet;
@property (nonatomic, readonly) unsigned short positiveElevationGain;
@property (nonatomic, readonly) _Bool stepCountIsSet;
@property (nonatomic, readonly) unsigned short stepCount;
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
