/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBImageValue, _INPBValueMetadata;

@interface _INPBPaymentMethodValue : PBCodable <Swift>

{
    CDStruct_f953fb60 _has;
    _Bool __encodeLegacyGloryData;
    int _type;
    _INPBImageValue *_icon;
    NSString *_identificationHint;
    NSString *_name;
    _INPBValueMetadata *_valueMetadata;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBImageValue *icon;
@property (nonatomic, readonly) _Bool hasIcon;
@property (copy, nonatomic) NSString *identificationHint;
@property (nonatomic, readonly) _Bool hasIdentificationHint;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasName;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;

@end
