/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDataString, _INPBDouble, _INPBInteger, _INPBIntentMetadata, _INPBTemperature;

@interface _INPBSetClimateSettingsInCarIntent : PBCodable <Swift>

{
    struct {
        unsigned int airCirculationMode:1;
        unsigned int climateZone:1;
        unsigned int enableAirConditioner:1;
        unsigned int enableAutoMode:1;
        unsigned int enableClimateControl:1;
        unsigned int enableFan:1;
        unsigned int relativeFanSpeedSetting:1;
        unsigned int relativeTemperatureSetting:1;
    } _has;
    _Bool _enableAirConditioner;
    _Bool _enableAutoMode;
    _Bool _enableClimateControl;
    _Bool _enableFan;
    _Bool __encodeLegacyGloryData;
    int _airCirculationMode;
    int _climateZone;
    int _relativeFanSpeedSetting;
    int _relativeTemperatureSetting;
    _INPBDataString *_carName;
    _INPBInteger *_fanSpeedIndex;
    _INPBDouble *_fanSpeedPercentage;
    _INPBIntentMetadata *_intentMetadata;
    _INPBTemperature *_temperature;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)airCirculationModeAsString:(int)arg1;
- (int)StringAsAirCirculationMode:(id)arg1;
- (id)climateZoneAsString:(int)arg1;
- (int)StringAsClimateZone:(id)arg1;
- (id)relativeFanSpeedSettingAsString:(int)arg1;
- (int)StringAsRelativeFanSpeedSetting:(id)arg1;
- (id)relativeTemperatureSettingAsString:(int)arg1;
- (int)StringAsRelativeTemperatureSetting:(id)arg1;

@end
