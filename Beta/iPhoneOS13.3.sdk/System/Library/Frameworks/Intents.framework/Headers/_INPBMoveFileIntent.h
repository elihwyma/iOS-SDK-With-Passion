/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBString;

@interface _INPBMoveFileIntent : PBCodable <Swift>

{
    CDStruct_95bda58d _entityTypes;
    struct {
        unsigned int destinationType:1;
        unsigned int sourceType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _destinationType;
    int _sourceType;
    _INPBString *_destinationName;
    NSArray *_entityNames;
    _INPBIntentMetadata *_intentMetadata;
    NSArray *_properties;
    _INPBString *_sourceName;
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
@property (copy, nonatomic) NSArray *entityNames;
@property (nonatomic, readonly) unsigned long long entityNamesCount;
@property (nonatomic, readonly) int *entityTypes;
@property (nonatomic, readonly) unsigned long long entityTypesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (copy, nonatomic) NSArray *properties;
@property (nonatomic, readonly) unsigned long long propertiesCount;
@property (retain, nonatomic) _INPBString *sourceName;
@property (nonatomic, readonly) _Bool hasSourceName;
@property (nonatomic) int sourceType;
@property (nonatomic) _Bool hasSourceType;

+ (_Bool)supportsSecureCoding;
+ (Class)propertiesType;
+ (Class)entityNameType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addProperties:(id)arg1;
- (void)clearProperties;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (id)destinationTypeAsString:(int)arg1;
- (int)StringAsDestinationType:(id)arg1;
- (void)clearEntityNames;
- (void)addEntityName:(id)arg1;
- (id)entityNameAtIndex:(unsigned long long)arg1;
- (void)clearEntityTypes;
- (void)addEntityType:(int)arg1;
- (int)entityTypeAtIndex:(unsigned long long)arg1;
- (void)setEntityTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)entityTypesAsString:(int)arg1;
- (int)StringAsEntityTypes:(id)arg1;
- (id)sourceTypeAsString:(int)arg1;
- (int)StringAsSourceType:(id)arg1;

@end
