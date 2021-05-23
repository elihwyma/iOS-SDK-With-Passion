/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBActivityList, _INPBContactList, _INPBDataStringList, _INPBDateTimeRange, _INPBEventList, _INPBGeographicalFeatureList, _INPBIntentMetadata, _INPBLocation, _INPBPlaceList, _INPBString, _INPBStringList;

@interface _INPBSearchForPhotosIntent : PBCodable <Swift>

{
    CDStruct_95bda58d _excludedAttributes;
    CDStruct_95bda58d _includedAttributes;
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBActivityList *_activities;
    _INPBString *_albumName;
    _INPBContactList *_contentPerson;
    _INPBDateTimeRange *_dateCreated;
    _INPBEventList *_events;
    _INPBGeographicalFeatureList *_geographicalFeatures;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDataStringList *_keyword;
    _INPBStringList *_keywordString;
    _INPBLocation *_locationCreated;
    _INPBString *_memoryName;
    _INPBContactList *_peopleInPhoto;
    _INPBPlaceList *_places;
    _INPBStringList *_searchTerm;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBActivityList *activities;
@property (nonatomic, readonly) _Bool hasActivities;
@property (retain, nonatomic) _INPBString *albumName;
@property (nonatomic, readonly) _Bool hasAlbumName;
@property (retain, nonatomic) _INPBContactList *contentPerson;
@property (nonatomic, readonly) _Bool hasContentPerson;
@property (retain, nonatomic) _INPBDateTimeRange *dateCreated;
@property (nonatomic, readonly) _Bool hasDateCreated;
@property (retain, nonatomic) _INPBEventList *events;
@property (nonatomic, readonly) _Bool hasEvents;
@property (nonatomic, readonly) int *excludedAttributes;
@property (nonatomic, readonly) unsigned long long excludedAttributesCount;
@property (retain, nonatomic) _INPBGeographicalFeatureList *geographicalFeatures;
@property (nonatomic, readonly) _Bool hasGeographicalFeatures;
@property (nonatomic, readonly) int *includedAttributes;
@property (nonatomic, readonly) unsigned long long includedAttributesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBDataStringList *keyword;
@property (nonatomic, readonly) _Bool hasKeyword;
@property (retain, nonatomic) _INPBStringList *keywordString;
@property (nonatomic, readonly) _Bool hasKeywordString;
@property (retain, nonatomic) _INPBLocation *locationCreated;
@property (nonatomic, readonly) _Bool hasLocationCreated;
@property (retain, nonatomic) _INPBString *memoryName;
@property (nonatomic, readonly) _Bool hasMemoryName;
@property (retain, nonatomic) _INPBContactList *peopleInPhoto;
@property (nonatomic, readonly) _Bool hasPeopleInPhoto;
@property (retain, nonatomic) _INPBPlaceList *places;
@property (nonatomic, readonly) _Bool hasPlaces;
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
