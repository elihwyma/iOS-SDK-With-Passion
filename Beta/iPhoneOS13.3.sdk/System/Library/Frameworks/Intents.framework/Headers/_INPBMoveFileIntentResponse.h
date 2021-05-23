/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBString;

@interface _INPBMoveFileIntentResponse : PBCodable <Swift>

{
    CDStruct_95bda58d _entityTypes;
    struct {
        unsigned int overwrite:1;
        unsigned int success:1;
    } _has;
    _Bool _overwrite;
    _Bool _success;
    _Bool __encodeLegacyGloryData;
    _INPBString *_destinationName;
    NSArray *_entityNames;
    _INPBString *_sourceName;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBString *destinationName;
@property (nonatomic, readonly) _Bool hasDestinationName;
@property (copy, nonatomic) NSArray *entityNames;
@property (nonatomic, readonly) unsigned long long entityNamesCount;
@property (nonatomic, readonly) int *entityTypes;
@property (nonatomic, readonly) unsigned long long entityTypesCount;
@property (nonatomic) _Bool overwrite;
@property (nonatomic) _Bool hasOverwrite;
@property (retain, nonatomic) _INPBString *sourceName;
@property (nonatomic, readonly) _Bool hasSourceName;
@property (nonatomic) _Bool success;
@property (nonatomic) _Bool hasSuccess;

+ (_Bool)supportsSecureCoding;
+ (Class)entityNameType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearEntityNames;
- (void)addEntityName:(id)arg1;
- (id)entityNameAtIndex:(unsigned long long)arg1;
- (void)clearEntityTypes;
- (void)addEntityType:(int)arg1;
- (int)entityTypeAtIndex:(unsigned long long)arg1;
- (void)setEntityTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)entityTypesAsString:(int)arg1;
- (int)StringAsEntityTypes:(id)arg1;

@end
