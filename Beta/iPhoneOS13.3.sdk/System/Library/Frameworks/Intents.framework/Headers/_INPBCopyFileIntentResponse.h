/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBString;

@interface _INPBCopyFileIntentResponse : PBCodable <Swift>

{
    CDStruct_be739ab4 _has;
    _Bool _overwrite;
    _Bool _success;
    _Bool __encodeLegacyGloryData;
    int _entityType;
    _INPBString *_destinationName;
    _INPBString *_entityName;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBString *destinationName;
@property (nonatomic, readonly) _Bool hasDestinationName;
@property (retain, nonatomic) _INPBString *entityName;
@property (nonatomic, readonly) _Bool hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) _Bool hasEntityType;
@property (nonatomic) _Bool overwrite;
@property (nonatomic) _Bool hasOverwrite;
@property (nonatomic) _Bool success;
@property (nonatomic) _Bool hasSuccess;

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

@end
