/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBContactList, _INPBDateTimeRange, _INPBIntentMetadata, _INPBLocation, _INPBString, _INPBStringList;

@interface _INPBStartPhotoPlaybackIntent : PBCodable <Swift>

{
    CDStruct_95bda58d _excludedAttributes;
    CDStruct_95bda58d _includedAttributes;
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBString *_albumName;
    _INPBContactList *_contentPerson;
    _INPBDateTimeRange *_dateCreated;
    _INPBIntentMetadata *_intentMetadata;
    _INPBStringList *_keywordString;
    _INPBLocation *_locationCreated;
    _INPBContactList *_peopleInPhoto;
    _INPBStringList *_searchTerm;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBString *albumName;
@property (nonatomic, readonly) _Bool hasAlbumName;
@property (retain, nonatomic) _INPBContactList *contentPerson;
@property (nonatomic, readonly) _Bool hasContentPerson;
@property (retain, nonatomic) _INPBDateTimeRange *dateCreated;
@property (nonatomic, readonly) _Bool hasDateCreated;
@property (nonatomic, readonly) int *excludedAttributes;
@property (nonatomic, readonly) unsigned long long excludedAttributesCount;
@property (nonatomic, readonly) int *includedAttributes;
@property (nonatomic, readonly) unsigned long long includedAttributesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBStringList *keywordString;
@property (nonatomic, readonly) _Bool hasKeywordString;
@property (retain, nonatomic) _INPBLocation *locationCreated;
@property (nonatomic, readonly) _Bool hasLocationCreated;
@property (retain, nonatomic) _INPBContactList *peopleInPhoto;
@property (nonatomic, readonly) _Bool hasPeopleInPhoto;
@property (retain, nonatomic) _INPBStringList *searchTerm;
@property (nonatomic, readonly) _Bool hasSearchTerm;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearExcludedAttributes;
- (void)addExcludedAttribute:(int)arg1;
- (int)excludedAttributeAtIndex:(unsigned long long)arg1;
- (void)setExcludedAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (id)excludedAttributesAsString:(int)arg1;
- (int)StringAsExcludedAttributes:(id)arg1;
- (void)clearIncludedAttributes;
- (void)addIncludedAttribute:(int)arg1;
- (int)includedAttributeAtIndex:(unsigned long long)arg1;
- (void)setIncludedAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (id)includedAttributesAsString:(int)arg1;
- (int)StringAsIncludedAttributes:(id)arg1;

@end
