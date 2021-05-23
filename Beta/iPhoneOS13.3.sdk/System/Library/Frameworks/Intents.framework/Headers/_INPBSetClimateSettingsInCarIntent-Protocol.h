/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDataString, _INPBDouble, _INPBInteger, _INPBIntentMetadata, _INPBTemperature;

@protocol _INPBSetClimateSettingsInCarIntent <Swift>

@property (nonatomic) int airCirculationMode;
@property (nonatomic) _Bool hasAirCirculationMode;
@property (retain, nonatomic) _INPBDataString *carName;
@property (nonatomic, readonly) _Bool hasCarName;
@property (nonatomic) int climateZone;
@property (nonatomic) _Bool hasClimateZone;
@property (nonatomic) _Bool enableAirConditioner;
@property (nonatomic) _Bool hasEnableAirConditioner;
@property (nonatomic) _Bool enableAutoMode;
@property (nonatomic) _Bool hasEnableAutoMode;
@property (nonatomic) _Bool enableClimateControl;
@property (nonatomic) _Bool hasEnableClimateControl;
@property (nonatomic) _Bool enableFan;
@property (nonatomic) _Bool hasEnableFan;
@property (retain, nonatomic) _INPBInteger *fanSpeedIndex;
@property (nonatomic, readonly) _Bool hasFanSpeedIndex;
@property (retain, nonatomic) _INPBDouble *fanSpeedPercentage;
@property (nonatomic, readonly) _Bool hasFanSpeedPercentage;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) int relativeFanSpeedSetting;
@property (nonatomic) _Bool hasRelativeFanSpeedSetting;
@property (nonatomic) int relativeTemperatureSetting;
@property (nonatomic) _Bool hasRelativeTemperatureSetting;
@property (retain, nonatomic) _INPBTemperature *temperature;
@property (nonatomic, readonly) _Bool hasTemperature;

- (unsigned short)airCirculationModeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsAirCirculationMode: /* Error: Ran out of types for this method. */;
- (unsigned short)climateZoneAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsClimateZone: /* Error: Ran out of types for this method. */;
- (unsigned short)relativeFanSpeedSettingAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsRelativeFanSpeedSetting: /* Error: Ran out of types for this method. */;
- (unsigned short)relativeTemperatureSettingAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsRelativeTemperatureSetting: /* Error: Ran out of types for this method. */;

@end
