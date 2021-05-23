/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPlaceSearchResponse, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOETAResult : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPlaceSearchResponse *_placeSearchResponse;
    NSMutableArray *_sortedETAs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _distance;
    unsigned int _historicTravelTime;
    unsigned int _liveTravelTime;
    int _status;
    struct {
        unsigned int has_distance:1;
        unsigned int has_historicTravelTime:1;
        unsigned int has_liveTravelTime:1;
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_placeSearchResponse:1;
        unsigned int read_sortedETAs:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_placeSearchResponse:1;
        unsigned int wrote_sortedETAs:1;
        unsigned int wrote_distance:1;
        unsigned int wrote_historicTravelTime:1;
        unsigned int wrote_liveTravelTime:1;
        unsigned int wrote_status:1;
    } _flags;
}

@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasLiveTravelTime;
@property (nonatomic) unsigned int liveTravelTime;
@property (nonatomic) _Bool hasHistoricTravelTime;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic, readonly) _Bool hasPlaceSearchResponse;
@property (retain, nonatomic) GEOPlaceSearchResponse *placeSearchResponse;
@property (nonatomic) _Bool hasDistance;
@property (nonatomic) unsigned int distance;
@property (retain, nonatomic) NSMutableArray *sortedETAs;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)sortedETAType;

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
- (void)clearSensitiveFields;
- (void)_readPlaceSearchResponse;
- (void)_readSortedETAs;
- (void)_addNoFlagsSortedETA:(id)arg1;
- (unsigned long long)sortedETAsCount;
- (void)clearSortedETAs;
- (id)sortedETAAtIndex:(unsigned long long)arg1;
- (void)addSortedETA:(id)arg1;

@end
