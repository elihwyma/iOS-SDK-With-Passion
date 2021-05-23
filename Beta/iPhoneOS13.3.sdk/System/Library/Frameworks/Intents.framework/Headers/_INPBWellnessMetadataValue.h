/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDouble, _INPBInteger, _INPBString;

@interface _INPBWellnessMetadataValue : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBDouble *_pbDoubleValue;
    _INPBInteger *_ordinalValue;
    _INPBString *_pbStringValue;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBDouble *pbDoubleValue;
@property (nonatomic, readonly) _Bool hasPbDoubleValue;
@property (retain, nonatomic) _INPBInteger *ordinalValue;
@property (nonatomic, readonly) _Bool hasOrdinalValue;
@property (retain, nonatomic) _INPBString *pbStringValue;
@property (nonatomic, readonly) _Bool hasPbStringValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
