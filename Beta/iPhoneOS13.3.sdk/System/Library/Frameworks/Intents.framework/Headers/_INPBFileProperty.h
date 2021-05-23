/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBFilePropertyValue;

@interface _INPBFileProperty : PBCodable <Swift>

{
    struct {
        unsigned int name:1;
        unsigned int qualifier:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _name;
    int _qualifier;
    _INPBFilePropertyValue *_value;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int name;
@property (nonatomic) _Bool hasName;
@property (nonatomic) int qualifier;
@property (nonatomic) _Bool hasQualifier;
@property (retain, nonatomic) _INPBFilePropertyValue *value;
@property (nonatomic, readonly) _Bool hasValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)nameAsString:(int)arg1;
- (int)StringAsName:(id)arg1;
- (id)qualifierAsString:(int)arg1;
- (int)StringAsQualifier:(id)arg1;

@end
