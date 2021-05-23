/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDataString, _INPBInteger, _INPBIntentMetadata;

@interface _INPBSetSeatSettingsInCarIntent : PBCodable <Swift>

{
    struct {
        unsigned int enableCooling:1;
        unsigned int enableHeating:1;
        unsigned int enableMassage:1;
        unsigned int relativeLevelSetting:1;
        unsigned int seat:1;
    } _has;
    _Bool _enableCooling;
    _Bool _enableHeating;
    _Bool _enableMassage;
    _Bool __encodeLegacyGloryData;
    int _relativeLevelSetting;
    int _seat;
    _INPBDataString *_carName;
    _INPBIntentMetadata *_intentMetadata;
    _INPBInteger *_level;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBDataString *carName;
@property (nonatomic, readonly) _Bool hasCarName;
@property (nonatomic) _Bool enableCooling;
@property (nonatomic) _Bool hasEnableCooling;
@property (nonatomic) _Bool enableHeating;
@property (nonatomic) _Bool hasEnableHeating;
@property (nonatomic) _Bool enableMassage;
@property (nonatomic) _Bool hasEnableMassage;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBInteger *level;
@property (nonatomic, readonly) _Bool hasLevel;
@property (nonatomic) int relativeLevelSetting;
@property (nonatomic) _Bool hasRelativeLevelSetting;
@property (nonatomic) int seat;
@property (nonatomic) _Bool hasSeat;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)relativeLevelSettingAsString:(int)arg1;
- (int)StringAsRelativeLevelSetting:(id)arg1;
- (id)seatAsString:(int)arg1;
- (int)StringAsSeat:(id)arg1;

@end
