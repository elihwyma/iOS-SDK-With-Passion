/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBDateTimeRange, _INPBString;

@interface _INPBSaveHealthSampleIntentResponse : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBString *_defaultUnit;
    _INPBString *_punchoutUrl;
    _INPBDateTimeRange *_recordDate;
    NSArray *_sampleUuids;
    _INPBString *_userProvidedUnit;
    NSArray *_valuesDefaultUnits;
    NSArray *_valuesUserProvidedUnits;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBString *defaultUnit;
@property (nonatomic, readonly) _Bool hasDefaultUnit;
@property (retain, nonatomic) _INPBString *punchoutUrl;
@property (nonatomic, readonly) _Bool hasPunchoutUrl;
@property (retain, nonatomic) _INPBDateTimeRange *recordDate;
@property (nonatomic, readonly) _Bool hasRecordDate;
@property (copy, nonatomic) NSArray *sampleUuids;
@property (nonatomic, readonly) unsigned long long sampleUuidsCount;
@property (retain, nonatomic) _INPBString *userProvidedUnit;
@property (nonatomic, readonly) _Bool hasUserProvidedUnit;
@property (copy, nonatomic) NSArray *valuesDefaultUnits;
@property (nonatomic, readonly) unsigned long long valuesDefaultUnitsCount;
@property (copy, nonatomic) NSArray *valuesUserProvidedUnits;
@property (nonatomic, readonly) unsigned long long valuesUserProvidedUnitsCount;

+ (_Bool)supportsSecureCoding;
+ (Class)sampleUuidsType;
+ (Class)valuesDefaultUnitType;
+ (Class)valuesUserProvidedUnitType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearSampleUuids;
- (void)addSampleUuids:(id)arg1;
- (id)sampleUuidsAtIndex:(unsigned long long)arg1;
- (void)clearValuesDefaultUnits;
- (void)addValuesDefaultUnit:(id)arg1;
- (id)valuesDefaultUnitAtIndex:(unsigned long long)arg1;
- (void)clearValuesUserProvidedUnits;
- (void)addValuesUserProvidedUnit:(id)arg1;
- (id)valuesUserProvidedUnitAtIndex:(unsigned long long)arg1;

@end
