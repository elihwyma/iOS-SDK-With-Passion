/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface _INPBWellnessUnitType : PBCodable <Swift>

{
    struct {
        unsigned int bloodGlucoseUnit:1;
        unsigned int bloodPressureUnit:1;
        unsigned int energyUnit:1;
        unsigned int heartRateUnit:1;
        unsigned int lengthUnit:1;
        unsigned int massUnit:1;
        unsigned int respiratoryRateUnit:1;
        unsigned int temperatureUnit:1;
        unsigned int timeUnit:1;
        unsigned int volumeUnit:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _bloodGlucoseUnit;
    int _bloodPressureUnit;
    int _energyUnit;
    int _heartRateUnit;
    int _lengthUnit;
    int _massUnit;
    int _respiratoryRateUnit;
    int _temperatureUnit;
    int _timeUnit;
    int _volumeUnit;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int bloodGlucoseUnit;
@property (nonatomic) _Bool hasBloodGlucoseUnit;
@property (nonatomic) int bloodPressureUnit;
@property (nonatomic) _Bool hasBloodPressureUnit;
@property (nonatomic) int energyUnit;
@property (nonatomic) _Bool hasEnergyUnit;
@property (nonatomic) int heartRateUnit;
@property (nonatomic) _Bool hasHeartRateUnit;
@property (nonatomic) int lengthUnit;
@property (nonatomic) _Bool hasLengthUnit;
@property (nonatomic) int massUnit;
@property (nonatomic) _Bool hasMassUnit;
@property (nonatomic) int respiratoryRateUnit;
@property (nonatomic) _Bool hasRespiratoryRateUnit;
@property (nonatomic) int temperatureUnit;
@property (nonatomic) _Bool hasTemperatureUnit;
@property (nonatomic) int timeUnit;
@property (nonatomic) _Bool hasTimeUnit;
@property (nonatomic) int volumeUnit;
@property (nonatomic) _Bool hasVolumeUnit;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)bloodGlucoseUnitAsString:(int)arg1;
- (int)StringAsBloodGlucoseUnit:(id)arg1;
- (id)bloodPressureUnitAsString:(int)arg1;
- (int)StringAsBloodPressureUnit:(id)arg1;
- (id)energyUnitAsString:(int)arg1;
- (int)StringAsEnergyUnit:(id)arg1;
- (id)heartRateUnitAsString:(int)arg1;
- (int)StringAsHeartRateUnit:(id)arg1;
- (id)lengthUnitAsString:(int)arg1;
- (int)StringAsLengthUnit:(id)arg1;
- (id)massUnitAsString:(int)arg1;
- (int)StringAsMassUnit:(id)arg1;
- (id)respiratoryRateUnitAsString:(int)arg1;
- (int)StringAsRespiratoryRateUnit:(id)arg1;
- (id)temperatureUnitAsString:(int)arg1;
- (int)StringAsTemperatureUnit:(id)arg1;
- (id)timeUnitAsString:(int)arg1;
- (int)StringAsTimeUnit:(id)arg1;
- (id)volumeUnitAsString:(int)arg1;
- (int)StringAsVolumeUnit:(id)arg1;

@end
