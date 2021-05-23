/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDDeparturePredicate, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitTripStopTimeFilter : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDDeparturePredicate *_departurePredicateCountdown;
    GEOPDDeparturePredicate *_departurePredicateStamp;
    struct GEOPDTimeRange _operatingHoursRange;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _includeRealTimeDepartures;
    CDStruct_34971647 _flags;
}

@property (nonatomic, readonly) _Bool hasDeparturePredicateCountdown;
@property (retain, nonatomic) GEOPDDeparturePredicate *departurePredicateCountdown;
@property (nonatomic, readonly) _Bool hasDeparturePredicateStamp;
@property (retain, nonatomic) GEOPDDeparturePredicate *departurePredicateStamp;
@property (nonatomic) _Bool hasOperatingHoursRange;
@property (nonatomic) struct GEOPDTimeRange operatingHoursRange;
@property (nonatomic) _Bool hasIncludeRealTimeDepartures;
@property (nonatomic) _Bool includeRealTimeDepartures;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

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
- (void)_readDeparturePredicateCountdown;
- (void)_readDeparturePredicateStamp;

@end
