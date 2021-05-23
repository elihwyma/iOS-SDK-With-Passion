/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBInteger, _INPBString;

@interface _INPBSearchForFilesIntentResponse : PBCodable <Swift>

{
    CDStruct_f2ecb737 _has;
    _Bool _success;
    _Bool __encodeLegacyGloryData;
    NSArray *_entities;
    _INPBInteger *_numResults;
    _INPBString *_query;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *entities;
@property (nonatomic, readonly) unsigned long long entitiesCount;
@property (retain, nonatomic) _INPBInteger *numResults;
@property (nonatomic, readonly) _Bool hasNumResults;
@property (retain, nonatomic) _INPBString *query;
@property (nonatomic, readonly) _Bool hasQuery;
@property (nonatomic) _Bool success;
@property (nonatomic) _Bool hasSuccess;

+ (_Bool)supportsSecureCoding;
+ (Class)entitiesType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearEntities;
- (void)addEntities:(id)arg1;
- (id)entitiesAtIndex:(unsigned long long)arg1;

@end
