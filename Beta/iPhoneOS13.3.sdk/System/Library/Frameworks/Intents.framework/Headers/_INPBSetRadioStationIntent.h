/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDouble, _INPBInteger, _INPBIntentMetadata, _INPBString;

@interface _INPBSetRadioStationIntent : PBCodable <Swift>

{
    struct {
        unsigned int radioType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _radioType;
    _INPBString *_channel;
    _INPBDouble *_frequency;
    _INPBIntentMetadata *_intentMetadata;
    _INPBInteger *_presetNumber;
    _INPBString *_stationName;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBString *channel;
@property (nonatomic, readonly) _Bool hasChannel;
@property (retain, nonatomic) _INPBDouble *frequency;
@property (nonatomic, readonly) _Bool hasFrequency;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBInteger *presetNumber;
@property (nonatomic, readonly) _Bool hasPresetNumber;
@property (nonatomic) int radioType;
@property (nonatomic) _Bool hasRadioType;
@property (retain, nonatomic) _INPBString *stationName;
@property (nonatomic, readonly) _Bool hasStationName;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)radioTypeAsString:(int)arg1;
- (int)StringAsRadioType:(id)arg1;

@end
