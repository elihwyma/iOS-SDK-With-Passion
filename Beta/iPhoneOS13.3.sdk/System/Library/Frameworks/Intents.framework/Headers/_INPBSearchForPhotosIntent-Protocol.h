/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBActivityList, _INPBContactList, _INPBDataStringList, _INPBDateTimeRange, _INPBEventList, _INPBGeographicalFeatureList, _INPBIntentMetadata, _INPBLocation, _INPBPlaceList, _INPBString, _INPBStringList;

@protocol _INPBSearchForPhotosIntent <Swift>

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

- (unsigned short)clearExcludedAttributes;
- (unsigned short)addExcludedAttribute: /* Error: Ran out of types for this method. */;
- (unsigned short)excludedAttributeAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setExcludedAttributes:count: /* Error: Ran out of types for this method. */;
- (unsigned short)excludedAttributesAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsExcludedAttributes: /* Error: Ran out of types for this method. */;
- (unsigned short)clearIncludedAttributes;
- (unsigned short)addIncludedAttribute: /* Error: Ran out of types for this method. */;
- (unsigned short)includedAttributeAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setIncludedAttributes:count: /* Error: Ran out of types for this method. */;
- (unsigned short)includedAttributesAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsIncludedAttributes: /* Error: Ran out of types for this method. */;

@end
