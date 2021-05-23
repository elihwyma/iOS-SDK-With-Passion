/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapRegion, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPlaceSearchResponse : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_mapRegion;
    NSMutableArray *_namedFeatures;
    NSString *_nearbySectionHeader;
    NSMutableArray *_placeResults;
    NSMutableArray *_suggestionEntryLists;
    NSData *_suggestionMetadata;
    double _turnaroundTime;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _statusCodeInfo;
    int _status;
    _Bool _isChainResultSet;
    struct {
        unsigned int has_turnaroundTime:1;
        unsigned int has_statusCodeInfo:1;
        unsigned int has_isChainResultSet:1;
        unsigned int read_unknownFields:1;
        unsigned int read_mapRegion:1;
        unsigned int read_namedFeatures:1;
        unsigned int read_nearbySectionHeader:1;
        unsigned int read_placeResults:1;
        unsigned int read_suggestionEntryLists:1;
        unsigned int read_suggestionMetadata:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_mapRegion:1;
        unsigned int wrote_namedFeatures:1;
        unsigned int wrote_nearbySectionHeader:1;
        unsigned int wrote_placeResults:1;
        unsigned int wrote_suggestionEntryLists:1;
        unsigned int wrote_suggestionMetadata:1;
        unsigned int wrote_turnaroundTime:1;
        unsigned int wrote_statusCodeInfo:1;
        unsigned int wrote_status:1;
        unsigned int wrote_isChainResultSet:1;
    } _flags;
}

@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *placeResults;
@property (nonatomic, readonly) _Bool hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (retain, nonatomic) NSMutableArray *suggestionEntryLists;
@property (nonatomic, readonly) _Bool hasSuggestionMetadata;
@property (retain, nonatomic) NSData *suggestionMetadata;
@property (retain, nonatomic) NSMutableArray *namedFeatures;
@property (nonatomic) _Bool hasStatusCodeInfo;
@property (nonatomic) int statusCodeInfo;
@property (nonatomic) _Bool hasTurnaroundTime;
@property (nonatomic) double turnaroundTime;
@property (nonatomic, readonly) _Bool hasNearbySectionHeader;
@property (retain, nonatomic) NSString *nearbySectionHeader;
@property (nonatomic) _Bool hasIsChainResultSet;
@property (nonatomic) _Bool isChainResultSet;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)placeResultType;
+ (Class)suggestionEntryListsType;
+ (Class)namedFeaturesType;

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
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readMapRegion;
- (void)clearSensitiveFields;
- (void)_readNamedFeatures;
- (unsigned long long)namedFeaturesCount;
- (void)clearNamedFeatures;
- (void)_readPlaceResults;
- (void)_addNoFlagsPlaceResult:(id)arg1;
- (void)_readSuggestionEntryLists;
- (void)_addNoFlagsSuggestionEntryLists:(id)arg1;
- (void)_readSuggestionMetadata;
- (void)_addNoFlagsNamedFeatures:(id)arg1;
- (void)_readNearbySectionHeader;
- (unsigned long long)placeResultsCount;
- (void)clearPlaceResults;
- (id)placeResultAtIndex:(unsigned long long)arg1;
- (void)addPlaceResult:(id)arg1;
- (unsigned long long)suggestionEntryListsCount;
- (void)clearSuggestionEntryLists;
- (id)suggestionEntryListsAtIndex:(unsigned long long)arg1;
- (void)addSuggestionEntryLists:(id)arg1;
- (id)namedFeaturesAtIndex:(unsigned long long)arg1;
- (void)addNamedFeatures:(id)arg1;
- (id)statusCodeInfoAsString:(int)arg1;
- (int)StringAsStatusCodeInfo:(id)arg1;

@end
