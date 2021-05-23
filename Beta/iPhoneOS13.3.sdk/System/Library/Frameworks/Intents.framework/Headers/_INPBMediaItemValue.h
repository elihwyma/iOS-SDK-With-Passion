/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBImageValue, _INPBValueMetadata;

@interface _INPBMediaItemValue : PBCodable <Swift>

{
    CDStruct_f953fb60 _has;
    _Bool __encodeLegacyGloryData;
    int _type;
    NSString *_artist;
    _INPBImageValue *_artwork;
    NSString *_identifier;
    NSArray *_namedEntities;
    NSString *_title;
    NSArray *_topics;
    _INPBValueMetadata *_valueMetadata;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *artist;
@property (nonatomic, readonly) _Bool hasArtist;
@property (retain, nonatomic) _INPBImageValue *artwork;
@property (nonatomic, readonly) _Bool hasArtwork;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (copy, nonatomic) NSArray *namedEntities;
@property (nonatomic, readonly) unsigned long long namedEntitiesCount;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasTitle;
@property (copy, nonatomic) NSArray *topics;
@property (nonatomic, readonly) unsigned long long topicsCount;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

+ (_Bool)supportsSecureCoding;
+ (Class)namedEntitiesType;
+ (Class)topicsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)clearNamedEntities;
- (void)addNamedEntities:(id)arg1;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
- (void)clearTopics;
- (void)addTopics:(id)arg1;
- (id)topicsAtIndex:(unsigned long long)arg1;

@end
