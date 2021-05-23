/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBHomeAttributeValue;

@interface _INPBHomeAttribute : PBCodable <Swift>

{
    struct {
        unsigned int attributeType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _attributeType;
    _INPBHomeAttributeValue *_attributeValue;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int attributeType;
@property (nonatomic) _Bool hasAttributeType;
@property (retain, nonatomic) _INPBHomeAttributeValue *attributeValue;
@property (nonatomic, readonly) _Bool hasAttributeValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)attributeTypeAsString:(int)arg1;
- (int)StringAsAttributeType:(id)arg1;

@end
