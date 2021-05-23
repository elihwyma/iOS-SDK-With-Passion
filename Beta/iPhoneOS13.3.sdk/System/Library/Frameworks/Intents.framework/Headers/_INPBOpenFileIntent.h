/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBString;

@interface _INPBOpenFileIntent : PBCodable <Swift>

{
    CDStruct_5a81f70e _has;
    _Bool __encodeLegacyGloryData;
    int _entityType;
    int _scope;
    _INPBString *_appId;
    _INPBString *_entityName;
    _INPBIntentMetadata *_intentMetadata;
    NSArray *_properties;
    _INPBString *_scopeEntityName;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBString *appId;
@property (nonatomic, readonly) _Bool hasAppId;
@property (retain, nonatomic) _INPBString *entityName;
@property (nonatomic, readonly) _Bool hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) _Bool hasEntityType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (copy, nonatomic) NSArray *properties;
@property (nonatomic, readonly) unsigned long long propertiesCount;
@property (nonatomic) int scope;
@property (nonatomic) _Bool hasScope;
@property (retain, nonatomic) _INPBString *scopeEntityName;
@property (nonatomic, readonly) _Bool hasScopeEntityName;

+ (_Bool)supportsSecureCoding;
+ (Class)propertiesType;

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
- (id)entityTypeAsString:(int)arg1;
- (int)StringAsEntityType:(id)arg1;
- (id)scopeAsString:(int)arg1;
- (int)StringAsScope:(id)arg1;

@end
