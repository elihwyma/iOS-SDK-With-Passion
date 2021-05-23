/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOAddress, GEOPlace, GEOPlaceSearchRequest, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPlaceResult : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_additionalPlaces;
    NSMutableArray *_disambiguationLabels;
    unsigned long long _flyoverTourMuid;
    NSMutableArray *_matchedTokens;
    NSMutableArray *_namedFeatures;
    NSMutableArray *_namedFields;
    GEOPlace *_place;
    NSString *_quad;
    GEOPlaceSearchRequest *_revgeoRequestTemplate;
    NSString *_suggestedQuery;
    GEOAddress *_tokenEntity;
    NSMutableArray *_unmatchedStrings;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _cacheControl;
    unsigned int _travelDistance;
    unsigned int _travelTime;
    struct {
        unsigned int has_flyoverTourMuid:1;
        unsigned int has_cacheControl:1;
        unsigned int has_travelDistance:1;
        unsigned int has_travelTime:1;
        unsigned int read_unknownFields:1;
        unsigned int read_additionalPlaces:1;
        unsigned int read_disambiguationLabels:1;
        unsigned int read_matchedTokens:1;
        unsigned int read_namedFeatures:1;
        unsigned int read_namedFields:1;
        unsigned int read_place:1;
        unsigned int read_quad:1;
        unsigned int read_revgeoRequestTemplate:1;
        unsigned int read_suggestedQuery:1;
        unsigned int read_tokenEntity:1;
        unsigned int read_unmatchedStrings:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_additionalPlaces:1;
        unsigned int wrote_disambiguationLabels:1;
        unsigned int wrote_flyoverTourMuid:1;
        unsigned int wrote_matchedTokens:1;
        unsigned int wrote_namedFeatures:1;
        unsigned int wrote_namedFields:1;
        unsigned int wrote_place:1;
        unsigned int wrote_quad:1;
        unsigned int wrote_revgeoRequestTemplate:1;
        unsigned int wrote_suggestedQuery:1;
        unsigned int wrote_tokenEntity:1;
        unsigned int wrote_unmatchedStrings:1;
        unsigned int wrote_cacheControl:1;
        unsigned int wrote_travelDistance:1;
        unsigned int wrote_travelTime:1;
    } _flags;
}

@property (retain, nonatomic) GEOPlace *place;
@property (retain, nonatomic) NSMutableArray *additionalPlaces;
@property (nonatomic, readonly) _Bool hasSuggestedQuery;
@property (retain, nonatomic) NSString *suggestedQuery;
@property (nonatomic) _Bool hasTravelTime;
@property (nonatomic) unsigned int travelTime;
@property (nonatomic) _Bool hasTravelDistance;
@property (nonatomic) unsigned int travelDistance;
@property (nonatomic, readonly) _Bool hasTokenEntity;
@property (retain, nonatomic) GEOAddress *tokenEntity;
@property (nonatomic, readonly) _Bool hasQuad;
@property (retain, nonatomic) NSString *quad;
@property (retain, nonatomic) NSMutableArray *unmatchedStrings;
@property (retain, nonatomic) NSMutableArray *namedFeatures;
@property (nonatomic, readonly) _Bool hasRevgeoRequestTemplate;
@property (retain, nonatomic) GEOPlaceSearchRequest *revgeoRequestTemplate;
@property (retain, nonatomic) NSMutableArray *matchedTokens;
@property (nonatomic) _Bool hasFlyoverTourMuid;
@property (nonatomic) unsigned long long flyoverTourMuid;
@property (nonatomic) _Bool hasCacheControl;
@property (nonatomic) int cacheControl;
@property (retain, nonatomic) NSMutableArray *disambiguationLabels;
@property (retain, nonatomic) NSMutableArray *namedFields;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)disambiguationLabelType;
+ (Class)additionalPlaceType;
+ (Class)unmatchedStringType;
+ (Class)namedFeatureType;
+ (Class)matchedTokenType;
+ (Class)namedFieldType;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)clearSensitiveFields;
- (void)_readDisambiguationLabels;
- (void)_addNoFlagsDisambiguationLabel:(id)arg1;
- (unsigned long long)disambiguationLabelsCount;
- (void)clearDisambiguationLabels;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (void)addDisambiguationLabel:(id)arg1;
- (void)_readPlace;
- (void)_readAdditionalPlaces;
- (void)_addNoFlagsAdditionalPlace:(id)arg1;
- (void)_readSuggestedQuery;
- (void)_readTokenEntity;
- (void)_readQuad;
- (void)_readUnmatchedStrings;
- (void)_addNoFlagsUnmatchedString:(id)arg1;
- (void)_readNamedFeatures;
- (void)_addNoFlagsNamedFeature:(id)arg1;
- (void)_readRevgeoRequestTemplate;
- (void)_readMatchedTokens;
- (void)_addNoFlagsMatchedToken:(id)arg1;
- (void)_readNamedFields;
- (void)_addNoFlagsNamedField:(id)arg1;
- (unsigned long long)additionalPlacesCount;
- (void)clearAdditionalPlaces;
- (id)additionalPlaceAtIndex:(unsigned long long)arg1;
- (void)addAdditionalPlace:(id)arg1;
- (unsigned long long)unmatchedStringsCount;
- (void)clearUnmatchedStrings;
- (id)unmatchedStringAtIndex:(unsigned long long)arg1;
- (void)addUnmatchedString:(id)arg1;
- (unsigned long long)namedFeaturesCount;
- (void)clearNamedFeatures;
- (id)namedFeatureAtIndex:(unsigned long long)arg1;
- (void)addNamedFeature:(id)arg1;
- (unsigned long long)matchedTokensCount;
- (void)clearMatchedTokens;
- (id)matchedTokenAtIndex:(unsigned long long)arg1;
- (void)addMatchedToken:(id)arg1;
- (unsigned long long)namedFieldsCount;
- (void)clearNamedFields;
- (id)namedFieldAtIndex:(unsigned long long)arg1;
- (void)addNamedField:(id)arg1;
- (id)cacheControlAsString:(int)arg1;
- (int)StringAsCacheControl:(id)arg1;
- (id)geoMapItem;

@end
