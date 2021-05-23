/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBString;

@interface _INPBCreateFileIntent : PBCodable <Swift>

{
    struct {
        unsigned int destinationType:1;
        unsigned int entityType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _destinationType;
    int _entityType;
    _INPBString *_destinationName;
    _INPBString *_entityName;
    _INPBIntentMetadata *_intentMetadata;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBString *destinationName;
@property (nonatomic, readonly) _Bool hasDestinationName;
@property (nonatomic) int destinationType;
@property (nonatomic) _Bool hasDestinationType;
@property (retain, nonatomic) _INPBString *entityName;
@property (nonatomic, readonly) _Bool hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) _Bool hasEntityType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)destinationTypeAsString:(int)arg1;
- (int)StringAsDestinationType:(id)arg1;
- (id)entityTypeAsString:(int)arg1;
- (int)StringAsEntityType:(id)arg1;

@end
