/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapItemInitialRequestData, GEOPDMapsIdentifier, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDPlace : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_components;
    unsigned long long _createdTime;
    GEOPDMapsIdentifier *_mapsId;
    unsigned long long _muid;
    NSString *_placeCacheKey;
    unsigned long long _preferredMuid;
    GEOMapItemInitialRequestData *_requestData;
    unsigned long long _updateVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _referenceFrame;
    int _resultProviderId;
    int _status;
    struct {
        unsigned int has_createdTime:1;
        unsigned int has_muid:1;
        unsigned int has_preferredMuid:1;
        unsigned int has_updateVersion:1;
        unsigned int has_referenceFrame:1;
        unsigned int has_resultProviderId:1;
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_components:1;
        unsigned int read_mapsId:1;
        unsigned int read_placeCacheKey:1;
        unsigned int read_requestData:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_components:1;
        unsigned int wrote_createdTime:1;
        unsigned int wrote_mapsId:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_placeCacheKey:1;
        unsigned int wrote_preferredMuid:1;
        unsigned int wrote_requestData:1;
        unsigned int wrote_updateVersion:1;
        unsigned int wrote_referenceFrame:1;
        unsigned int wrote_resultProviderId:1;
        unsigned int wrote_status:1;
    } _flags;
}

@property (nonatomic) _Bool hasReferenceFrame;
@property (nonatomic) int referenceFrame;
@property (nonatomic, readonly) _Bool hasRequestData;
@property (retain, nonatomic) GEOMapItemInitialRequestData *requestData;
@property (nonatomic, readonly) _Bool hasPlaceCacheKey;
@property (retain, nonatomic) NSString *placeCacheKey;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasPreferredMuid;
@property (nonatomic) unsigned long long preferredMuid;
@property (retain, nonatomic) NSMutableArray *components;
@property (nonatomic) _Bool hasResultProviderId;
@property (nonatomic) int resultProviderId;
@property (nonatomic) _Bool hasUpdateVersion;
@property (nonatomic) unsigned long long updateVersion;
@property (nonatomic, readonly) _Bool hasMapsId;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (nonatomic) _Bool hasCreatedTime;
@property (nonatomic) unsigned long long createdTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)componentTypesFromComponentInfos:(id)arg1;
+ (Class)componentType;
+ (id)failedPlaceDataForMuid:(unsigned long long)arg1;
+ (id)failedPlaceData;
+ (id)attributionForPlaceData:(id)arg1 type:(int)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (id)cacheKey;
- (void)writeTo:(id)arg1;
- (id)phoneNumbers;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)statusAsString:(int)arg1;
- (id)_entityName;
- (int)StringAsStatus:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (_Bool)_isKey:(id)arg1 subsetOf:(id)arg2;
- (unsigned int)minTTL;
- (id)entityComponent;
- (id)pdPlaceCacheKey;
- (_Bool)meetsManifestVersioningForServiceVersion:(id)arg1;
- (_Bool)isCacheable;
- (_Bool)hasExpectedComponentTypes:(id)arg1;
- (void)clearSensitiveFields;
- (id)referenceFrameAsString:(int)arg1;
- (int)StringAsReferenceFrame:(id)arg1;
- (void)_readMapsId;
- (_Bool)isDisputed;
- (id)geoMapItem;
- (id)spokenNameForLocale:(id)arg1;
- (id)secondaryName;
- (id)secondarySpokenName;
- (id)bestName;
- (id)compactDebugDescription;
- (void)setFirstSeenTimestamp:(double)arg1;
- (void)enumerateValidComponentsWithValuesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateValidComponentValuesOfType:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateComponentOfType:(int)arg1 enumerationOptions:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)statusCodeIsValid;
- (void)enumerateComponentsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)componentOfType:(int)arg1 options:(unsigned long long)arg2;
- (void)enumerateComponentValuesOfType:(int)arg1 enumerationOptions:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_cleanedPhoneNumberForPhoneNumberRepresentation:(id)arg1;
- (int)placeDisplayType;
- (void)_removeETAComponents;
- (void)enumerateValidComponentWithValuesOfType:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)successfulComponentWithValuesOfType:(int)arg1;
- (_Bool)phoneNumberOptsOutOfAds:(id)arg1;
- (_Bool)hasExpiredComponentsAsOf:(double)arg1;
- (_Bool)isStandAloneBrand;
- (_Bool)hasBrandMUID;
- (unsigned long long)brandMUID;
- (id)businessURL;
- (id)copyWithoutETAComponents;
- (id)copyWithStrippedOptionalData;
- (id)geoMapItemWithDetourInfo:(id)arg1;
- (void)_readComponents;
- (void)_addNoFlagsComponent:(id)arg1;
- (unsigned long long)componentsCount;
- (void)clearComponents;
- (id)componentAtIndex:(unsigned long long)arg1;
- (void)addComponent:(id)arg1;
- (void)_readRequestData;
- (void)_readPlaceCacheKey;

@end
