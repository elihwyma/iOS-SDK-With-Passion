/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBString;

@interface _INPBGetFileInformationIntent : PBCodable <Swift>

{
    struct {
        unsigned int entityType:1;
        unsigned int propertyName:1;
        unsigned int qualifier:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _entityType;
    int _propertyName;
    int _qualifier;
    _INPBString *_entityName;
    _INPBIntentMetadata *_intentMetadata;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBString *entityName;
@property (nonatomic, readonly) _Bool hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) _Bool hasEntityType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) int propertyName;
@property (nonatomic) _Bool hasPropertyName;
@property (nonatomic) int qualifier;
@property (nonatomic) _Bool hasQualifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)entityTypeAsString:(int)arg1;
- (int)StringAsEntityType:(id)arg1;
- (id)qualifierAsString:(int)arg1;
- (int)StringAsQualifier:(id)arg1;
- (id)propertyNameAsString:(int)arg1;
- (int)StringAsPropertyName:(id)arg1;

@end
